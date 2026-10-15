#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/DSEType.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/RPG/GameCore/ECommonAITag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
class DEEJKBIMHAA;
class GKLLKNJFFJP;
class JPEPPDMLPLG;
class OONGDLIDJJJ;
namespace RPG::GameCore { class AIDecisionBaseConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillConfig; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDGINPAOHFA_AKHKMFDIMNL_OFFSET UNITYSDK_OFFSET(0x162EC080)
#define BDGINPAOHFA_CCJPNIDNDDH_OFFSET UNITYSDK_OFFSET(0x162ECCD0)
#define BDGINPAOHFA_EIFPLLBJKIM_OFFSET UNITYSDK_OFFSET(0x162EB720)
#define BDGINPAOHFA_ELJHAHOCAKC_OFFSET UNITYSDK_OFFSET(0x162EC130)
#define BDGINPAOHFA_FKHHOIGIKIP_OFFSET UNITYSDK_OFFSET(0x162EB500)
#define BDGINPAOHFA_FOMMBIGKEPJ_OFFSET UNITYSDK_OFFSET(0x162EB440)
#define BDGINPAOHFA_GET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x162EB270)
#define BDGINPAOHFA_GLDGFLAFJEB_OFFSET UNITYSDK_OFFSET(0x162EC790)
#define BDGINPAOHFA_HCPJHGNNLDI_OFFSET UNITYSDK_OFFSET(0x162ECF10)
#define BDGINPAOHFA_IAHHAJGKKEL_OFFSET UNITYSDK_OFFSET(0x162EB3B0)
#define BDGINPAOHFA_JCANDKEJKJM_OFFSET UNITYSDK_OFFSET(0x162ECD80)
#define BDGINPAOHFA_JCCJLHANIHG_OFFSET UNITYSDK_OFFSET(0x162EC9D0)
#define BDGINPAOHFA_JFAAJNMHJDP_OFFSET UNITYSDK_OFFSET(0x162ED0A0)
#define BDGINPAOHFA_JKAPOBLCNFO_OFFSET UNITYSDK_OFFSET(0x162EB330)
#define BDGINPAOHFA_KDKFIFEIBEO_OFFSET UNITYSDK_OFFSET(0x162EBC80)
#define BDGINPAOHFA_KHDGPGNIGEL_OFFSET UNITYSDK_OFFSET(0x162ED880)
#define BDGINPAOHFA_KMBHHMCPIHI_OFFSET UNITYSDK_OFFSET(0x162ED230)
#define BDGINPAOHFA_LPFCJABHHNL_OFFSET UNITYSDK_OFFSET(0x162ECAA0)
#define BDGINPAOHFA_LPHBGHLCCHK_OFFSET UNITYSDK_OFFSET(0x162EC8A0)
#define BDGINPAOHFA_MJDCFLHLPLJ_OFFSET UNITYSDK_OFFSET(0x162ECEB0)
#define BDGINPAOHFA_MPCHPJHMBKP_OFFSET UNITYSDK_OFFSET(0x162ECBE0)
#define BDGINPAOHFA_NCADOCFAMNP_OFFSET UNITYSDK_OFFSET(0x162ED1A0)
#define BDGINPAOHFA_OOGEFGADNDP_OFFSET UNITYSDK_OFFSET(0x162EB930)
#define BDGINPAOHFA_PAHFDNAMMFM_OFFSET UNITYSDK_OFFSET(0x162EB290)
#define BDGINPAOHFA_SET_GLOBALVARS_OFFSET UNITYSDK_OFFSET(0x162EB280)

inline static constexpr unsigned int BDGINPAOHFA_TypeDefinitionIndex = 54343;

	class BDGINPAOHFA : public ::System::Object
	{
	public:
		static ::GKLLKNJFFJP** StaticGet__GlobalVars_k__BackingField()
		{
			return (::GKLLKNJFFJP**)UnitySDK::FromName("", "BDGINPAOHFA")->GetStaticField(0x47B40);
		}

		// static const ::System::Object PMIOOMFMFBH; // 0x0
		// static const ::System::Object AOBBEFCCMHJ; // 0x0
		// static const ::System::Object KILCGPPBJHK; // 0x0
		// static const ::System::Object IHEJFHNLPNM; // 0x0
		// static const ::System::Object MPIMBHHINHE; // 0x0
		// static const ::System::Object MDBEPEMCLAD; // 0x0
		// static const ::System::Object PODBKDOKDKM; // 0x0
		// static const ::System::Object AENKPLMFCFJ; // 0x0
		// static const ::System::Object HPBLFLNPPBL; // 0x0
		// static const ::System::Object LGGAHHOMJKD; // 0x0
		// static const ::System::Object PIADDIBHDAA; // 0x0
		// static const ::System::Object HHKCFCAHJIB; // 0x0
		// static const ::System::Object DHILAOHCCNI; // 0x0
		// static const ::System::Object IEKPLLNKHKD; // 0x0
		// static const ::System::Object JMGDJFMMFAN; // 0x0
		// static const ::System::Object KPNAJIFLALI; // 0x0
		// static const ::System::Object POKBBAOFAMP; // 0x0
		// static const ::System::Object BEPPMHONHAN; // 0x0
		// static const ::System::Object MFGGNNAKBKD; // 0x0
		// static const ::System::Object PHHIMCGOLNE; // 0x0
		// static const ::System::Object CGLCICDGKGB; // 0x0
		static ::GKLLKNJFFJP* get_GlobalVars()
		{
			return ((::GKLLKNJFFJP*(*)())((::PBYTE)hIl2Cpp + BDGINPAOHFA_GET_GLOBALVARS_OFFSET))();
		}

		static ::System::Void set_GlobalVars(::GKLLKNJFFJP* a1)
		{
			return ((::System::Void(*)(::GKLLKNJFFJP*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_SET_GLOBALVARS_OFFSET))(a1);
		}

		static ::System::Int32 PAHFDNAMMFM(::OONGDLIDJJJ* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::OONGDLIDJJJ*, ::System::String*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_PAHFDNAMMFM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::SkillConfig* JKAPOBLCNFO(::OONGDLIDJJJ* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::SkillConfig*(*)(::OONGDLIDJJJ*, ::System::Int32))((::PBYTE)hIl2Cpp + BDGINPAOHFA_JKAPOBLCNFO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::SkillData* IAHHAJGKKEL(::OONGDLIDJJJ* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::SkillData*(*)(::OONGDLIDJJJ*, ::System::Int32))((::PBYTE)hIl2Cpp + BDGINPAOHFA_IAHHAJGKKEL_OFFSET))(a1, a2);
		}

		static ::System::Int32 FOMMBIGKEPJ(::OONGDLIDJJJ* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::OONGDLIDJJJ*, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BDGINPAOHFA_FOMMBIGKEPJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FKHHOIGIKIP(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_FKHHOIGIKIP_OFFSET))(a1, a2);
		}

		static ::System::Int32 EIFPLLBJKIM(::OONGDLIDJJJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::OONGDLIDJJJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + BDGINPAOHFA_EIFPLLBJKIM_OFFSET))(a1, a2);
		}

		static ::System::Boolean OOGEFGADNDP(::OONGDLIDJJJ* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::OONGDLIDJJJ*, ::System::UInt32))((::PBYTE)hIl2Cpp + BDGINPAOHFA_OOGEFGADNDP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GameEntity* KDKFIFEIBEO(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::DEEJKBIMHAA* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::DEEJKBIMHAA*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_KDKFIFEIBEO_OFFSET))(a1, a2);
		}

		static ::JPEPPDMLPLG* AKHKMFDIMNL(::RPG::GameCore::DSEType a1, ::RPG::GameCore::AIDecisionBaseConfig* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::JPEPPDMLPLG*(*)(::RPG::GameCore::DSEType, ::RPG::GameCore::AIDecisionBaseConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_AKHKMFDIMNL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ELJHAHOCAKC(::RPG::GameCore::TransformComponent* a1, ::System::Single a2, ::RPG::MVector3 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TransformComponent*, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BDGINPAOHFA_ELJHAHOCAKC_OFFSET))(a1, a2, a3);
		}

		static ::System::Single GLDGFLAFJEB(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_GLDGFLAFJEB_OFFSET))(a1);
		}

		static ::System::Void LPHBGHLCCHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_LPHBGHLCCHK_OFFSET))(a1);
		}

		static ::RPG::GameCore::ECharacterNavSteerMode JCCJLHANIHG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterMotionFlag a2)
		{
			return ((::RPG::GameCore::ECharacterNavSteerMode(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + BDGINPAOHFA_JCCJLHANIHG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint LPFCJABHHNL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ECommonAITag a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::ECommonAITag))((::PBYTE)hIl2Cpp + BDGINPAOHFA_LPFCJABHHNL_OFFSET))(a1, a2);
		}

		static ::System::String* MPCHPJHMBKP(::RPG::GameCore::ECommonAITag a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::ECommonAITag))((::PBYTE)hIl2Cpp + BDGINPAOHFA_MPCHPJHMBKP_OFFSET))(a1);
		}

		static ::RPG::GameCore::ECommonAITag CCJPNIDNDDH(::System::String* a1)
		{
			return ((::RPG::GameCore::ECommonAITag(*)(::System::String*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_CCJPNIDNDDH_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint JCANDKEJKJM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_JCANDKEJKJM_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint MJDCFLHLPLJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_MJDCFLHLPLJ_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint HCPJHGNNLDI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BDGINPAOHFA_HCPJHGNNLDI_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint JFAAJNMHJDP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BDGINPAOHFA_JFAAJNMHJDP_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint NCADOCFAMNP(::RPG::GameCore::SkillData* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_NCADOCFAMNP_OFFSET))(a1);
		}

		static ::RPG::GameCore::FixPoint KMBHHMCPIHI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_KMBHHMCPIHI_OFFSET))(a1);
		}

		static ::System::Int32 KHDGPGNIGEL(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + BDGINPAOHFA_KHDGPGNIGEL_OFFSET))(a1);
		}

	};

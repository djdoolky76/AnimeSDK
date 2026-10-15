#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FHICFKAABFP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatEntityInfo; }
namespace RPG::GameCore { class PlayMunicipalChat; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPLFFIPDJJG_ACIAOOHOLJA_OFFSET UNITYSDK_OFFSET(0x12655400)
#define DPLFFIPDJJG_BNAFKHPAJOI_OFFSET UNITYSDK_OFFSET(0x12654830)
#define DPLFFIPDJJG_CFKKNKJPJLM_OFFSET UNITYSDK_OFFSET(0x12653E10)
#define DPLFFIPDJJG_CTOR_OFFSET UNITYSDK_OFFSET(0x12653600)
#define DPLFFIPDJJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12654B60)
#define DPLFFIPDJJG_EDINOBKBEME_OFFSET UNITYSDK_OFFSET(0x12654E30)
#define DPLFFIPDJJG_FDHLNJPENNF_OFFSET UNITYSDK_OFFSET(0x12654220)
#define DPLFFIPDJJG_FHAFHOOAKJN_OFFSET UNITYSDK_OFFSET(0x12653AE0)
#define DPLFFIPDJJG_FKJLMIOEIBC_OFFSET UNITYSDK_OFFSET(0x12653CA0)
#define DPLFFIPDJJG_HFLJEOLFFPH_OFFSET UNITYSDK_OFFSET(0x12655370)
#define DPLFFIPDJJG_HIPCJHIFGBP_OFFSET UNITYSDK_OFFSET(0x126542A0)
#define DPLFFIPDJJG_ILJPLGJGJFD_OFFSET UNITYSDK_OFFSET(0x12654FD0)
#define DPLFFIPDJJG_KENJEMELLHM_OFFSET UNITYSDK_OFFSET(0x12653F70)
#define DPLFFIPDJJG_LAGKACPDGFB_OFFSET UNITYSDK_OFFSET(0x12654990)
#define DPLFFIPDJJG_LODJOCMNDKG_OFFSET UNITYSDK_OFFSET(0x12654F30)
#define DPLFFIPDJJG_NEAHBOPHKMM_OFFSET UNITYSDK_OFFSET(0x12655490)
#define DPLFFIPDJJG_NKOLEGDIJCF_OFFSET UNITYSDK_OFFSET(0x126551E0)
#define DPLFFIPDJJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12653800)
#define DPLFFIPDJJG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x126547D0)
#define DPLFFIPDJJG_TICK_OFFSET UNITYSDK_OFFSET(0x12654C80)

inline static constexpr unsigned int DPLFFIPDJJG_TypeDefinitionIndex = 58271;

	class DPLFFIPDJJG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayMunicipalChat* EJJEEJENLDA; // 0x18
		::System::String* PPNDOKKCGLJ; // 0x20
		::FHICFKAABFP* BCMPINBEIHH; // 0x28
		::Il2CppArray<::RPG::GameCore::MunicipalChatEntityInfo*>* LNBNKCOCGEA; // 0x30
		::System::String* PGHBCPINJBE; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* BENDCBPOFIG; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::Object* LOJOFACFJBB; // 0x50
		::System::Boolean DGDEBKDAMMG; // 0x58
		::System::Boolean NJEMCPDFAOK; // 0x59
		::System::Byte _padding0[0x2];
		::System::Single LGGPOKAPMNI; // 0x5C
		::RPG::GameCore::StringHash CJDELMNMBMD; // 0x60
		// static const ::System::String* GBHGJMLLLJB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMunicipalChat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMunicipalChat*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void HIPCJHIFGBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_HIPCJHIFGBP_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_TICK_OFFSET))(this, a1);
		}

		::System::Boolean FDHLNJPENNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_FDHLNJPENNF_OFFSET))(this);
		}

		::System::Void CFKKNKJPJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_CFKKNKJPJLM_OFFSET))(this);
		}

		::System::Void BNAFKHPAJOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_BNAFKHPAJOI_OFFSET))(this);
		}

		::System::Boolean FHAFHOOAKJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_FHAFHOOAKJN_OFFSET))(this);
		}

		::System::Single FKJLMIOEIBC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_FKJLMIOEIBC_OFFSET))(this);
		}

		::System::Void EDINOBKBEME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_EDINOBKBEME_OFFSET))(this);
		}

		::System::Void KENJEMELLHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_KENJEMELLHM_OFFSET))(this);
		}

		::System::Void LAGKACPDGFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_LAGKACPDGFB_OFFSET))(this);
		}

		::System::Void LODJOCMNDKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_LODJOCMNDKG_OFFSET))(this, a1);
		}

		::System::Void NKOLEGDIJCF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_NKOLEGDIJCF_OFFSET))(this, a1);
		}

		::System::Void HFLJEOLFFPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_HFLJEOLFFPH_OFFSET))(this, a1);
		}

		::System::Void ACIAOOHOLJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_ACIAOOHOLJA_OFFSET))(this, a1);
		}

		::System::Void NEAHBOPHKMM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_NEAHBOPHKMM_OFFSET))(this, a1);
		}

		::System::Void ILJPLGJGJFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPLFFIPDJJG_ILJPLGJGJFD_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyChangeReason.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameCoreParamFlag.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class CBMNFKJDDCL;
class CLHNNJKABAO;
class DGBEPKNAJBM;
class ENEIHJJPNPI;
class ENLBMCKHJOG;
class GGDONPKFEDJ;
class HIOAMIPNLIN;
class KADNINAMKGA;
class LPNPMKNMMOK;
class NCJILFFNINI;
class OEFEDLLLAEL;
class PKJOIDJMKDC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LPNPMKNMMOK_AFNAFKFOKKO_1_OFFSET UNITYSDK_OFFSET(0xB82EE20)
#define LPNPMKNMMOK_AFNAFKFOKKO_OFFSET UNITYSDK_OFFSET(0xB82EDD0)
#define LPNPMKNMMOK_AJBGLLIFIOD_OFFSET UNITYSDK_OFFSET(0xB82EB80)
#define LPNPMKNMMOK_BALMONPGAPD_OFFSET UNITYSDK_OFFSET(0xB82EC40)
#define LPNPMKNMMOK_BPBDPHHDDJH_OFFSET UNITYSDK_OFFSET(0xB82F080)
#define LPNPMKNMMOK_CLEAR_OFFSET UNITYSDK_OFFSET(0xB82F120)
#define LPNPMKNMMOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB82F370)
#define LPNPMKNMMOK_DEJMLAJKECN_OFFSET UNITYSDK_OFFSET(0xB82E9F0)
#define LPNPMKNMMOK_DGFFENKFJPP_OFFSET UNITYSDK_OFFSET(0xB82E850)
#define LPNPMKNMMOK_DODDGHFGAHJ_OFFSET UNITYSDK_OFFSET(0xB82E6E0)
#define LPNPMKNMMOK_ECHAMBBHCGE_OFFSET UNITYSDK_OFFSET(0xB82E970)
#define LPNPMKNMMOK_EOMHLNEBJOE_OFFSET UNITYSDK_OFFSET(0xB82E730)
#define LPNPMKNMMOK_FCPIFDFOEEO_OFFSET UNITYSDK_OFFSET(0xB82EA70)
#define LPNPMKNMMOK_FIKDHODBMIG_1_OFFSET UNITYSDK_OFFSET(0xB82ED80)
#define LPNPMKNMMOK_FIKDHODBMIG_OFFSET UNITYSDK_OFFSET(0xB82ED30)
#define LPNPMKNMMOK_GACGMKDHBKH_1_OFFSET UNITYSDK_OFFSET(0xB82F030)
#define LPNPMKNMMOK_GACGMKDHBKH_OFFSET UNITYSDK_OFFSET(0xB82EFE0)
#define LPNPMKNMMOK_GFENPJHNMNI_OFFSET UNITYSDK_OFFSET(0xB82EEC0)
#define LPNPMKNMMOK_GMMGJBCFEOB_OFFSET UNITYSDK_OFFSET(0xB801A90)
#define LPNPMKNMMOK_HHCNLAECFMH_1_OFFSET UNITYSDK_OFFSET(0xB82ECE0)
#define LPNPMKNMMOK_HHCNLAECFMH_OFFSET UNITYSDK_OFFSET(0xB82EC90)
#define LPNPMKNMMOK_JDNJFANBHEH_OFFSET UNITYSDK_OFFSET(0xB82F0D0)
#define LPNPMKNMMOK_JGDMJCGOIJJ_OFFSET UNITYSDK_OFFSET(0xB82EE70)
#define LPNPMKNMMOK_LDIIOMOOGGN_OFFSET UNITYSDK_OFFSET(0xB82E7D0)
#define LPNPMKNMMOK_MFGAIBPLFJJ_OFFSET UNITYSDK_OFFSET(0xB82EBF0)
#define LPNPMKNMMOK_MMCKHNBPIAB_OFFSET UNITYSDK_OFFSET(0xB82E780)
#define LPNPMKNMMOK_OMAAOOHOOOA_OFFSET UNITYSDK_OFFSET(0xB82EF90)
#define LPNPMKNMMOK_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xB82E430)

inline static constexpr unsigned int LPNPMKNMMOK_TypeDefinitionIndex = 56184;

	class LPNPMKNMMOK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* EJCOCNJPBEF; // 0x10
		::KADNINAMKGA* MFJPIGNGAJA; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CGNJAJMEKOI; // 0x20
		::ENEIHJJPNPI* FMCJJBALBEN; // 0x28
		::OEFEDLLLAEL* LPPHAHOKNHM; // 0x30
		::System::Array* HKEKPENGDHO; // 0x38
		::RPG::GameCore::GameEntity* BCBBPMNBGEI; // 0x40
		::HIOAMIPNLIN* EAEJGPLLGMI; // 0x48
		::DGBEPKNAJBM* HCFICKADJCO; // 0x50
		::Il2CppArray<::System::String*>* ANEGIMPIEHL; // 0x58
		::Il2CppArray<::RPG::GameCore::FixPoint>* IFLBAAABKAI; // 0x60
		::GGDONPKFEDJ* FLKDNJGEJFA; // 0x68
		::ENLBMCKHJOG* OAIGGIPGADI; // 0x70
		::CBMNFKJDDCL* FBMGIKMPCBF; // 0x78
		::PKJOIDJMKDC* ONNHLHJHLDP; // 0x80
		::CLHNNJKABAO* MGOHJJNKGNJ; // 0x88
		::NCJILFFNINI* GNHAPABLMDF; // 0x90
		::RPG::GameCore::JsonEnum* OMBAHHMBKIH; // 0x98
		::RPG::GameCore::AbilityPropertyChangeReason NLANBNCCJKI; // 0xA0
		::RPG::GameCore::TurnBasedModifierEvent JPCHBAPJPOE; // 0xA4
		::RPG::GameCore::GameCoreParamFlag HBIINKOCBLO; // 0xA8
		// static const ::System::Object KJIJAKANCBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_CTOR_OFFSET))(this);
		}

		::LPNPMKNMMOK* PPEGOIODAKI(::LPNPMKNMMOK* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::LPNPMKNMMOK*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* DODDGHFGAHJ(::HIOAMIPNLIN* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_DODDGHFGAHJ_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* EOMHLNEBJOE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_EOMHLNEBJOE_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* MMCKHNBPIAB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_MMCKHNBPIAB_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* LDIIOMOOGGN(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_LDIIOMOOGGN_OFFSET))(this, a1, a2);
		}

		::ENEIHJJPNPI* DGFFENKFJPP()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_DGFFENKFJPP_OFFSET))(this);
		}

		::ENEIHJJPNPI* ECHAMBBHCGE(::RPG::GameCore::StringHash a1)
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_ECHAMBBHCGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GMMGJBCFEOB(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_GMMGJBCFEOB_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* DEJMLAJKECN(::System::String* a1, ::System::Int32 a2)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_DEJMLAJKECN_OFFSET))(this, a1, a2);
		}

		::LPNPMKNMMOK* FCPIFDFOEEO(::Il2CppArray<::System::String*>* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_FCPIFDFOEEO_OFFSET))(this, a1);
		}

		::System::String* AJBGLLIFIOD(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_AJBGLLIFIOD_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* MFGAIBPLFJJ(::RPG::GameCore::AbilityPropertyChangeReason a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::RPG::GameCore::AbilityPropertyChangeReason))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_MFGAIBPLFJJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::AbilityPropertyChangeReason BALMONPGAPD()
		{
			return ((::RPG::GameCore::AbilityPropertyChangeReason(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_BALMONPGAPD_OFFSET))(this);
		}

		::LPNPMKNMMOK* HHCNLAECFMH(::NCJILFFNINI* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::NCJILFFNINI*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_HHCNLAECFMH_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* HHCNLAECFMH_1(::KADNINAMKGA* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::KADNINAMKGA*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_HHCNLAECFMH_1_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* FIKDHODBMIG(::CLHNNJKABAO* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::CLHNNJKABAO*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_FIKDHODBMIG_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* FIKDHODBMIG_1(::ENLBMCKHJOG* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::ENLBMCKHJOG*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_FIKDHODBMIG_1_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* AFNAFKFOKKO(::DGBEPKNAJBM* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::DGBEPKNAJBM*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_AFNAFKFOKKO_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* AFNAFKFOKKO_1(::OEFEDLLLAEL* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::OEFEDLLLAEL*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_AFNAFKFOKKO_1_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* JGDMJCGOIJJ(::PKJOIDJMKDC* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::PKJOIDJMKDC*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_JGDMJCGOIJJ_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* GFENPJHNMNI(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_GFENPJHNMNI_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* OMAAOOHOOOA(::RPG::GameCore::GameCoreParamFlag a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::RPG::GameCore::GameCoreParamFlag))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_OMAAOOHOOOA_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* GACGMKDHBKH(::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_GACGMKDHBKH_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* GACGMKDHBKH_1(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_GACGMKDHBKH_1_OFFSET))(this, a1);
		}

		::LPNPMKNMMOK* BPBDPHHDDJH(::RPG::GameCore::JsonEnum* a1)
		{
			return ((::LPNPMKNMMOK*(*)(::PVOID, ::RPG::GameCore::JsonEnum*))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_BPBDPHHDDJH_OFFSET))(this, a1);
		}

		::System::Void JDNJFANBHEH(::RPG::GameCore::TurnBasedModifierEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_JDNJFANBHEH_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNPMKNMMOK_CLEAR_OFFSET))(this);
		}

	};

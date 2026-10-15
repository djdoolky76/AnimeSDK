#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/Object.h"
class ENDBKLKOBFP;
class IFBFJDCECML;
class OMNEDLJOPNM;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define IFBOFKLBBKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C699190)
#define IFBOFKLBBKO_DJIHKFDABNB_OFFSET UNITYSDK_OFFSET(0x1C699440)
#define IFBOFKLBBKO_GET_ACTIVELOCKER_OFFSET UNITYSDK_OFFSET(0x1C699E10)
#define IFBOFKLBBKO_KJGHOLDMFDP_OFFSET UNITYSDK_OFFSET(0x1C699780)
#define IFBOFKLBBKO_NAFFGLBLHDM_OFFSET UNITYSDK_OFFSET(0x1C699390)
#define IFBOFKLBBKO_OPPIGBNGLMP_OFFSET UNITYSDK_OFFSET(0x1C6992D0)
#define IFBOFKLBBKO_PHANFIFHKCN_OFFSET UNITYSDK_OFFSET(0x1C6998D0)
#define IFBOFKLBBKO_SET_ACTIVELOCKER_OFFSET UNITYSDK_OFFSET(0x1C699E20)

inline static constexpr unsigned int IFBOFKLBBKO_TypeDefinitionIndex = 37242;

	class IFBOFKLBBKO : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<::System::UInt32, ::OMNEDLJOPNM*>* HPLNPAFFHPM; // 0x10
		::OMNEDLJOPNM* _ActiveLocker_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_CTOR_OFFSET))(this);
		}

		::System::Void OPPIGBNGLMP(::System::UInt64 a1, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*, ::System::Int32))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_OPPIGBNGLMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NAFFGLBLHDM(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_NAFFGLBLHDM_OFFSET))(this, a1);
		}

		::System::Void DJIHKFDABNB(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Boolean a3, ::RPG::GameCore::CakeRaceTargetLockStatus a4)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Boolean, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_DJIHKFDABNB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KJGHOLDMFDP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::ENDBKLKOBFP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::ENDBKLKOBFP*))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_KJGHOLDMFDP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PHANFIFHKCN(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_PHANFIFHKCN_OFFSET))(this, a1, a2, a3);
		}

		::OMNEDLJOPNM* get_ActiveLocker()
		{
			return ((::OMNEDLJOPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_GET_ACTIVELOCKER_OFFSET))(this);
		}

		::System::Void set_ActiveLocker(::OMNEDLJOPNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNEDLJOPNM*))((::PBYTE)hIl2Cpp + IFBOFKLBBKO_SET_ACTIVELOCKER_OFFSET))(this, a1);
		}

	};

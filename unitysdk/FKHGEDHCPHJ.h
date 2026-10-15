#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FKHGEDHCPHJ_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0x157F4E70)
#define FKHGEDHCPHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x157F5570)
#define FKHGEDHCPHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x157F3E70)
#define FKHGEDHCPHJ_DDDMPAJFHIK_OFFSET UNITYSDK_OFFSET(0x157F4C20)
#define FKHGEDHCPHJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157F4200)
#define FKHGEDHCPHJ_DOONENTER_OFFSET UNITYSDK_OFFSET(0x157F4350)
#define FKHGEDHCPHJ_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x157F4410)
#define FKHGEDHCPHJ_DOONTICK_OFFSET UNITYSDK_OFFSET(0x157F44E0)
#define FKHGEDHCPHJ_EDHCPLHCHDC_OFFSET UNITYSDK_OFFSET(0x157F4DE0)
#define FKHGEDHCPHJ_EDMDDIAPAGE_OFFSET UNITYSDK_OFFSET(0x157F4710)
#define FKHGEDHCPHJ_GOCDJDMPGDJ_OFFSET UNITYSDK_OFFSET(0x157F4990)
#define FKHGEDHCPHJ_IIIFGEFJFIG_OFFSET UNITYSDK_OFFSET(0x157F46B0)
#define FKHGEDHCPHJ_LAPPJDCCDOC_OFFSET UNITYSDK_OFFSET(0x157F45F0)
#define FKHGEDHCPHJ_LEJOHFLKHNC_OFFSET UNITYSDK_OFFSET(0x157F45E0)

inline static constexpr unsigned int FKHGEDHCPHJ_TypeDefinitionIndex = 78784;

	class FKHGEDHCPHJ : public ::EDLDHDMLJDH
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* KINLCNAJDMC; // 0xA0
		::System::Func_1<::System::Boolean>* CJNMKFKLPBO; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action*>* PLOIEGDDOKF; // 0xB0
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0xB8
		::System::Boolean EPBLHFIDDEI; // 0xC0
		::System::Boolean EGNEMDJGBEM; // 0xC1
		::System::Boolean KIAFGDOOKHL; // 0xC2
		::System::Byte _padding0[0x1];
		::System::Single EIDFFKGFFIO; // 0xC4
		static ::System::String** StaticGet_MJACCEBBOOF()
		{
			return (::System::String**)UnitySDK::FromName("", "FKHGEDHCPHJ")->GetStaticField(0x6DF50);
		}

		// static const ::System::Object JKOJMLHLCEL; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>* a3, ::Il2CppArray<::System::Action*>* a4, ::System::Func_1<::System::Boolean>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::Il2CppArray<::RPG::GameCore::OptionTriggerInfo*>*, ::Il2CppArray<::System::Action*>*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_DOONTICK_OFFSET))(this, a1);
		}

		::System::Boolean LEJOHFLKHNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_LEJOHFLKHNC_OFFSET))(this);
		}

		::System::Void LAPPJDCCDOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_LAPPJDCCDOC_OFFSET))(this, a1);
		}

		::System::Void IIIFGEFJFIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_IIIFGEFJFIG_OFFSET))(this, a1);
		}

		::System::Void EDMDDIAPAGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_EDMDDIAPAGE_OFFSET))(this);
		}

		::System::Void GOCDJDMPGDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_GOCDJDMPGDJ_OFFSET))(this);
		}

		::System::Void DDDMPAJFHIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_DDDMPAJFHIK_OFFSET))(this);
		}

		::System::Boolean EDHCPLHCHDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_EDHCPLHCHDC_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKHGEDHCPHJ_BKCPMPMKLFI_OFFSET))(this, a1);
		}

	};

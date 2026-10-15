#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBAAOAOLLBM;
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::GameCore { class EffectDurationConfig; }
namespace RPG::GameCore { class TriggerEffect; }

#define JBAAOAOLLBM_ACGBIOICLEO_OFFSET UNITYSDK_OFFSET(0x1654ED20)
#define JBAAOAOLLBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1654EF30)
#define JBAAOAOLLBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1654EBD0)
#define JBAAOAOLLBM_DMPEPICAKDO_OFFSET UNITYSDK_OFFSET(0x1654EA50)
#define JBAAOAOLLBM_EMBNMMFLIBM_OFFSET UNITYSDK_OFFSET(0x1654ED80)
#define JBAAOAOLLBM_GGPHICKOPKI_OFFSET UNITYSDK_OFFSET(0x1654EEC0)
#define JBAAOAOLLBM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1654EA80)
#define JBAAOAOLLBM_MAFHGBDOKPO_OFFSET UNITYSDK_OFFSET(0x1654EA70)

inline static constexpr unsigned int JBAAOAOLLBM_TypeDefinitionIndex = 57169;

	class JBAAOAOLLBM : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* FHMDJOBOAAB; // 0x10
		::System::Single NMCJLENIEFC; // 0x18
		static ::JBAAOAOLLBM** StaticGet_PILDFLBIFJN()
		{
			return (::JBAAOAOLLBM**)UnitySDK::FromName("", "JBAAOAOLLBM")->GetStaticField(0x320B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAAOAOLLBM_CTOR_OFFSET))(this);
		}

		static ::System::Boolean DMPEPICAKDO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JBAAOAOLLBM_DMPEPICAKDO_OFFSET))();
		}

		static ::JBAAOAOLLBM* MAFHGBDOKPO()
		{
			return ((::JBAAOAOLLBM*(*)())((::PBYTE)hIl2Cpp + JBAAOAOLLBM_MAFHGBDOKPO_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Single a1, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::RPG::GameCore::EffectDurationConfig*>*))((::PBYTE)hIl2Cpp + JBAAOAOLLBM_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBAAOAOLLBM_DISPOSE_OFFSET))(this);
		}

		::System::Void ACGBIOICLEO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBAAOAOLLBM_ACGBIOICLEO_OFFSET))(this, a1);
		}

		::System::Boolean EMBNMMFLIBM(::RPG::GameCore::TriggerEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TriggerEffect*))((::PBYTE)hIl2Cpp + JBAAOAOLLBM_EMBNMMFLIBM_OFFSET))(this, a1);
		}

		::System::Void GGPHICKOPKI(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + JBAAOAOLLBM_GGPHICKOPKI_OFFSET))(this, a1);
		}

	};

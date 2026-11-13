#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCMFNHDEOGB;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKBGOGKHFEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1786EC70)
#define OKBGOGKHFEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1786E740)
#define OKBGOGKHFEF_HNHKBFLDBJI_OFFSET UNITYSDK_OFFSET(0x1786E860)
#define OKBGOGKHFEF_KCIEEJPFOCM_OFFSET UNITYSDK_OFFSET(0x1786E900)
#define OKBGOGKHFEF_LLABAKEEANF_OFFSET UNITYSDK_OFFSET(0x1786E990)
#define OKBGOGKHFEF_OGBPPEPPMHM_OFFSET UNITYSDK_OFFSET(0x1786EA80)

inline static constexpr unsigned int OKBGOGKHFEF_TypeDefinitionIndex = 74327;

	class OKBGOGKHFEF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::LCMFNHDEOGB*>* IAKCIDOFHCC; // 0x10
		::System::Boolean EMJHNHGEFKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBGOGKHFEF_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBGOGKHFEF_DISPOSE_OFFSET))(this);
		}

		::System::Void KCIEEJPFOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBGOGKHFEF_KCIEEJPFOCM_OFFSET))(this);
		}

		::System::Void HNHKBFLDBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBGOGKHFEF_HNHKBFLDBJI_OFFSET))(this);
		}

		::System::Void LLABAKEEANF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKBGOGKHFEF_LLABAKEEANF_OFFSET))(this, a1);
		}

		::LCMFNHDEOGB* OGBPPEPPMHM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::LCMFNHDEOGB*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + OKBGOGKHFEF_OGBPPEPPMHM_OFFSET))(this, a1);
		}

	};

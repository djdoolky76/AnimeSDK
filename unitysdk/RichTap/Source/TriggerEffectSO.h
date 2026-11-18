#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RichTap/Types/TriggerIndex.h"
#include "unitysdk/RichTap/Types/TriggerMode.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }

#define RICHTAP_SOURCE_TRIGGEREFFECTSO_BUILDFEEDBACKMODE_OFFSET UNITYSDK_OFFSET(0x1F623860)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_BUILDVIBRATIONMODE_OFFSET UNITYSDK_OFFSET(0x1F6237F0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_BUILDWEAPONMODE_OFFSET UNITYSDK_OFFSET(0x1F6238D0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETAMPLITUDE_OFFSET UNITYSDK_OFFSET(0x1F6237C0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETENDPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6237B0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1F6237D0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETINDEX_OFFSET UNITYSDK_OFFSET(0x1F623790)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETMODE_OFFSET UNITYSDK_OFFSET(0x1F623780)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0x1F6237A0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_GETSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1F6237E0)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_PLAY_OFFSET UNITYSDK_OFFSET(0x1F623940)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F623A00)
#define RICHTAP_SOURCE_TRIGGEREFFECTSO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F624230)

namespace RichTap::Source
{
	inline static constexpr unsigned int TriggerEffectSO_TypeDefinitionIndex = 36751;

	class TriggerEffectSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::RichTap::Types::TriggerMode mode; // 0x18
		::RichTap::Types::TriggerIndex index; // 0x1C
		::System::Int32 startPosition; // 0x20
		::System::Int32 endPosition; // 0x24
		::System::Int32 amplitude; // 0x28
		::System::Int32 frequency; // 0x2C
		::System::Int32 strength; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO__CTOR_OFFSET))(this);
		}

		::System::Int32 GetMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETMODE_OFFSET))(this);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETINDEX_OFFSET))(this);
		}

		::System::Int32 GetStartPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETSTARTPOSITION_OFFSET))(this);
		}

		::System::Int32 GetEndPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETENDPOSITION_OFFSET))(this);
		}

		::System::Int32 GetAmplitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETAMPLITUDE_OFFSET))(this);
		}

		::System::Int32 GetFrequency()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETFREQUENCY_OFFSET))(this);
		}

		::System::Int32 GetStrength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_GETSTRENGTH_OFFSET))(this);
		}

		static ::RichTap::Source::TriggerEffectSO* BuildVibrationMode(::RichTap::Types::TriggerIndex index, ::System::Int32 startPosition, ::System::Int32 amplitdue, ::System::Int32 frequency)
		{
			return ((::RichTap::Source::TriggerEffectSO*(*)(::RichTap::Types::TriggerIndex, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_BUILDVIBRATIONMODE_OFFSET))(index, startPosition, amplitdue, frequency);
		}

		static ::RichTap::Source::TriggerEffectSO* BuildFeedbackMode(::RichTap::Types::TriggerIndex index, ::System::Int32 startPosition, ::System::Int32 strength)
		{
			return ((::RichTap::Source::TriggerEffectSO*(*)(::RichTap::Types::TriggerIndex, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_BUILDFEEDBACKMODE_OFFSET))(index, startPosition, strength);
		}

		static ::RichTap::Source::TriggerEffectSO* BuildWeaponMode(::RichTap::Types::TriggerIndex index, ::System::Int32 startPosition, ::System::Int32 endPosition, ::System::Int32 strength)
		{
			return ((::RichTap::Source::TriggerEffectSO*(*)(::RichTap::Types::TriggerIndex, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_BUILDWEAPONMODE_OFFSET))(index, startPosition, endPosition, strength);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_PLAY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RICHTAP_SOURCE_TRIGGEREFFECTSO_TOSTRING_OFFSET))(this);
		}
	};
}

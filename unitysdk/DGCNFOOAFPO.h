#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;

#define DGCNFOOAFPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADAD7A0)
#define DGCNFOOAFPO_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1ADAD7D0)
#define DGCNFOOAFPO_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x1ADAD7B0)
#define DGCNFOOAFPO_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1ADAD7E0)
#define DGCNFOOAFPO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1ADAD7F0)
#define DGCNFOOAFPO_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x1ADAD7C0)

inline static constexpr unsigned int DGCNFOOAFPO_TypeDefinitionIndex = 75257;

	class DGCNFOOAFPO : public ::System::Object
	{
	public:
		::RPG::GameCore::EventType _EventType_k__BackingField; // 0x10
		::System::Boolean _Muted_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 _RuntimeID_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::EventType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + DGCNFOOAFPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Muted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCNFOOAFPO_GET_MUTED_OFFSET))(this);
		}

		::System::Void set_Muted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGCNFOOAFPO_SET_MUTED_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType get_EventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCNFOOAFPO_GET_EVENTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGCNFOOAFPO_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void Invoke(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DGCNFOOAFPO_INVOKE_OFFSET))(this, a1);
		}

	};

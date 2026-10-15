#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;

#define DGCNFOOAFPO_CTOR_OFFSET UNITYSDK_OFFSET(0xE843FB0)
#define DGCNFOOAFPO_GET_EVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE843FE0)
#define DGCNFOOAFPO_GET_MUTED_OFFSET UNITYSDK_OFFSET(0xE843FC0)
#define DGCNFOOAFPO_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE843FF0)
#define DGCNFOOAFPO_INVOKE_OFFSET UNITYSDK_OFFSET(0xE844000)
#define DGCNFOOAFPO_SET_MUTED_OFFSET UNITYSDK_OFFSET(0xE843FD0)

inline static constexpr unsigned int DGCNFOOAFPO_TypeDefinitionIndex = 73144;

	class DGCNFOOAFPO : public ::System::Object
	{
	public:
		::System::Boolean _Muted_k__BackingField; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EventType _EventType_k__BackingField; // 0x14
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMovementTiming.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::GameCore { class TransformComponent; }

#define IEGAHANLNNL_CTOR_OFFSET UNITYSDK_OFFSET(0x15EF6690)
#define IEGAHANLNNL_JBLBEFCKIOI_OFFSET UNITYSDK_OFFSET(0x15EF6790)
#define IEGAHANLNNL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15EF6730)
#define IEGAHANLNNL_KHJGJAMNILF_OFFSET UNITYSDK_OFFSET(0x15EF66A0)
#define IEGAHANLNNL_PLPJCPLIMIK_OFFSET UNITYSDK_OFFSET(0x15EF6680)

inline static constexpr unsigned int IEGAHANLNNL_TypeDefinitionIndex = 56953;

	class IEGAHANLNNL : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x10
		::System::Void _ctor(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + IEGAHANLNNL_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMovementTiming PLPJCPLIMIK()
		{
			return ((::RPG::GameCore::CharacterMovementTiming(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGAHANLNNL_PLPJCPLIMIK_OFFSET))(this);
		}

		::System::Void KHJGJAMNILF(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + IEGAHANLNNL_KHJGJAMNILF_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEGAHANLNNL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void JBLBEFCKIOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEGAHANLNNL_JBLBEFCKIOI_OFFSET))(this);
		}

	};

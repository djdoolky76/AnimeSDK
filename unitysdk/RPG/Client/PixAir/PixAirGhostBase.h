#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
class BCLKDMAHONE;

#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDB551F0)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GETATTRIBUTEASINT_OFFSET UNITYSDK_OFFSET(0xDB55220)
#define RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xDB551E0)

namespace RPG::Client::PixAir
{
	class PixAirGhostBase : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Int32 _RuntimeID_k__BackingField; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_RuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Int32 GetAttributeAsInt(::BCLKDMAHONE* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::LittleGameAbilityAttributeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGHOSTBASE_GETATTRIBUTEASINT_OFFSET))(this, a1, a2);
		}

	};
}

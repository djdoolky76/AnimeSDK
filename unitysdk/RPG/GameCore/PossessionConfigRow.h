#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PossessionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_POSSESSIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93E000)
#define RPG_GAMECORE_POSSESSIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93DD50)

namespace RPG::GameCore
{
	class PossessionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* LocalRotation; // 0x10
		::Il2CppArray<::System::Single>* LocalPosition; // 0x18
		::System::String* PossessionPrefabPath; // 0x20
		::Il2CppArray<::System::Single>* LocalScale; // 0x28
		::System::String* PossessionName; // 0x30
		::System::String* AttachPoint; // 0x38
		::System::Boolean IsEffect; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSSESSIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PossessionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PossessionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POSSESSIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGPRIVILEGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91B5B0)
#define RPG_GAMECORE_CHENLINGPRIVILEGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F91B2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingPrivilegeRow_TypeDefinitionIndex = 11100;

	class ChenLingPrivilegeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* NextIDList; // 0x18
		::System::UInt32 EffectID; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::RPG::Client::TextID SkillDesc; // 0x38
		::System::UInt32 Cost; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPRIVILEGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingPrivilegeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingPrivilegeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGPRIVILEGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

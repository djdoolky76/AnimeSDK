#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionGroupRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D345770)
#define RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D344F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionGroupRow_TypeDefinitionIndex = 13815;

	class ActionGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ActionListForAnd; // 0x10
		::System::String* FranceKeyMouseImagePath; // 0x18
		::System::String* PsImagePath; // 0x20
		::System::String* KeyMouseImagePath; // 0x28
		::System::String* GermanyKeyMouseImagePath; // 0x30
		::System::String* ActionName; // 0x38
		::System::String* ActionGroupName; // 0x40
		::Il2CppArray<::System::String*>* ActionListForOr; // 0x48
		::System::String* XboxImagePath; // 0x50
		::RPG::Client::TextID ActionGroupTextmapID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterTextGuideConfigRow; }

#define RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D88F320)
#define RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D88EC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTextGuideConfigRow_TypeDefinitionIndex = 14210;

	class MonsterTextGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::System::UInt32 TextGuideID; // 0x18
		::System::UInt32 SkillID; // 0x1C
		::RPG::Client::TextID TextGuideDescription; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterTextGuideConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterTextGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

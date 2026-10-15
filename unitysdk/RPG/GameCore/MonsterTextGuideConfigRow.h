#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterTextGuideConfigRow; }

#define RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8BCCE0)
#define RPG_GAMECORE_MONSTERTEXTGUIDECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8BC600)

namespace RPG::GameCore
{
	class MonsterTextGuideConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParameterList; // 0x10
		::RPG::Client::TextID TextGuideDescription; // 0x18
		::System::UInt32 TextGuideID; // 0x28
		::System::UInt32 SkillID; // 0x2C
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

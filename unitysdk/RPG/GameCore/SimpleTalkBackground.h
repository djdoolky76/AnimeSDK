#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SimpleTalkBackground; }
namespace System { class String; }

#define RPG_GAMECORE_SIMPLETALKBACKGROUND_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE9C00)
#define RPG_GAMECORE_SIMPLETALKBACKGROUND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE9AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SimpleTalkBackground_TypeDefinitionIndex = 21121;

	class SimpleTalkBackground : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 CgID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* ImagePath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKBACKGROUND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SimpleTalkBackground* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SimpleTalkBackground*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SIMPLETALKBACKGROUND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UIOperation; }
namespace System { class String; }

#define RPG_GAMECORE_UIOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6FFF0)
#define RPG_GAMECORE_UIOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC6FD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIOperation_TypeDefinitionIndex = 24424;

	class UIOperation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Path; // 0x10
		::System::Single Indent; // 0x18
		::System::Int32 SafeAreaIndentRatio; // 0x1C
		::System::Single OffsetLeft; // 0x20
		::System::Single OffsetRight; // 0x24
		::System::Single ScaleX; // 0x28
		::System::Single ScaleY; // 0x2C
		::System::Single ScaleZ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UIOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UIOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

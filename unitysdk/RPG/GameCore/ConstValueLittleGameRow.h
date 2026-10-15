#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConstValueLittleGameRow; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_CONSTVALUELITTLEGAMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D99C0)
#define RPG_GAMECORE_CONSTVALUELITTLEGAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5D9850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConstValueLittleGameRow_TypeDefinitionIndex = 13091;

	class ConstValueLittleGameRow : public ::System::Object
	{
	public:
		::System::String* ConstValueName; // 0x10
		::RPG::GameCore::DynamicValue* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUELITTLEGAMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConstValueLittleGameRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConstValueLittleGameRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSTVALUELITTLEGAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

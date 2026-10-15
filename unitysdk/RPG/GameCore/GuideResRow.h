#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GuideResRow; }
namespace System { class String; }

#define RPG_GAMECORE_GUIDERESROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D722010)
#define RPG_GAMECORE_GUIDERESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7219F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GuideResRow_TypeDefinitionIndex = 13711;

	class GuideResRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::Int32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GuideResRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GuideResRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GUIDERESROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

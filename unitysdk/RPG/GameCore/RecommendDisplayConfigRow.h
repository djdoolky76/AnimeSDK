#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RecommendDisplayConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9738F0)
#define RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D973720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecommendDisplayConfigRow_TypeDefinitionIndex = 14616;

	class RecommendDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* EnvironmentProfilePath; // 0x10
		::System::String* UIPrefab; // 0x18
		::System::String* UI3DPrefab; // 0x20
		::System::UInt32 IntroID; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RecommendDisplayConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RecommendDisplayConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECOMMENDDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

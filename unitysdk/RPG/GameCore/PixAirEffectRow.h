#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEffectRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PIXAIREFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D919A40)
#define RPG_GAMECORE_PIXAIREFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D919810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEffectRow_TypeDefinitionIndex = 12169;

	class PixAirEffectRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ParamMap; // 0x10
		::Il2CppArray<::System::UInt32>* ParamList; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::System::UInt32 EffectID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

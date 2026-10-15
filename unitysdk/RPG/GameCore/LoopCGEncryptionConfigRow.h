#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopCGEncryptionConfigRow; }

#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F56B0)
#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7F5530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopCGEncryptionConfigRow_TypeDefinitionIndex = 15420;

	class LoopCGEncryptionConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 VideoID; // 0x10
		::RPG::GameCore::VideoEncryptionMethod EncryptionMethod; // 0x14
		::System::Boolean Encryption; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LoopCGEncryptionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LoopCGEncryptionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

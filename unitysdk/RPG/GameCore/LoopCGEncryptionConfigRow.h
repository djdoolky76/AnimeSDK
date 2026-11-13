#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopCGEncryptionConfigRow; }

#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F079FB0)
#define RPG_GAMECORE_LOOPCGENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F079E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoopCGEncryptionConfigRow_TypeDefinitionIndex = 15577;

	class LoopCGEncryptionConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::VideoEncryptionMethod EncryptionMethod; // 0x10
		::System::Boolean Encryption; // 0x14
		::System::Byte _padding0[0x3];
		::System::UInt32 VideoID; // 0x18
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

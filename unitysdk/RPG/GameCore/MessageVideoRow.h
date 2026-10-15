#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageVideoRow; }
namespace System { class String; }

#define RPG_GAMECORE_MESSAGEVIDEOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87EFC0)
#define RPG_GAMECORE_MESSAGEVIDEOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D87EA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageVideoRow_TypeDefinitionIndex = 14468;

	class MessageVideoRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 VideoID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageVideoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageVideoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEVIDEOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

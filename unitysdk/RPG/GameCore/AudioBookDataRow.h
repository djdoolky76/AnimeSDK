#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AudioBookDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_AUDIOBOOKDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D7C10)
#define RPG_GAMECORE_AUDIOBOOKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D76A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AudioBookDataRow_TypeDefinitionIndex = 12909;

	class AudioBookDataRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 BookID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AudioBookDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AudioBookDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUDIOBOOKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}

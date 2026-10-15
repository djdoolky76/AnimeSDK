#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSOUNDATTENUATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D957910)
#define RPG_GAMECORE_PROPSOUNDATTENUATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D957770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSoundAttenuation_TypeDefinitionIndex = 17557;

	class PropSoundAttenuation : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single MaxRTPCValue; // 0x18
		::System::Single MaxDistance; // 0x1C
		::System::Single ZeroDistance; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDATTENUATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSoundAttenuation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSoundAttenuation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSOUNDATTENUATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEAFBFCPFCC;
namespace System { class Object; }

#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFAD6D0)
#define RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER_GETSUBKEYS_OFFSET UNITYSDK_OFFSET(0xCFAD720)

namespace RPG::Client::FateRin::RedDot
{
	inline static constexpr unsigned int FateRinDeckEditRedDotFilter_TypeDefinitionIndex = 80738;

	class FateRinDeckEditRedDotFilter : public ::System::Object
	{
	public:
		::PEAFBFCPFCC* _RedDotService; // 0x10
		::System::Void _ctor(::PEAFBFCPFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEAFBFCPFCC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER_CTOR_OFFSET))(this, a1);
		}

		::System::Void GetSubKeys(::System::Object* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_REDDOT_FATERINDECKEDITREDDOTFILTER_GETSUBKEYS_OFFSET))(this, a1, a2, a3);
		}

	};
}

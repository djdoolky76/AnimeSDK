#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFGNOOMMMEK;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define HEKAMNMEEOK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C57C60)

inline static constexpr unsigned int HEKAMNMEEOK_TypeDefinitionIndex = 71273;

	class HEKAMNMEEOK : public ::System::Object
	{
	public:
		::NFGNOOMMMEK* EFPGOHNPKBD; // 0x10
		::System::String* OLOIFNNLKJP; // 0x18
		::System::Action* EGBFHCOPIBH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKAMNMEEOK_CTOR_OFFSET))(this);
		}

	};

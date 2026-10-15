#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECBCBEIADBI;
namespace System { class String; }

#define EFANNBCFAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x13A47110)

inline static constexpr unsigned int EFANNBCFAOD_TypeDefinitionIndex = 71241;

	class EFANNBCFAOD : public ::System::Object
	{
	public:
		::Il2CppArray<::ECBCBEIADBI*>* MOJOOLJFAIG; // 0x10
		::System::String* CDEEHGCEOKN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANNBCFAOD_CTOR_OFFSET))(this);
		}

	};

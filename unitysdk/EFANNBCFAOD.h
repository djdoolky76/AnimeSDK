#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECBCBEIADBI;
namespace System { class String; }

#define EFANNBCFAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x13A479E0)

inline static constexpr unsigned int EFANNBCFAOD_TypeDefinitionIndex = 71240;

	class EFANNBCFAOD : public ::System::Object
	{
	public:
		::System::String* CDEEHGCEOKN; // 0x10
		::Il2CppArray<::ECBCBEIADBI*>* MOJOOLJFAIG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFANNBCFAOD_CTOR_OFFSET))(this);
		}

	};

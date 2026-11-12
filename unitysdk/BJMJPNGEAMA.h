#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define BJMJPNGEAMA_CTOR_OFFSET UNITYSDK_OFFSET(0xC0F9480)

inline static constexpr unsigned int BJMJPNGEAMA_TypeDefinitionIndex = 66333;

	class BJMJPNGEAMA : public ::System::Object
	{
	public:
		::PMDPEENJIHC* Base; // 0x10
		::Il2CppArray<::System::String*>* IDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMJPNGEAMA_CTOR_OFFSET))(this);
		}

	};

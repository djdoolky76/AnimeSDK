#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define BJMJPNGEAMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A4630)

inline static constexpr unsigned int BJMJPNGEAMA_TypeDefinitionIndex = 64789;

	class BJMJPNGEAMA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* IDs; // 0x10
		::PMDPEENJIHC* Base; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMJPNGEAMA_CTOR_OFFSET))(this);
		}

	};

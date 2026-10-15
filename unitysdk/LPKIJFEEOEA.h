#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define LPKIJFEEOEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB822920)

inline static constexpr unsigned int LPKIJFEEOEA_TypeDefinitionIndex = 64791;

	class LPKIJFEEOEA : public ::System::Object
	{
	public:
		::System::String* ID; // 0x10
		::System::String* OpType; // 0x18
		::PMDPEENJIHC* Base; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKIJFEEOEA_CTOR_OFFSET))(this);
		}

	};

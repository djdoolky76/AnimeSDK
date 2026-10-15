#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define APKJLMDEMLI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5743C0)

inline static constexpr unsigned int APKJLMDEMLI_TypeDefinitionIndex = 37296;

	class APKJLMDEMLI : public ::System::Object
	{
	public:
		::System::Object* MBJFLDLDMCB; // 0x10
		::System::Int32 OMADDHALHOG; // 0x18
		::System::Int32 EINPKKAILBN; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKJLMDEMLI_CTOR_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;

#define DNMDEIEANLA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FD34A0)
#define DNMDEIEANLA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11FD34B0)

inline static constexpr unsigned int DNMDEIEANLA_TypeDefinitionIndex = 77951;

	class DNMDEIEANLA : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::LMFOOOLDECA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + DNMDEIEANLA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMDEIEANLA_EXECUTE_OFFSET))(this);
		}

	};

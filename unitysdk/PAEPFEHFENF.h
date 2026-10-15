#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOIIMBFKMJC.h"
class KANHBPAGDJD;
class POEGKFEADIE;

#define PAEPFEHFENF_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC7110)
#define PAEPFEHFENF_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBFC6EF0)
#define PAEPFEHFENF_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xBFC6E30)

inline static constexpr unsigned int PAEPFEHFENF_TypeDefinitionIndex = 54309;

	class PAEPFEHFENF : public ::GOIIMBFKMJC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEPFEHFENF_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::POEGKFEADIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POEGKFEADIE*))((::PBYTE)hIl2Cpp + PAEPFEHFENF_KKKIONIDKFA_OFFSET))(this, a1);
		}

		::System::Void Execute(::KANHBPAGDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KANHBPAGDJD*))((::PBYTE)hIl2Cpp + PAEPFEHFENF_EXECUTE_OFFSET))(this, a1);
		}

	};

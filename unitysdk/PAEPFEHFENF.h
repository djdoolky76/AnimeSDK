#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOIIMBFKMJC.h"
class KANHBPAGDJD;
class POEGKFEADIE;

#define PAEPFEHFENF_CTOR_OFFSET UNITYSDK_OFFSET(0xC8C9D30)
#define PAEPFEHFENF_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC8C9B10)
#define PAEPFEHFENF_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xC8C9A50)

inline static constexpr unsigned int PAEPFEHFENF_TypeDefinitionIndex = 55473;

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

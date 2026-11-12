#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DepletablePool { class DepletablePool; }

#define BEDGJKLLPKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C8350)
#define BEDGJKLLPKK_LDBNPFDLNPF_OFFSET UNITYSDK_OFFSET(0xB7C82B0)

inline static constexpr unsigned int BEDGJKLLPKK_TypeDefinitionIndex = 76968;

	class BEDGJKLLPKK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDGJKLLPKK_CTOR_OFFSET))(this);
		}

		::System::Boolean LDBNPFDLNPF(::RPG::Client::DepletablePool::DepletablePool* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DepletablePool::DepletablePool*, ::System::UInt32))((::PBYTE)hIl2Cpp + BEDGJKLLPKK_LDBNPFDLNPF_OFFSET))(this, a1, a2);
		}

	};

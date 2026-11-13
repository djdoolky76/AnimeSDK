#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFBGGNPFODM.h"

#define BNMIBEFPHNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7758A0)

inline static constexpr unsigned int BNMIBEFPHNF_TypeDefinitionIndex = 42736;

	class BNMIBEFPHNF : public ::NFBGGNPFODM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNMIBEFPHNF_CTOR_OFFSET))(this);
		}

	};

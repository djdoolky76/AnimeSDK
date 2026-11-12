#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFCOKCPFADH.h"

#define JLNPLAKBJMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA7C970)
#define JLNPLAKBJMJ_EPACDIFIDGI_OFFSET UNITYSDK_OFFSET(0xBA7C700)

inline static constexpr unsigned int JLNPLAKBJMJ_TypeDefinitionIndex = 55346;

	class JLNPLAKBJMJ : public ::EFCOKCPFADH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNPLAKBJMJ_CTOR_OFFSET))(this);
		}

		::System::Boolean EPACDIFIDGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLNPLAKBJMJ_EPACDIFIDGI_OFFSET))(this);
		}

	};

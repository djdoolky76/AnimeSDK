#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFCOKCPFADH.h"

#define JLNPLAKBJMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB251B20)
#define JLNPLAKBJMJ_EPACDIFIDGI_OFFSET UNITYSDK_OFFSET(0xB2518B0)

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICEDIJHDAIA.h"
class IJFIHJJPHNA;
class MLEHLBPAAKM;

#define CPAMMPKEOEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5A9C20)
#define CPAMMPKEOEO_LBDKFLBEGIP_OFFSET UNITYSDK_OFFSET(0x1C5A9A90)

inline static constexpr unsigned int CPAMMPKEOEO_TypeDefinitionIndex = 36514;

	class CPAMMPKEOEO : public ::ICEDIJHDAIA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAMMPKEOEO_CTOR_OFFSET))(this);
		}

		::MLEHLBPAAKM* LBDKFLBEGIP(::IJFIHJJPHNA* a1, ::System::Int32 a2)
		{
			return ((::MLEHLBPAAKM*(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Int32))((::PBYTE)hIl2Cpp + CPAMMPKEOEO_LBDKFLBEGIP_OFFSET))(this, a1, a2);
		}

	};

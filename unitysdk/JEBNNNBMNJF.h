#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class JEBNNNBMNJF;

#define JEBNNNBMNJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEC9A0)
#define JEBNNNBMNJF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CFEC860)

inline static constexpr unsigned int JEBNNNBMNJF_TypeDefinitionIndex = 15057;

	class JEBNNNBMNJF : public ::System::Object
	{
	public:
		::System::UInt32 BKHDBIFFIKP; // 0x10
		::System::UInt32 CBCHIHEOEGK; // 0x14
		::System::UInt32 EEPIDJJJMAH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEBNNNBMNJF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JEBNNNBMNJF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JEBNNNBMNJF*))((::PBYTE)hIl2Cpp + JEBNNNBMNJF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

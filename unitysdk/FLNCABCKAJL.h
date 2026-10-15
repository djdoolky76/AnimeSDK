#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNFMINCGIDD.h"

#define FLNCABCKAJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1583F5E0)
#define FLNCABCKAJL_HOPEPDKPBAM_OFFSET UNITYSDK_OFFSET(0x1583F640)
#define FLNCABCKAJL_MAGFIJONJMH_OFFSET UNITYSDK_OFFSET(0x1583F5F0)

inline static constexpr unsigned int FLNCABCKAJL_TypeDefinitionIndex = 75911;

	class FLNCABCKAJL : public ::MNFMINCGIDD
	{
	public:
		::System::Int32 AAFGIHCCPOP; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLNCABCKAJL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MAGFIJONJMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNCABCKAJL_MAGFIJONJMH_OFFSET))(this);
		}

		::System::Boolean HOPEPDKPBAM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNCABCKAJL_HOPEPDKPBAM_OFFSET))(this);
		}

	};

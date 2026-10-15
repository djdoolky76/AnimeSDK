#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define FPHOPLCAHIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA72F30)
#define FPHOPLCAHIB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1CA72380)
#define FPHOPLCAHIB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA72810)

inline static constexpr unsigned int FPHOPLCAHIB_TypeDefinitionIndex = 42475;

	class FPHOPLCAHIB : public ::KIDPCOMKMKJ
	{
	public:
		::System::Boolean CDKLMJIMMAC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHOPLCAHIB_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHOPLCAHIB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPHOPLCAHIB_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};

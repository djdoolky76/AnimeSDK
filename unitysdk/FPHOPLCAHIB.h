#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"

#define FPHOPLCAHIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20F260)
#define FPHOPLCAHIB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C20E6B0)
#define FPHOPLCAHIB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C20EB40)

inline static constexpr unsigned int FPHOPLCAHIB_TypeDefinitionIndex = 43450;

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

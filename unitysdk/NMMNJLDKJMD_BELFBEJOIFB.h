#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMMNJLDKJMD_BELFBEJOIFB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC8ED90)
#define NMMNJLDKJMD_BELFBEJOIFB_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xBC8DE20)
#define NMMNJLDKJMD_BELFBEJOIFB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBC8EDA0)

	class NMMNJLDKJMD_BELFBEJOIFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_BELFBEJOIFB_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_BELFBEJOIFB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_BELFBEJOIFB_HFKFNFKIEON_OFFSET))(this);
		}

	};

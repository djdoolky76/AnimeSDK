#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define LMIOHCMPBJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7129B0)
#define LMIOHCMPBJB_LGFFNMEJEDL_OFFSET UNITYSDK_OFFSET(0x1C6E0F30)

inline static constexpr unsigned int LMIOHCMPBJB_TypeDefinitionIndex = 37420;

	class LMIOHCMPBJB : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Int32 DKBABENHHKN; // 0x18
		::System::Int32 GAGPDMNFPLC; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + LMIOHCMPBJB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::IFBFJDCECML* LGFFNMEJEDL()
		{
			return ((::IFBFJDCECML*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIOHCMPBJB_LGFFNMEJEDL_OFFSET))(this);
		}

	};

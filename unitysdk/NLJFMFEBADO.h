#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLJFMFEBADO;
namespace System { class String; }

#define NLJFMFEBADO_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBC70510)
#define NLJFMFEBADO_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0xBC70720)
#define NLJFMFEBADO_CCCGGMJNGLL_1_OFFSET UNITYSDK_OFFSET(0xBC706B0)
#define NLJFMFEBADO_CCCGGMJNGLL_OFFSET UNITYSDK_OFFSET(0xBC70650)
#define NLJFMFEBADO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBC70500)
#define NLJFMFEBADO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC704F0)
#define NLJFMFEBADO_DADCFBHGLOH_1_OFFSET UNITYSDK_OFFSET(0xBC70600)
#define NLJFMFEBADO_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xBC705B0)
#define NLJFMFEBADO_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBC70560)
#define NLJFMFEBADO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBC70770)

	class NLJFMFEBADO : public ::System::Object
	{
	public:
		::System::Int32 IDBGAMAMDMJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJFMFEBADO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLJFMFEBADO_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean ACMKLFOMPFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJFMFEBADO_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJFMFEBADO_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJFMFEBADO_DADCFBHGLOH_OFFSET))(this);
		}

		::System::Void DADCFBHGLOH_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLJFMFEBADO_DADCFBHGLOH_1_OFFSET))(this, a1);
		}

		::System::Boolean CCCGGMJNGLL(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLJFMFEBADO_CCCGGMJNGLL_OFFSET))(this, a1);
		}

		::System::Boolean CCCGGMJNGLL_1(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NLJFMFEBADO_CCCGGMJNGLL_1_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean BBNJCKPKPDN(::NLJFMFEBADO* a1)
		{
			return ((::System::Boolean(*)(::NLJFMFEBADO*))((::PBYTE)hIl2Cpp + NLJFMFEBADO_BBNJCKPKPDN_OFFSET))(a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLJFMFEBADO_TOSTRING_OFFSET))(this);
		}

	};

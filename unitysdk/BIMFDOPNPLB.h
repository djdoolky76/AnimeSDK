#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HLHDNHPLJDN;
namespace System { class Object; }
namespace System { class Type; }

#define BIMFDOPNPLB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAC50D0)
#define BIMFDOPNPLB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1BAC51F0)
#define BIMFDOPNPLB_CJMCPALIODN_OFFSET UNITYSDK_OFFSET(0x1BAC45A0)
#define BIMFDOPNPLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC52E0)
#define BIMFDOPNPLB_DKDKAEPGLPJ_OFFSET UNITYSDK_OFFSET(0x1BAC5010)
#define BIMFDOPNPLB_HEBINHPPJMH_OFFSET UNITYSDK_OFFSET(0x1BAC4F50)
#define BIMFDOPNPLB_MGOFIGIIAGP_OFFSET UNITYSDK_OFFSET(0x1BAC4CD0)
#define BIMFDOPNPLB_MKOJJCNCKIH_OFFSET UNITYSDK_OFFSET(0x1BAC4720)

inline static constexpr unsigned int BIMFDOPNPLB_TypeDefinitionIndex = 74137;

	class BIMFDOPNPLB : public ::FMPCODLIOLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_CTOR_OFFSET))(this);
		}

		::System::Void CJMCPALIODN(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_CJMCPALIODN_OFFSET))(this, a1);
		}

		::System::Void MGOFIGIIAGP(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_MGOFIGIIAGP_OFFSET))(this, a1);
		}

		::System::Void MKOJJCNCKIH(::System::Type* a1, ::HLHDNHPLJDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::HLHDNHPLJDN*))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_MKOJJCNCKIH_OFFSET))(this, a1, a2);
		}

		::System::Void HEBINHPPJMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_HEBINHPPJMH_OFFSET))(this, a1);
		}

		::System::Void DKDKAEPGLPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_DKDKAEPGLPJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMFDOPNPLB_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

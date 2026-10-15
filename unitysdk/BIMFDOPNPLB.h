#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HLHDNHPLJDN;
namespace System { class Object; }
namespace System { class Type; }

#define BIMFDOPNPLB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB782090)
#define BIMFDOPNPLB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB7821B0)
#define BIMFDOPNPLB_CJMCPALIODN_OFFSET UNITYSDK_OFFSET(0xB781560)
#define BIMFDOPNPLB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7822A0)
#define BIMFDOPNPLB_DKDKAEPGLPJ_OFFSET UNITYSDK_OFFSET(0xB781FD0)
#define BIMFDOPNPLB_HEBINHPPJMH_OFFSET UNITYSDK_OFFSET(0xB781F10)
#define BIMFDOPNPLB_MGOFIGIIAGP_OFFSET UNITYSDK_OFFSET(0xB781C90)
#define BIMFDOPNPLB_MKOJJCNCKIH_OFFSET UNITYSDK_OFFSET(0xB7816E0)

inline static constexpr unsigned int BIMFDOPNPLB_TypeDefinitionIndex = 72102;

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

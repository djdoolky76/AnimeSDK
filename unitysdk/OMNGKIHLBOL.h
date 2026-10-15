#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJCIJBLDIG;
class OMNGKIHLBOL;

#define OMNGKIHLBOL_ALBFDEJFMIM_OFFSET UNITYSDK_OFFSET(0xBF347A0)
#define OMNGKIHLBOL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF34690)
#define OMNGKIHLBOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF34710)
#define OMNGKIHLBOL_DFKCBNGHKFP_OFFSET UNITYSDK_OFFSET(0xBF34730)
#define OMNGKIHLBOL_IEHHEDGLAOI_OFFSET UNITYSDK_OFFSET(0xBF34820)
#define OMNGKIHLBOL___TRYFADEOUT_B__6_0_OFFSET UNITYSDK_OFFSET(0xBF349B0)

inline static constexpr unsigned int OMNGKIHLBOL_TypeDefinitionIndex = 59913;

	class OMNGKIHLBOL : public ::System::Object
	{
	public:
		::GBJCIJBLDIG* IGHAHBNLIJA; // 0x10
		::System::Boolean FMNEEONAMNO; // 0x18
		::System::Void _ctor(::GBJCIJBLDIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBJCIJBLDIG*))((::PBYTE)hIl2Cpp + OMNGKIHLBOL_CTOR_OFFSET))(this, a1);
		}

		static ::OMNGKIHLBOL* BPLPBPMEODA(::GBJCIJBLDIG* a1)
		{
			return ((::OMNGKIHLBOL*(*)(::GBJCIJBLDIG*))((::PBYTE)hIl2Cpp + OMNGKIHLBOL_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DFKCBNGHKFP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMNGKIHLBOL_DFKCBNGHKFP_OFFSET))(this, a1);
		}

		::System::Void ALBFDEJFMIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNGKIHLBOL_ALBFDEJFMIM_OFFSET))(this);
		}

		::System::Void IEHHEDGLAOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNGKIHLBOL_IEHHEDGLAOI_OFFSET))(this);
		}

		::System::Void __TryFadeOut_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNGKIHLBOL___TRYFADEOUT_B__6_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLNPACFAKHD;

#define COAHAADDEKK_NCBKCCCHAGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2D4C0)
#define COAHAADDEKK_NCBKCCCHAGL_KNEPBLCNKHJ_OFFSET UNITYSDK_OFFSET(0x1DD2DAD0)
#define COAHAADDEKK_NCBKCCCHAGL_MJJAGOIGGJL_OFFSET UNITYSDK_OFFSET(0x1DD2DAC0)
#define COAHAADDEKK_NCBKCCCHAGL_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0x1DD2D500)

	class COAHAADDEKK_NCBKCCCHAGL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* HPGOIBLOEON; // 0x10
		::System::Single ANEBCHDJPKA; // 0x18
		::System::Int32 CEKLJMHHBNF; // 0x1C
		::System::Int32 JGEJHLKFPOA; // 0x20
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_NCBKCCCHAGL_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* MJJAGOIGGJL()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHAADDEKK_NCBKCCCHAGL_MJJAGOIGGJL_OFFSET))(this);
		}

		::System::Boolean KNEPBLCNKHJ(::BLNPACFAKHD* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLNPACFAKHD*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + COAHAADDEKK_NCBKCCCHAGL_KNEPBLCNKHJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PAABEMLAHOL(::BLNPACFAKHD* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLNPACFAKHD*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + COAHAADDEKK_NCBKCCCHAGL_PAABEMLAHOL_OFFSET))(this, a1, a2, a3, a4);
		}

	};

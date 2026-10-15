#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPLLFKGEKAP;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define HPLLFKGEKAP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15DD37D0)
#define HPLLFKGEKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD3860)
#define HPLLFKGEKAP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15DD3870)
#define HPLLFKGEKAP_FAMNECIKHBC_OFFSET UNITYSDK_OFFSET(0x15DD3E70)
#define HPLLFKGEKAP_MNAEABGDHIH_OFFSET UNITYSDK_OFFSET(0x15DD3BA0)
#define HPLLFKGEKAP_OPKIJMMMNHK_OFFSET UNITYSDK_OFFSET(0x15DD42D0)

	class HPLLFKGEKAP : public ::System::Object
	{
	public:
		::MFKLCJHKNBK* FKINCGODJEP; // 0x10
		::KBLELMJDBEA* PDENFEFCAGN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLLFKGEKAP_CTOR_OFFSET))(this);
		}

		static ::HPLLFKGEKAP* BPLPBPMEODA(::MFKLCJHKNBK* a1, ::KBLELMJDBEA* a2)
		{
			return ((::HPLLFKGEKAP*(*)(::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + HPLLFKGEKAP_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLLFKGEKAP_EXECUTE_OFFSET))(this);
		}

		::System::Void FAMNECIKHBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLLFKGEKAP_FAMNECIKHBC_OFFSET))(this);
		}

		::System::Boolean MNAEABGDHIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLLFKGEKAP_MNAEABGDHIH_OFFSET))(this);
		}

		::System::Boolean OPKIJMMMNHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPLLFKGEKAP_OPKIJMMMNHK_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPLLFKGEKAP;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define HPLLFKGEKAP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16D77330)
#define HPLLFKGEKAP_CTOR_OFFSET UNITYSDK_OFFSET(0x16D773C0)
#define HPLLFKGEKAP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16D773D0)
#define HPLLFKGEKAP_FAMNECIKHBC_OFFSET UNITYSDK_OFFSET(0x16D779D0)
#define HPLLFKGEKAP_MNAEABGDHIH_OFFSET UNITYSDK_OFFSET(0x16D77700)
#define HPLLFKGEKAP_OPKIJMMMNHK_OFFSET UNITYSDK_OFFSET(0x16D77E30)

inline static constexpr unsigned int HPLLFKGEKAP_TypeDefinitionIndex = 78081;

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

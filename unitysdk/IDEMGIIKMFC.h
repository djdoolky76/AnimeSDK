#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class IDEMGIIKMFC;
class JBACCAGFHON;
class OBKPOLLKKEM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDEMGIIKMFC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16E2EFE0)
#define IDEMGIIKMFC_CTOR_OFFSET UNITYSDK_OFFSET(0x16E2F060)
#define IDEMGIIKMFC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16E2F370)
#define IDEMGIIKMFC_HLANMPGPNNP_OFFSET UNITYSDK_OFFSET(0x16E2F8C0)
#define IDEMGIIKMFC_HLLENOLFJED_OFFSET UNITYSDK_OFFSET(0x16E30BC0)
#define IDEMGIIKMFC_HNOLIHLCKPC_OFFSET UNITYSDK_OFFSET(0x16E30790)
#define IDEMGIIKMFC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16E2F120)
#define IDEMGIIKMFC_KEFMENCINCI_OFFSET UNITYSDK_OFFSET(0x16E2FC60)
#define IDEMGIIKMFC_ODFEJECBJAJ_OFFSET UNITYSDK_OFFSET(0x16E30DD0)
#define IDEMGIIKMFC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x16E2FB70)

inline static constexpr unsigned int IDEMGIIKMFC_TypeDefinitionIndex = 80860;

	class IDEMGIIKMFC : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::OBKPOLLKKEM* GMMKOGOLBLL; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* DHHLHANEIFG; // 0x20
		::System::Collections::Generic::List_1<::AGCPAMNLCGN*>* KDJEDIHGCDN; // 0x28
		::OBKPOLLKKEM* DKJLADFPLNL; // 0x30
		::System::UInt32 JGGOJCPPKII; // 0x38
		::System::Single DOPHEGFHMDF; // 0x3C
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_CTOR_OFFSET))(this, a1);
		}

		static ::IDEMGIIKMFC* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::IDEMGIIKMFC*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_EXECUTE_OFFSET))(this);
		}

		::System::Void HLANMPGPNNP(::AGCPAMNLCGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGCPAMNLCGN*))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_HLANMPGPNNP_OFFSET))(this, a1);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_TEARDOWN_OFFSET))(this);
		}

		::System::Void KEFMENCINCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_KEFMENCINCI_OFFSET))(this);
		}

		::System::Void HNOLIHLCKPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_HNOLIHLCKPC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* HLLENOLFJED(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_HLLENOLFJED_OFFSET))(this, a1);
		}

		::System::Void ODFEJECBJAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDEMGIIKMFC_ODFEJECBJAJ_OFFSET))(this);
		}

	};

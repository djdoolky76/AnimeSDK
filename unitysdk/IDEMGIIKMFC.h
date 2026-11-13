#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGCPAMNLCGN;
class IDEMGIIKMFC;
class JBACCAGFHON;
class OBKPOLLKKEM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDEMGIIKMFC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1777C420)
#define IDEMGIIKMFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1777C4A0)
#define IDEMGIIKMFC_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1777C7B0)
#define IDEMGIIKMFC_HLANMPGPNNP_OFFSET UNITYSDK_OFFSET(0x1777CD00)
#define IDEMGIIKMFC_HLLENOLFJED_OFFSET UNITYSDK_OFFSET(0x1777E000)
#define IDEMGIIKMFC_HNOLIHLCKPC_OFFSET UNITYSDK_OFFSET(0x1777DBD0)
#define IDEMGIIKMFC_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1777C560)
#define IDEMGIIKMFC_KEFMENCINCI_OFFSET UNITYSDK_OFFSET(0x1777D0A0)
#define IDEMGIIKMFC_ODFEJECBJAJ_OFFSET UNITYSDK_OFFSET(0x1777E210)
#define IDEMGIIKMFC_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1777CFB0)

inline static constexpr unsigned int IDEMGIIKMFC_TypeDefinitionIndex = 80859;

	class IDEMGIIKMFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::AGCPAMNLCGN*>* KDJEDIHGCDN; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::OBKPOLLKKEM* DKJLADFPLNL; // 0x20
		::OBKPOLLKKEM* GMMKOGOLBLL; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* DHHLHANEIFG; // 0x30
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEILLGKDMB;
class ECPDFJJNDBI;
class MDIMPDIOOIE;
class MEHEMFNHEMK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LALDFCGIIEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4ABDF0)
#define LALDFCGIIEC_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1C4AAB60)
#define LALDFCGIIEC_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C4AA460)

	class LALDFCGIIEC : public ::System::Object
	{
	public:
		// static const ::System::Object ABNPHONMCEP; // 0x0
		// static const ::System::String* GJPNNCFPMGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LALDFCGIIEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OHCJOIANPFG(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::AMEILLGKDMB*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::AMEILLGKDMB*>*))((::PBYTE)hIl2Cpp + LALDFCGIIEC_OHCJOIANPFG_OFFSET))(a1, a2);
		}

		static ::MEHEMFNHEMK* HKEPJLDBGIG(::MDIMPDIOOIE* a1, ::ECPDFJJNDBI* a2)
		{
			return ((::MEHEMFNHEMK*(*)(::MDIMPDIOOIE*, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + LALDFCGIIEC_HKEPJLDBGIG_OFFSET))(a1, a2);
		}

	};

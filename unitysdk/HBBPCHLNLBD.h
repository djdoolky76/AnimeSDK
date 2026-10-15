#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCBCMKOOEJC;
class ECPDFJJNDBI;
class HPPGIADOJBF;
class LFCKLPMBGGI;
class MDIMPDIOOIE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HBBPCHLNLBD_FCGIIIPNJAH_OFFSET UNITYSDK_OFFSET(0x1C4590E0)
#define HBBPCHLNLBD_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1C459240)
#define HBBPCHLNLBD_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C4580A0)

inline static constexpr unsigned int HBBPCHLNLBD_TypeDefinitionIndex = 41540;

	class HBBPCHLNLBD : public ::System::Object
	{
	public:
		// static const ::System::Object ABNPHONMCEP; // 0x0
		// static const ::System::String* GJPNNCFPMGK; // 0x0
		static ::System::Void OHCJOIANPFG(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>* a2, ::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>* a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::LFCKLPMBGGI*>*, ::System::Collections::Generic::IEnumerable_1<::HPPGIADOJBF*>*))((::PBYTE)hIl2Cpp + HBBPCHLNLBD_OHCJOIANPFG_OFFSET))(a1, a2, a3);
		}

		static ::BCBCMKOOEJC* HKEPJLDBGIG(::MDIMPDIOOIE* a1, ::ECPDFJJNDBI* a2, ::System::String* a3)
		{
			return ((::BCBCMKOOEJC*(*)(::MDIMPDIOOIE*, ::ECPDFJJNDBI*, ::System::String*))((::PBYTE)hIl2Cpp + HBBPCHLNLBD_HKEPJLDBGIG_OFFSET))(a1, a2, a3);
		}

		static ::System::String* FCGIIIPNJAH(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + HBBPCHLNLBD_FCGIIIPNJAH_OFFSET))(a1);
		}

	};

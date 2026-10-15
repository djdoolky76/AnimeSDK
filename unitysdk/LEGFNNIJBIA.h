#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPDFJJNDBI;
class HJEIEIFLDGN;
class MDIMPDIOOIE;
namespace System { class String; }

#define LEGFNNIJBIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AC390)
#define LEGFNNIJBIA_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1C4AC150)
#define LEGFNNIJBIA_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1C4ABE00)

	class LEGFNNIJBIA : public ::System::Object
	{
	public:
		// static const ::System::Object ABNPHONMCEP; // 0x0
		// static const ::System::String* GJPNNCFPMGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGFNNIJBIA_CTOR_OFFSET))(this);
		}

		static ::System::Void OHCJOIANPFG(::System::String* a1, ::HJEIEIFLDGN* a2)
		{
			return ((::System::Void(*)(::System::String*, ::HJEIEIFLDGN*))((::PBYTE)hIl2Cpp + LEGFNNIJBIA_OHCJOIANPFG_OFFSET))(a1, a2);
		}

		static ::System::Void HKEPJLDBGIG(::HJEIEIFLDGN* a1, ::MDIMPDIOOIE* a2, ::ECPDFJJNDBI* a3)
		{
			return ((::System::Void(*)(::HJEIEIFLDGN*, ::MDIMPDIOOIE*, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + LEGFNNIJBIA_HKEPJLDBGIG_OFFSET))(a1, a2, a3);
		}

	};

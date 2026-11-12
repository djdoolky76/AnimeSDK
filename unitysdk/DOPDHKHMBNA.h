#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPDFJJNDBI;
class HJEIEIFLDGN;
class MDIMPDIOOIE;
namespace System { class String; }

#define DOPDHKHMBNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5490)
#define DOPDHKHMBNA_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1D5E53B0)
#define DOPDHKHMBNA_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1D5E4C10)

inline static constexpr unsigned int DOPDHKHMBNA_TypeDefinitionIndex = 42487;

	class DOPDHKHMBNA : public ::System::Object
	{
	public:
		// static const ::System::Object ABNPHONMCEP; // 0x0
		// static const ::System::String* GJPNNCFPMGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPDHKHMBNA_CTOR_OFFSET))(this);
		}

		static ::System::Void OHCJOIANPFG(::System::String* a1, ::HJEIEIFLDGN* a2)
		{
			return ((::System::Void(*)(::System::String*, ::HJEIEIFLDGN*))((::PBYTE)hIl2Cpp + DOPDHKHMBNA_OHCJOIANPFG_OFFSET))(a1, a2);
		}

		static ::System::Void HKEPJLDBGIG(::HJEIEIFLDGN* a1, ::MDIMPDIOOIE* a2, ::ECPDFJJNDBI* a3)
		{
			return ((::System::Void(*)(::HJEIEIFLDGN*, ::MDIMPDIOOIE*, ::ECPDFJJNDBI*))((::PBYTE)hIl2Cpp + DOPDHKHMBNA_HKEPJLDBGIG_OFFSET))(a1, a2, a3);
		}

	};

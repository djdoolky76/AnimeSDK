#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System { class Nullable; }

#define JPDKAJCEOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B4680)
#define JPDKAJCEOAJ_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB2B45E0)

	class JPDKAJCEOAJ : public ::HBLDGJCDJPF
	{
	public:
		::System::Nullable* MCLLALGABAB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDKAJCEOAJ_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + JPDKAJCEOAJ_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

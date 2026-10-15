#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEBLIEJAJPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC033200)
#define PEBLIEJAJPK_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xC033160)

	class PEBLIEJAJPK : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::System::Nullable* FHJBNFEMDJE; // 0x18
		::System::Nullable* GMGGJEIOLGK; // 0x20
		::System::Nullable* HJPIDBNFDNG; // 0x28
		::System::Nullable* BOFHOLNELKL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLIEJAJPK_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + PEBLIEJAJPK_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

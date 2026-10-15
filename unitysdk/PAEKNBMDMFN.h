#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAEKNBMDMFN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC63F0)
#define PAEKNBMDMFN_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xBFC6350)

	class PAEKNBMDMFN : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::System::Boolean DECHKBNOIBO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEKNBMDMFN_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + PAEKNBMDMFN_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

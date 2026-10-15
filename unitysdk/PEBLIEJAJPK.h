#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/System/Nullable_1.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PEBLIEJAJPK_CTOR_OFFSET UNITYSDK_OFFSET(0xC02BCB0)
#define PEBLIEJAJPK_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xC02BC10)

inline static constexpr unsigned int PEBLIEJAJPK_TypeDefinitionIndex = 77681;

	class PEBLIEJAJPK : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::System::Nullable_1<::System::Int32> FHJBNFEMDJE; // 0x18
		::System::Nullable_1<::System::Int32> HJPIDBNFDNG; // 0x20
		::System::Nullable_1<::System::Int32> BOFHOLNELKL; // 0x28
		::System::Nullable_1<::System::Int32> GMGGJEIOLGK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBLIEJAJPK_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + PEBLIEJAJPK_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

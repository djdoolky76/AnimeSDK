#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
#include "unitysdk/System/Nullable_1.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define LKAPHINNOGA_CTOR_OFFSET UNITYSDK_OFFSET(0xB728940)
#define LKAPHINNOGA_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB7288A0)

inline static constexpr unsigned int LKAPHINNOGA_TypeDefinitionIndex = 77674;

	class LKAPHINNOGA : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::Queue_1<::System::Int32>* OGFDEMELINC; // 0x10
		::System::Nullable_1<::System::Int32> MCLLALGABAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAPHINNOGA_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LKAPHINNOGA_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

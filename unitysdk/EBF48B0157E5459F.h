#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A4838C5095CB3148;
class B6613C9D7676EEFB;
namespace System::Threading { class ThreadAbortException; }

#define EBF48B0157E5459F_AB1552C17BC9E3C5_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define EBF48B0157E5459F_ADA3FC776FE2F77A_OFFSET UNITYSDK_OFFSET(0x3CA95D0)
#define EBF48B0157E5459F__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5180)

inline static constexpr unsigned int EBF48B0157E5459F_TypeDefinitionIndex = 10548;

class EBF48B0157E5459F : public ::System::Object
{
public:
	::A4838C5095CB3148* B0F5A521A7ED6364; // 0x10
	::B6613C9D7676EEFB* E47085D78E44E274; // 0x18

	::System::Void ADA3FC776FE2F77A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBF48B0157E5459F_ADA3FC776FE2F77A_OFFSET))(this);
	}

	::System::Void AB1552C17BC9E3C5(::System::Threading::ThreadAbortException* A5FB7225DA5C5A9B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::ThreadAbortException*))((::PBYTE)hIl2Cpp + EBF48B0157E5459F_AB1552C17BC9E3C5_OFFSET))(this, A5FB7225DA5C5A9B);
	}

	::System::Void _ctor(::A4838C5095CB3148* BC288918C940C7A6, ::B6613C9D7676EEFB* F0739CC8B56970B3)
	{
		return ((::System::Void(*)(::PVOID, ::A4838C5095CB3148*, ::B6613C9D7676EEFB*))((::PBYTE)hIl2Cpp + EBF48B0157E5459F__CTOR_OFFSET))(this, BC288918C940C7A6, F0739CC8B56970B3);
	}
};

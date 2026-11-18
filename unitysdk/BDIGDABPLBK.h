#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDIGDABPLBK_EAMMPAGILNO_OFFSET UNITYSDK_OFFSET(0x14C360A0)
#define BDIGDABPLBK_HINAGKKHONJ_OFFSET UNITYSDK_OFFSET(0x14C36150)
#define BDIGDABPLBK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C36090)

inline static constexpr unsigned int BDIGDABPLBK_TypeDefinitionIndex = 74706;

class BDIGDABPLBK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MPLLDIAGNFG; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JPOODFCPNCB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* DLDFFMLOGCN; // 0x20
	::System::Int32 PCABIHKBLCP; // 0x28
	::System::Int32 MMMHLENHKLN; // 0x2C
	::System::Boolean BADIOHAKFGF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDIGDABPLBK__CTOR_OFFSET))(this);
	}

	::System::Void EAMMPAGILNO(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDIGDABPLBK_EAMMPAGILNO_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void HINAGKKHONJ(::System::Collections::Generic::List_1<::System::Int32>* CJGAFOBNPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BDIGDABPLBK_HINAGKKHONJ_OFFSET))(this, CJGAFOBNPOM);
	}
};

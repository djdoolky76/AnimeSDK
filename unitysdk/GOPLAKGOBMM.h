#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENDGACKJLGP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOPLAKGOBMM_GMFNDDAPPIG_OFFSET UNITYSDK_OFFSET(0x16652DB0)
#define GOPLAKGOBMM_IEKLAOLKGCA_OFFSET UNITYSDK_OFFSET(0x16652DC0)
#define GOPLAKGOBMM__CTOR_OFFSET UNITYSDK_OFFSET(0x16652DA0)

inline static constexpr unsigned int GOPLAKGOBMM_TypeDefinitionIndex = 10512;

class GOPLAKGOBMM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ENDGACKJLGP*>* NDIFFNMFHOH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPLAKGOBMM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::ENDGACKJLGP*>* GMFNDDAPPIG()
	{
		return ((::System::Collections::Generic::List_1<::ENDGACKJLGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPLAKGOBMM_GMFNDDAPPIG_OFFSET))(this);
	}

	::System::Void IEKLAOLKGCA(::System::Collections::Generic::List_1<::ENDGACKJLGP*>* NCGBKAACGBP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ENDGACKJLGP*>*))((::PBYTE)hIl2Cpp + GOPLAKGOBMM_IEKLAOLKGCA_OFFSET))(this, NCGBKAACGBP);
	}
};

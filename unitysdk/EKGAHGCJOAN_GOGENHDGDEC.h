#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKGAHGCJOAN;
class FBHPDPBIGPK;
class GNADGLJNENI;
class MKFNBHDICNJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKGAHGCJOAN_GOGENHDGDEC_BCEIMNDBCKJ_OFFSET UNITYSDK_OFFSET(0x17241F70)
#define EKGAHGCJOAN_GOGENHDGDEC__CTOR_OFFSET UNITYSDK_OFFSET(0x17241F60)

inline static constexpr unsigned int EKGAHGCJOAN_GOGENHDGDEC_TypeDefinitionIndex = 51207;

class EKGAHGCJOAN_GOGENHDGDEC : public ::System::Object
{
public:
	::MKFNBHDICNJ* LGLFBFPJKMB; // 0x10
	::GNADGLJNENI* ALPCFOHKOHC; // 0x18
	::EKGAHGCJOAN* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_GOGENHDGDEC__CTOR_OFFSET))(this);
	}

	::System::Void BCEIMNDBCKJ(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* DGCALIFHGGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + EKGAHGCJOAN_GOGENHDGDEC_BCEIMNDBCKJ_OFFSET))(this, DGCALIFHGGD);
	}
};

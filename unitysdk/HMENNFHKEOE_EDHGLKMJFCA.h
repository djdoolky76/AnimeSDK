#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class HMENNFHKEOE_EGPBCOPDIEA;
class JGBMOOJHMBF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMENNFHKEOE_EDHGLKMJFCA_ECOONFMCHEM_OFFSET UNITYSDK_OFFSET(0x140C1220)
#define HMENNFHKEOE_EDHGLKMJFCA__CTOR_OFFSET UNITYSDK_OFFSET(0x140C1210)

inline static constexpr unsigned int HMENNFHKEOE_EDHGLKMJFCA_TypeDefinitionIndex = 53312;

class HMENNFHKEOE_EDHGLKMJFCA : public ::System::Object
{
public:
	::JGBMOOJHMBF* HMMMOCJAEOA; // 0x10
	::HMENNFHKEOE_EGPBCOPDIEA* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EDHGLKMJFCA__CTOR_OFFSET))(this);
	}

	::System::Void ECOONFMCHEM(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_EDHGLKMJFCA_ECOONFMCHEM_OFFSET))(this, DJLOKMMLFJC);
	}
};

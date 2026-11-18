#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBHPDPBIGPK;
class HMENNFHKEOE_LBJFEEJHPPK;
class JGBMOOJHMBF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMENNFHKEOE_ECHDCJIHONJ_INHJHEDLKKL_OFFSET UNITYSDK_OFFSET(0x19E32D90)
#define HMENNFHKEOE_ECHDCJIHONJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19E32D80)

inline static constexpr unsigned int HMENNFHKEOE_ECHDCJIHONJ_TypeDefinitionIndex = 53330;

class HMENNFHKEOE_ECHDCJIHONJ : public ::System::Object
{
public:
	::HMENNFHKEOE_LBJFEEJHPPK* FGBNBFHOKAA; // 0x10
	::JGBMOOJHMBF* HMMMOCJAEOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_ECHDCJIHONJ__CTOR_OFFSET))(this);
	}

	::System::Void INHJHEDLKKL(::System::Collections::Generic::List_1<::FBHPDPBIGPK*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBHPDPBIGPK*>*))((::PBYTE)hIl2Cpp + HMENNFHKEOE_ECHDCJIHONJ_INHJHEDLKKL_OFFSET))(this, DJLOKMMLFJC);
	}
};

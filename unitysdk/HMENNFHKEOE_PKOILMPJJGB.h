#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HMENNFHKEOE_ECHDCJIHONJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMENNFHKEOE_PKOILMPJJGB_NBFONMBPEGH_OFFSET UNITYSDK_OFFSET(0x12E89C90)
#define HMENNFHKEOE_PKOILMPJJGB__CTOR_OFFSET UNITYSDK_OFFSET(0x12E89C80)

inline static constexpr unsigned int HMENNFHKEOE_PKOILMPJJGB_TypeDefinitionIndex = 53326;

class HMENNFHKEOE_PKOILMPJJGB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MFDGPOMPDPO; // 0x10
	::HMENNFHKEOE_ECHDCJIHONJ* EEMOEMFLABI; // 0x18
	::System::Int32 ABHBKFJKINO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_PKOILMPJJGB__CTOR_OFFSET))(this);
	}

	::System::Void NBFONMBPEGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_PKOILMPJJGB_NBFONMBPEGH_OFFSET))(this);
	}
};

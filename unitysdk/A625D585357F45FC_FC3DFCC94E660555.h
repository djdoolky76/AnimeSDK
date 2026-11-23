#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BB454B58A0E2FAB5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A625D585357F45FC_FC3DFCC94E660555_F89E000809C3CB5B_OFFSET UNITYSDK_OFFSET(0x38B4400)
#define A625D585357F45FC_FC3DFCC94E660555__CTOR_OFFSET UNITYSDK_OFFSET(0x38B4470)

inline static constexpr unsigned int A625D585357F45FC_FC3DFCC94E660555_TypeDefinitionIndex = 20275;

class A625D585357F45FC_FC3DFCC94E660555 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* ECCF219385BF9AB1; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* B0CF453EA58106EF; // 0x18

	::System::Void F89E000809C3CB5B(::BB454B58A0E2FAB5* E1A091262C10AC9B)
	{
		return ((::System::Void(*)(::PVOID, ::BB454B58A0E2FAB5*))((::PBYTE)hIl2Cpp + A625D585357F45FC_FC3DFCC94E660555_F89E000809C3CB5B_OFFSET))(this, E1A091262C10AC9B);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A625D585357F45FC_FC3DFCC94E660555__CTOR_OFFSET))(this);
	}
};

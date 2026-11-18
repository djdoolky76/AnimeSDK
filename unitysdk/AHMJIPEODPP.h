#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHMJIPEODPP__CTOR_OFFSET UNITYSDK_OFFSET(0x135E6EE0)

inline static constexpr unsigned int AHMJIPEODPP_TypeDefinitionIndex = 61432;

class AHMJIPEODPP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* COBPKLGFAOC; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*>* LDKNNGCGMOG; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* PPNGCHLHICJ; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* PFJOMMMAGDK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHMJIPEODPP__CTOR_OFFSET))(this);
	}
};

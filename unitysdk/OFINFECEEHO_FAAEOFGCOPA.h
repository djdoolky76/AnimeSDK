#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class OFINFECEEHO;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OFINFECEEHO_FAAEOFGCOPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0E010)

inline static constexpr unsigned int OFINFECEEHO_FAAEOFGCOPA_TypeDefinitionIndex = 95324;

class OFINFECEEHO_FAAEOFGCOPA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* AJJDHDFACKI; // 0x10
	::OFINFECEEHO* KLHPEBKNIFB; // 0x18
	::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* MLLONHEAFLI; // 0x20
	::System::Int32 JGKFJCDHIIH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFINFECEEHO_FAAEOFGCOPA__CTOR_OFFSET))(this);
	}
};

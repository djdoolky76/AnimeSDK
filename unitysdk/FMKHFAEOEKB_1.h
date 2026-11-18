#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODGHIIDBNJB.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int FMKHFAEOEKB_1_TypeDefinitionIndex = 34056;

template <typename T>
class FMKHFAEOEKB_1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int64>** StaticGet_PDELLENKDBJ()
	{
		return (::System::Collections::Generic::List_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(FMKHFAEOEKB_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Nullable_1<::System::Int64> EOKDAIPIKHF; // 0x0
	::System::Boolean ECEKHAJFICH; // 0x0
	::ODGHIIDBNJB EBLMOFMMNOD; // 0x0
	T FDPMDEJANJH; // 0x0
	::System::Action_2<::ODGHIIDBNJB, T>* IDLODOCOAKN; // 0x0
};

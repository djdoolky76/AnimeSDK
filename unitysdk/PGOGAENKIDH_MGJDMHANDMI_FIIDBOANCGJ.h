#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define PGOGAENKIDH_MGJDMHANDMI_FIIDBOANCGJ_ELMFFOGOCGH_OFFSET UNITYSDK_OFFSET(0x1FDBE810)
#define PGOGAENKIDH_MGJDMHANDMI_FIIDBOANCGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE6C0)

inline static constexpr unsigned int PGOGAENKIDH_MGJDMHANDMI_FIIDBOANCGJ_TypeDefinitionIndex = 28317;

class PGOGAENKIDH_MGJDMHANDMI_FIIDBOANCGJ : public ::System::Object
{
public:
	::System::Int32 PDFEDOCLDHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI_FIIDBOANCGJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> ELMFFOGOCGH(::System::String* HFMHOELKCAJ, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* LDHAIIPOBBG)
	{
		return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI_FIIDBOANCGJ_ELMFFOGOCGH_OFFSET))(this, HFMHOELKCAJ, LDHAIIPOBBG);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define PGOGAENKIDH_LANPLAGFMDK_JEMCANPEIEC_OFFSET UNITYSDK_OFFSET(0x1FDBE240)
#define PGOGAENKIDH_LANPLAGFMDK_MJLCNNIMINO_OFFSET UNITYSDK_OFFSET(0x1FDBE390)
#define PGOGAENKIDH_LANPLAGFMDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE230)

inline static constexpr unsigned int PGOGAENKIDH_LANPLAGFMDK_TypeDefinitionIndex = 28314;

class PGOGAENKIDH_LANPLAGFMDK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOGAENKIDH_LANPLAGFMDK__CTOR_OFFSET))(this);
	}

	static ::System::Nullable_1<::System::Int32> JEMCANPEIEC(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* LDHAIIPOBBG)
	{
		return ((::System::Nullable_1<::System::Int32>(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + PGOGAENKIDH_LANPLAGFMDK_JEMCANPEIEC_OFFSET))(LDHAIIPOBBG);
	}

	static ::System::Int32 MJLCNNIMINO(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* LDHAIIPOBBG, ::System::Int32 PDFEDOCLDHG)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PGOGAENKIDH_LANPLAGFMDK_MJLCNNIMINO_OFFSET))(LDHAIIPOBBG, PDFEDOCLDHG);
	}
};

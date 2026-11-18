#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define PGOGAENKIDH_MGJDMHANDMI_OICPADDFPNB_OFFSET UNITYSDK_OFFSET(0x1FDBE620)
#define PGOGAENKIDH_MGJDMHANDMI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE510)
#define PGOGAENKIDH_MGJDMHANDMI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDBE500)

inline static constexpr unsigned int PGOGAENKIDH_MGJDMHANDMI_TypeDefinitionIndex = 28315;

class PGOGAENKIDH_MGJDMHANDMI : public ::System::Object
{
public:
	static ::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*>>** StaticGet_GGAIGNNKJDE()
	{
		return (::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*>>**)Il2CppClass::FromTypeDefinitionIndex(PGOGAENKIDH_MGJDMHANDMI_TypeDefinitionIndex)->GetStaticField(0x25590);
	}
	static ::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Nullable_1<::System::Int32>>>** StaticGet_MLNDADJGFMC()
	{
		return (::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Nullable_1<::System::Int32>>>**)Il2CppClass::FromTypeDefinitionIndex(PGOGAENKIDH_MGJDMHANDMI_TypeDefinitionIndex)->GetStaticField(0x25598);
	}
	static ::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::String*>** StaticGet_MGEDBKBHJPM()
	{
		return (::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PGOGAENKIDH_MGJDMHANDMI_TypeDefinitionIndex)->GetStaticField(0x255A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI__CCTOR_OFFSET))();
	}

	static ::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>* OICPADDFPNB(::System::Int32 PDFEDOCLDHG)
	{
		return ((::System::Func_3<::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + PGOGAENKIDH_MGJDMHANDMI_OICPADDFPNB_OFFSET))(PDFEDOCLDHG);
	}
};

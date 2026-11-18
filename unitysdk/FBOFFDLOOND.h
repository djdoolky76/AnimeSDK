#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBOFFDLOOND_AJJDJJNOOOI_OFFSET UNITYSDK_OFFSET(0x17265420)
#define FBOFFDLOOND__CCTOR_OFFSET UNITYSDK_OFFSET(0x17264B10)

inline static constexpr unsigned int FBOFFDLOOND_TypeDefinitionIndex = 80757;

class FBOFFDLOOND : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_OMHCEEKKCJB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(FBOFFDLOOND_TypeDefinitionIndex)->GetStaticField(0x38490);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_BNDBKAOAMLH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FBOFFDLOOND_TypeDefinitionIndex)->GetStaticField(0x38498);
	}
	// static const ::System::String* CGICCOBHACH; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBOFFDLOOND__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* AJJDJJNOOOI()
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + FBOFFDLOOND_AJJDJJNOOOI_OFFSET))();
	}
};

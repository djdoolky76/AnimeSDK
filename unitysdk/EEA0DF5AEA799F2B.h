#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEA0DF5AEA799F2B_ABEDA6561E97DB27_OFFSET UNITYSDK_OFFSET(0x21C57B0)
#define EEA0DF5AEA799F2B__CCTOR_OFFSET UNITYSDK_OFFSET(0x21C58D0)

inline static constexpr unsigned int EEA0DF5AEA799F2B_TypeDefinitionIndex = 8865;

class EEA0DF5AEA799F2B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*>** StaticGet_E64C6D703C79CF64()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*>**)Il2CppClass::FromTypeDefinitionIndex(EEA0DF5AEA799F2B_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEA0DF5AEA799F2B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Type*>* ABEDA6561E97DB27(::System::Type* E0B6B8C376D2B99A)
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + EEA0DF5AEA799F2B_ABEDA6561E97DB27_OFFSET))(E0B6B8C376D2B99A);
	}
};

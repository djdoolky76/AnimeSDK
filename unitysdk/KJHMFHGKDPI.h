#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFEMPGIFEBO.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

#define KJHMFHGKDPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x199598D0)

inline static constexpr unsigned int KJHMFHGKDPI_TypeDefinitionIndex = 88578;

class KJHMFHGKDPI : public ::System::Object
{
public:
	static ::System::Collections::Generic::IComparer_1<::BFEMPGIFEBO>** StaticGet_CMBKFNOCFHO()
	{
		return (::System::Collections::Generic::IComparer_1<::BFEMPGIFEBO>**)Il2CppClass::FromTypeDefinitionIndex(KJHMFHGKDPI_TypeDefinitionIndex)->GetStaticField(0x44590);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJHMFHGKDPI__CCTOR_OFFSET))();
	}
};

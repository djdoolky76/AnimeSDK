#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCE7F417B93E45F3_A99B3C22A9FD32FA_OFFSET UNITYSDK_OFFSET(0x3F3F810)
#define FCE7F417B93E45F3_B9ECA36FB407D487_OFFSET UNITYSDK_OFFSET(0x3F3F970)
#define FCE7F417B93E45F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F3F9E0)
#define FCE7F417B93E45F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCE7F417B93E45F3_TypeDefinitionIndex = 20571;

class FCE7F417B93E45F3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_E602026EFA7AF616()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(FCE7F417B93E45F3_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void B9ECA36FB407D487(::System::Exception* A4E4D73B752E2373)
	{
		return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + FCE7F417B93E45F3_B9ECA36FB407D487_OFFSET))(A4E4D73B752E2373);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCE7F417B93E45F3__CCTOR_OFFSET))();
	}

	static ::System::Void A99B3C22A9FD32FA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCE7F417B93E45F3_A99B3C22A9FD32FA_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCE7F417B93E45F3__CTOR_OFFSET))(this);
	}
};

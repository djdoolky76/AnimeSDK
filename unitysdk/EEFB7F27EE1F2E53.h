#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EEFB7F27EE1F2E53_A79A9C1C02A31A7D_OFFSET UNITYSDK_OFFSET(0x424E150)
#define EEFB7F27EE1F2E53_F591CA17F78EC188_OFFSET UNITYSDK_OFFSET(0x424E0C0)
#define EEFB7F27EE1F2E53__CCTOR_OFFSET UNITYSDK_OFFSET(0x424E1E0)

inline static constexpr unsigned int EEFB7F27EE1F2E53_TypeDefinitionIndex = 13182;

class EEFB7F27EE1F2E53 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_E9F7314D65DA7982()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EEFB7F27EE1F2E53_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_F0A839AA8B428707()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EEFB7F27EE1F2E53_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFB7F27EE1F2E53__CCTOR_OFFSET))();
	}

	static ::System::Boolean A79A9C1C02A31A7D(::System::String* F79B4D487F303AB2, ::System::String*& E58070F852A84BA6)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + EEFB7F27EE1F2E53_A79A9C1C02A31A7D_OFFSET))(F79B4D487F303AB2, E58070F852A84BA6);
	}

	static ::System::Boolean F591CA17F78EC188(::System::String* F79B4D487F303AB2, ::System::String*& E58070F852A84BA6)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + EEFB7F27EE1F2E53_F591CA17F78EC188_OFFSET))(F79B4D487F303AB2, E58070F852A84BA6);
	}
};

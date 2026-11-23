#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/EF2A706049267B60.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EF91E7D44260CBFC_E62A02F00AB4BC62_OFFSET UNITYSDK_OFFSET(0x1D4B9C0)
#define EF91E7D44260CBFC_E75DC2BB3373B1D2_OFFSET UNITYSDK_OFFSET(0x1D4BEE0)
#define EF91E7D44260CBFC_F98897982E4BBBEF_OFFSET UNITYSDK_OFFSET(0x1D4BE70)

inline static constexpr unsigned int EF91E7D44260CBFC_TypeDefinitionIndex = 10071;

class EF91E7D44260CBFC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::EF2A706049267B60, ::System::String*>** StaticGet_BEEC6BBA67E53594()
	{
		return (::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::EF2A706049267B60, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EF91E7D44260CBFC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::E68AA4EB51923C98::EF2A706049267B60>** StaticGet_F83576316E95C600()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::E68AA4EB51923C98::EF2A706049267B60>**)Il2CppClass::FromTypeDefinitionIndex(EF91E7D44260CBFC_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean E75DC2BB3373B1D2(::E68AA4EB51923C98::EF2A706049267B60 E47007FF0AD2309D)
	{
		return ((::System::Boolean(*)(::E68AA4EB51923C98::EF2A706049267B60))((::PBYTE)hIl2Cpp + EF91E7D44260CBFC_E75DC2BB3373B1D2_OFFSET))(E47007FF0AD2309D);
	}

	static ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::EF2A706049267B60, ::System::String*>* F98897982E4BBBEF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::EF2A706049267B60, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + EF91E7D44260CBFC_F98897982E4BBBEF_OFFSET))();
	}

	static ::System::Void E62A02F00AB4BC62()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EF91E7D44260CBFC_E62A02F00AB4BC62_OFFSET))();
	}
};

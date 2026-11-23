#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/OidGroup.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class F34A365CFD193D25;

#define ADF096EBFBDEB7F6_A3E402E3340024FF_OFFSET UNITYSDK_OFFSET(0x3E53380)
#define ADF096EBFBDEB7F6_F4DFB0CF39FA9029_OFFSET UNITYSDK_OFFSET(0x3E52BC0)
#define ADF096EBFBDEB7F6_F7E8F1D54EEC73AC_OFFSET UNITYSDK_OFFSET(0x3E535D0)
#define ADF096EBFBDEB7F6_F91098DB35E40928_OFFSET UNITYSDK_OFFSET(0x3E52FA0)
#define ADF096EBFBDEB7F6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3E537F0)

inline static constexpr unsigned int ADF096EBFBDEB7F6_TypeDefinitionIndex = 14854;

class ADF096EBFBDEB7F6 : public ::System::Object
{
public:
	static ::F34A365CFD193D25<::System::String*, ::System::String*>** StaticGet_BD9987EF666CD7FA()
	{
		return (::F34A365CFD193D25<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADF096EBFBDEB7F6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::F34A365CFD193D25<::System::String*, ::System::String*>** StaticGet_A2481FA4C0ED895A()
	{
		return (::F34A365CFD193D25<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADF096EBFBDEB7F6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_EDDAE6F6B07EFA52()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADF096EBFBDEB7F6_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_A77A7278F50219B5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADF096EBFBDEB7F6_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FDE85C5B93D955D2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ADF096EBFBDEB7F6_TypeDefinitionIndex)->GetStaticField(0x20);
	}

	static ::System::String* F91098DB35E40928(::System::String* E91257C7E44715B6, ::System::Security::Cryptography::OidGroup FA47E6CEC92C6D35, ::System::Boolean EA1F91757398107E)
	{
		return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_F91098DB35E40928_OFFSET))(E91257C7E44715B6, FA47E6CEC92C6D35, EA1F91757398107E);
	}

	static ::System::String* F4DFB0CF39FA9029(::System::String* A5F0C457FA1F1A21, ::System::Security::Cryptography::OidGroup FA47E6CEC92C6D35, ::System::Boolean EA1F91757398107E)
	{
		return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_F4DFB0CF39FA9029_OFFSET))(A5F0C457FA1F1A21, FA47E6CEC92C6D35, EA1F91757398107E);
	}

	static ::System::String* A3E402E3340024FF(::System::String* E91257C7E44715B6, ::System::Security::Cryptography::OidGroup FA47E6CEC92C6D35, ::System::Boolean EA1F91757398107E)
	{
		return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_A3E402E3340024FF_OFFSET))(E91257C7E44715B6, FA47E6CEC92C6D35, EA1F91757398107E);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6__CCTOR_OFFSET))();
	}

	static ::System::String* F7E8F1D54EEC73AC(::System::String* A5F0C457FA1F1A21, ::System::Security::Cryptography::OidGroup FA47E6CEC92C6D35, ::System::Boolean EA1F91757398107E)
	{
		return ((::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup, ::System::Boolean))((::PBYTE)hIl2Cpp + ADF096EBFBDEB7F6_F7E8F1D54EEC73AC_OFFSET))(A5F0C457FA1F1A21, FA47E6CEC92C6D35, EA1F91757398107E);
	}
};

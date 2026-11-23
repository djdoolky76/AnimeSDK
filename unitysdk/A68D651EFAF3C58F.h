#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A68D651EFAF3C58F_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x29FB960)
#define A68D651EFAF3C58F_B1571F132BECBCD9_OFFSET UNITYSDK_OFFSET(0x29FB810)
#define A68D651EFAF3C58F_E7DB714022DBA6B4_OFFSET UNITYSDK_OFFSET(0x29FB5E0)
#define A68D651EFAF3C58F_FE9925166972E471_OFFSET UNITYSDK_OFFSET(0x29FBAD0)
#define A68D651EFAF3C58F__CCTOR_OFFSET UNITYSDK_OFFSET(0x29FC5E0)
#define A68D651EFAF3C58F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A68D651EFAF3C58F_TypeDefinitionIndex = 15769;

class A68D651EFAF3C58F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Object*>** StaticGet_B1B9F9B9C1EF61E4()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A68D651EFAF3C58F_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_A7574F7A432998EE()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A68D651EFAF3C58F_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_E41F966EF9989134()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A68D651EFAF3C58F_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_F0E428F0D33A1B2E()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A68D651EFAF3C58F_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A68D651EFAF3C58F__CCTOR_OFFSET))();
	}

	static ::System::Boolean E7DB714022DBA6B4(::System::String* E2692EDB678DEB5F)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + A68D651EFAF3C58F_E7DB714022DBA6B4_OFFSET))(E2692EDB678DEB5F);
	}

	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A68D651EFAF3C58F_A1E97155B145443C_OFFSET))();
	}

	static ::System::String* FE9925166972E471(::System::String* E2692EDB678DEB5F, ::System::String* F0D3F87128A7C4CA, ::System::Action_1<::System::String*>* E04D2BE64FCE9814)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + A68D651EFAF3C58F_FE9925166972E471_OFFSET))(E2692EDB678DEB5F, F0D3F87128A7C4CA, E04D2BE64FCE9814);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A68D651EFAF3C58F__CTOR_OFFSET))(this);
	}

	static ::System::Void B1571F132BECBCD9()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A68D651EFAF3C58F_B1571F132BECBCD9_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class F3A019B3697FD5CF;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FBEAFE7E4FC88596_F5628F8349D4A8A6_BE0D52460CCAA7E8_OFFSET UNITYSDK_OFFSET(0x251AB30)
#define FBEAFE7E4FC88596_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x251AB80)
#define FBEAFE7E4FC88596_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FBEAFE7E4FC88596_F5628F8349D4A8A6_TypeDefinitionIndex = 5194;

class FBEAFE7E4FC88596_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::FBEAFE7E4FC88596_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::FBEAFE7E4FC88596_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(FBEAFE7E4FC88596_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>>, ::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>>** StaticGet_E9ECEFD236E8FFBC()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>>, ::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(FBEAFE7E4FC88596_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBEAFE7E4FC88596_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEAFE7E4FC88596_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*> BE0D52460CCAA7E8(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>> BB8C609F76620E45)
	{
		return ((::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F3A019B3697FD5CF*, ::System::String*>>))((::PBYTE)hIl2Cpp + FBEAFE7E4FC88596_F5628F8349D4A8A6_BE0D52460CCAA7E8_OFFSET))(this, BB8C609F76620E45);
	}
};

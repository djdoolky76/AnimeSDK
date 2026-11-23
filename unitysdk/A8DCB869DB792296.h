#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E18ED99A30D9921D.h"
#include "unitysdk/F3C59571077338C9/E88409E82FB4938D.h"
#include "unitysdk/F3C59571077338C9/EA1A877CA642492A.h"

class F9C251CDB04846BC;
namespace System { class Object; }
namespace System { class String; }
template <typename T1, typename T2> class F5986F987EB32863;

#define A8DCB869DB792296_E4ECC50B2E252F43_1_OFFSET UNITYSDK_OFFSET(0x44483B0)
#define A8DCB869DB792296_E4ECC50B2E252F43_OFFSET UNITYSDK_OFFSET(0x4448460)
#define A8DCB869DB792296__CCTOR_OFFSET UNITYSDK_OFFSET(0x44482D0)
#define A8DCB869DB792296__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8DCB869DB792296_TypeDefinitionIndex = 19005;

class A8DCB869DB792296 : public ::E18ED99A30D9921D
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_F1752B2F97F6A5D0()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(A8DCB869DB792296_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_E37749C62506AA56()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(A8DCB869DB792296_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8DCB869DB792296__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Boolean>* E4ECC50B2E252F43(::System::String* E655B2F737B7E1BD)
	{
		return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A8DCB869DB792296_E4ECC50B2E252F43_OFFSET))(this, E655B2F737B7E1BD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A8DCB869DB792296__CCTOR_OFFSET))();
	}

	::F9C251CDB04846BC* E4ECC50B2E252F43_1(::System::String* E655B2F737B7E1BD, ::F3C59571077338C9::EA1A877CA642492A F1B74DA73881CF9B, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::F5986F987EB32863<::F3C59571077338C9::E88409E82FB4938D, ::System::Object*>* FB647F0E229385C1)
	{
		return ((::F9C251CDB04846BC*(*)(::PVOID, ::System::String*, ::F3C59571077338C9::EA1A877CA642492A, ::System::Int32, ::System::Int32, ::F5986F987EB32863<::F3C59571077338C9::E88409E82FB4938D, ::System::Object*>*))((::PBYTE)hIl2Cpp + A8DCB869DB792296_E4ECC50B2E252F43_1_OFFSET))(this, E655B2F737B7E1BD, F1B74DA73881CF9B, F5EF7E29767E03BF, F0961C93719F7B0D, FB647F0E229385C1);
	}
};

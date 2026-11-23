#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E18ED99A30D9921D.h"
#include "unitysdk/F3C59571077338C9/E88409E82FB4938D.h"
#include "unitysdk/F3C59571077338C9/EA1A877CA642492A.h"

class F9C251CDB04846BC;
namespace System { class Object; }
namespace System { class String; }
template <typename T1, typename T2> class F5986F987EB32863;

#define BFEEF89806A315BF_E4ECC50B2E252F43_1_OFFSET UNITYSDK_OFFSET(0x444D720)
#define BFEEF89806A315BF_E4ECC50B2E252F43_OFFSET UNITYSDK_OFFSET(0x444CE80)
#define BFEEF89806A315BF__CCTOR_OFFSET UNITYSDK_OFFSET(0x444C5A0)
#define BFEEF89806A315BF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BFEEF89806A315BF_TypeDefinitionIndex = 19037;

class BFEEF89806A315BF : public ::E18ED99A30D9921D
{
public:
	static ::Il2CppArray<::System::Int32>** StaticGet_F5FF517316E9BC40()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_B795C753AA335A58()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_E8B52151630A253B()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::Il2CppArray<::Il2CppArray<::System::Int32>*>** StaticGet_EC8FF02DAB1B91BF()
	{
		return (::Il2CppArray<::Il2CppArray<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x18);
	}
	static ::Il2CppArray<::System::Byte>** StaticGet_F86E6AC354CC118A()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x20);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_E71FB72F66C5139C()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x28);
	}
	static ::Il2CppArray<::System::Int32>** StaticGet_FAC9115D952EAFEB()
	{
		return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(BFEEF89806A315BF_TypeDefinitionIndex)->GetStaticField(0x30);
	}

	::Il2CppArray<::System::Boolean>* E4ECC50B2E252F43(::System::String* E655B2F737B7E1BD)
	{
		return ((::Il2CppArray<::System::Boolean>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BFEEF89806A315BF_E4ECC50B2E252F43_OFFSET))(this, E655B2F737B7E1BD);
	}

	::F9C251CDB04846BC* E4ECC50B2E252F43_1(::System::String* E655B2F737B7E1BD, ::F3C59571077338C9::EA1A877CA642492A F1B74DA73881CF9B, ::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D, ::F5986F987EB32863<::F3C59571077338C9::E88409E82FB4938D, ::System::Object*>* FB647F0E229385C1)
	{
		return ((::F9C251CDB04846BC*(*)(::PVOID, ::System::String*, ::F3C59571077338C9::EA1A877CA642492A, ::System::Int32, ::System::Int32, ::F5986F987EB32863<::F3C59571077338C9::E88409E82FB4938D, ::System::Object*>*))((::PBYTE)hIl2Cpp + BFEEF89806A315BF_E4ECC50B2E252F43_1_OFFSET))(this, E655B2F737B7E1BD, F1B74DA73881CF9B, F5EF7E29767E03BF, F0961C93719F7B0D, FB647F0E229385C1);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEEF89806A315BF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFEEF89806A315BF__CCTOR_OFFSET))();
	}
};

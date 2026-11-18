#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHDFGCPJFPC.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJJDDLIHENP_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x1416E2B0)
#define EJJDDLIHENP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1416DBA0)

inline static constexpr unsigned int EJJDDLIHENP_TypeDefinitionIndex = 62108;

class EJJDDLIHENP : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_OGONCMFNDLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EJJDDLIHENP_TypeDefinitionIndex)->GetStaticField(0x37600);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_FLNMOIDBEJH()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EJJDDLIHENP_TypeDefinitionIndex)->GetStaticField(0x37608);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_BLIECGPMABP()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EJJDDLIHENP_TypeDefinitionIndex)->GetStaticField(0x37610);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JLCCLJADIDK()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EJJDDLIHENP_TypeDefinitionIndex)->GetStaticField(0x37618);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>** StaticGet_DJLMFCKMCDE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(EJJDDLIHENP_TypeDefinitionIndex)->GetStaticField(0x37620);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJJDDLIHENP__CCTOR_OFFSET))();
	}

	static ::System::Void LCJEELHBNHG(::PHDFGCPJFPC FKDONKGGAIF)
	{
		return ((::System::Void(*)(::PHDFGCPJFPC))((::PBYTE)hIl2Cpp + EJJDDLIHENP_LCJEELHBNHG_OFFSET))(FKDONKGGAIF);
	}
};

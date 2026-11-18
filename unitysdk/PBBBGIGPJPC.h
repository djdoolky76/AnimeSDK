#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBBBGIGPJPC_CIEGKFNDHLG_OFFSET UNITYSDK_OFFSET(0x15FF99F0)
#define PBBBGIGPJPC_ECAMFJEJPFC_OFFSET UNITYSDK_OFFSET(0x15FF9970)
#define PBBBGIGPJPC_JBDCOEBKKKG_OFFSET UNITYSDK_OFFSET(0x15FF94F0)
#define PBBBGIGPJPC_KAKEGOCJOIH_OFFSET UNITYSDK_OFFSET(0x15FF98F0)

inline static constexpr unsigned int PBBBGIGPJPC_TypeDefinitionIndex = 42379;

class PBBBGIGPJPC : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_HJIAAOGFGGK()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PBBBGIGPJPC_TypeDefinitionIndex)->GetStaticField(0x4E6B0);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_FMBHAOIBNNH()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PBBBGIGPJPC_TypeDefinitionIndex)->GetStaticField(0x4E6B8);
	}

	static ::System::Void JBDCOEBKKKG(::System::Collections::Generic::IList_1<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + PBBBGIGPJPC_JBDCOEBKKKG_OFFSET))(HGKANJHHLMF);
	}

	static ::System::Void KAKEGOCJOIH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBBBGIGPJPC_KAKEGOCJOIH_OFFSET))();
	}

	static ::System::Void ECAMFJEJPFC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBBBGIGPJPC_ECAMFJEJPFC_OFFSET))();
	}

	static ::System::Void CIEGKFNDHLG(::Il2CppArray<::System::Int32>* HGKANJHHLMF)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + PBBBGIGPJPC_CIEGKFNDHLG_OFFSET))(HGKANJHHLMF);
	}
};

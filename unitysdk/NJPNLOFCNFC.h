#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/NPPIIJMBPCA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJPNLOFCNFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x137600D0)

inline static constexpr unsigned int NJPNLOFCNFC_TypeDefinitionIndex = 55215;

class NJPNLOFCNFC : public ::System::Object
{
public:
	static ::Il2CppArray<::NPPIIJMBPCA>** StaticGet_GBHNMHGECMC()
	{
		return (::Il2CppArray<::NPPIIJMBPCA>**)Il2CppClass::FromTypeDefinitionIndex(NJPNLOFCNFC_TypeDefinitionIndex)->GetStaticField(0x31960);
	}
	static ::System::Collections::Generic::Dictionary_2<::BDEHNBMOHMG, ::Il2CppArray<::NPPIIJMBPCA>*>** StaticGet_DNBMGMHJEBL()
	{
		return (::System::Collections::Generic::Dictionary_2<::BDEHNBMOHMG, ::Il2CppArray<::NPPIIJMBPCA>*>**)Il2CppClass::FromTypeDefinitionIndex(NJPNLOFCNFC_TypeDefinitionIndex)->GetStaticField(0x31968);
	}
	static ::System::Collections::Generic::Dictionary_2<::NPPIIJMBPCA, ::System::String*>** StaticGet_ALDDHNLANJE()
	{
		return (::System::Collections::Generic::Dictionary_2<::NPPIIJMBPCA, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NJPNLOFCNFC_TypeDefinitionIndex)->GetStaticField(0x31970);
	}
	static ::System::Collections::Generic::Dictionary_2<::BDEHNBMOHMG, ::System::String*>** StaticGet_NBNKMCKHANI()
	{
		return (::System::Collections::Generic::Dictionary_2<::BDEHNBMOHMG, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NJPNLOFCNFC_TypeDefinitionIndex)->GetStaticField(0x31978);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJPNLOFCNFC__CCTOR_OFFSET))();
	}
};

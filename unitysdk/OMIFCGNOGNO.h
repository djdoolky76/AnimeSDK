#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMIFCGNOGNO_JLMNFOPLHDA_OFFSET UNITYSDK_OFFSET(0x15FEE700)
#define OMIFCGNOGNO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FEE3E0)

inline static constexpr unsigned int OMIFCGNOGNO_TypeDefinitionIndex = 78184;

class OMIFCGNOGNO : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>** StaticGet_IGICBMOOHAP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(OMIFCGNOGNO_TypeDefinitionIndex)->GetStaticField(0x497E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>** StaticGet_JLCOIFLHPBL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(OMIFCGNOGNO_TypeDefinitionIndex)->GetStaticField(0x497E8);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_BDGIOBGFPED()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(OMIFCGNOGNO_TypeDefinitionIndex)->GetStaticField(0x497F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMIFCGNOGNO__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>* JLMNFOPLHDA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + OMIFCGNOGNO_JLMNFOPLHDA_OFFSET))();
	}
};

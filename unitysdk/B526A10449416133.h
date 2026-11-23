#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define B526A10449416133_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x3DBCC60)
#define B526A10449416133__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DBD020)

inline static constexpr unsigned int B526A10449416133_TypeDefinitionIndex = 21164;

class B526A10449416133 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_EB8B5DB3B8C03757()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(B526A10449416133_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B526A10449416133__CCTOR_OFFSET))();
	}

	static ::System::Void FF0997C535275E60(::UnityEngine::GameObject* A86A90C31A146E9C)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + B526A10449416133_FF0997C535275E60_OFFSET))(A86A90C31A146E9C);
	}
};

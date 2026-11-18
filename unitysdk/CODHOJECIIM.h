#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ModifiableContactPair.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CODHOJECIIM_HDCEJHKDCIK_OFFSET UNITYSDK_OFFSET(0x15348170)
#define CODHOJECIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15348040)

inline static constexpr unsigned int CODHOJECIIM_TypeDefinitionIndex = 82591;

class CODHOJECIIM : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_AOKKFMAPICI()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CODHOJECIIM_TypeDefinitionIndex)->GetStaticField(0x3A730);
	}
	static ::System::Boolean* StaticGet_IJJOEAIOHFO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CODHOJECIIM_TypeDefinitionIndex)->GetStaticField(0xD7E0);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* OMPMFGJOBHJ; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* BKOLFHIIDIK; // 0x18
	::System::Boolean NNEFIMCKAMG; // 0x20
	::System::Boolean CNICCKDPPEJ; // 0x21
	::System::Byte _padding0[0x2];
	::System::Single CIOPCEJDADN; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODHOJECIIM__CTOR_OFFSET))(this);
	}

	::System::Void HDCEJHKDCIK(::UnityEngine::PhysicsScene PIIPCLCCOIG, ::System::Int32 PIPGGOOELKG, ::UnityEngine::ModifiableContactPair JIDEDAPGIJB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair))((::PBYTE)hIl2Cpp + CODHOJECIIM_HDCEJHKDCIK_OFFSET))(this, PIIPCLCCOIG, PIPGGOOELKG, JIDEDAPGIJB);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/E68AA4EB51923C98/ED32772994017EBF.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define B5076CD16E61EB31_BB7040118E7B0225_1_OFFSET UNITYSDK_OFFSET(0x21D4F40)
#define B5076CD16E61EB31_BB7040118E7B0225_OFFSET UNITYSDK_OFFSET(0x21D4DC0)
#define B5076CD16E61EB31_BE8AE0BB5538AD70_OFFSET UNITYSDK_OFFSET(0x21D4C40)
#define B5076CD16E61EB31_FCEF75FF198EF0EF_OFFSET UNITYSDK_OFFSET(0x21D4B60)
#define B5076CD16E61EB31__CCTOR_OFFSET UNITYSDK_OFFSET(0x21D4FB0)

inline static constexpr unsigned int B5076CD16E61EB31_TypeDefinitionIndex = 8947;

class B5076CD16E61EB31 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_B0B42B2130301516()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(B5076CD16E61EB31_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Texture2D*>** StaticGet_E64D43CB89C72CCC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Texture2D*>**)Il2CppClass::FromTypeDefinitionIndex(B5076CD16E61EB31_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean BB7040118E7B0225(::E68AA4EB51923C98::B92BBABCE5ECD236 ED833F95E0E065E2, ::System::UInt32 AE8B4FC810923B8E)
	{
		return ((::System::Boolean(*)(::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32))((::PBYTE)hIl2Cpp + B5076CD16E61EB31_BB7040118E7B0225_OFFSET))(ED833F95E0E065E2, AE8B4FC810923B8E);
	}

	static ::System::Boolean BB7040118E7B0225_1(::E68AA4EB51923C98::ED32772994017EBF F03D81212E74F8FE, ::System::UInt32 AE8B4FC810923B8E)
	{
		return ((::System::Boolean(*)(::E68AA4EB51923C98::ED32772994017EBF, ::System::UInt32))((::PBYTE)hIl2Cpp + B5076CD16E61EB31_BB7040118E7B0225_1_OFFSET))(F03D81212E74F8FE, AE8B4FC810923B8E);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B5076CD16E61EB31__CCTOR_OFFSET))();
	}

	static ::System::UInt32 FCEF75FF198EF0EF(::E68AA4EB51923C98::B92BBABCE5ECD236 ED833F95E0E065E2)
	{
		return ((::System::UInt32(*)(::E68AA4EB51923C98::B92BBABCE5ECD236))((::PBYTE)hIl2Cpp + B5076CD16E61EB31_FCEF75FF198EF0EF_OFFSET))(ED833F95E0E065E2);
	}

	static ::UnityEngine::Texture2D* BE8AE0BB5538AD70(::UnityEngine::Material* A54EF53C742D300D, ::System::Int32 F250A972A8A56C26)
	{
		return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + B5076CD16E61EB31_BE8AE0BB5538AD70_OFFSET))(A54EF53C742D300D, F250A972A8A56C26);
	}
};

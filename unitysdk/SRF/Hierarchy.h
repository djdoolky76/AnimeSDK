#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define SRF_HIERARCHY_CCTOR_OFFSET UNITYSDK_OFFSET(0x200215C0)
#define SRF_HIERARCHY_CTOR_OFFSET UNITYSDK_OFFSET(0x200215B0)
#define SRF_HIERARCHY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x200211E0)
#define SRF_HIERARCHY_GET_OFFSET UNITYSDK_OFFSET(0x20021210)
#define SRF_HIERARCHY_RUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x20021520)

namespace SRF
{
	inline static constexpr unsigned int Hierarchy_TypeDefinitionIndex = 36302;

	class Hierarchy : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_Seperator()
		{
			return (::Il2CppArray<::System::Char>**)UnitySDK::FromName("SRF", "Hierarchy")->GetStaticField(0x57890);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>** StaticGet_Cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>**)UnitySDK::FromName("SRF", "Hierarchy")->GetStaticField(0x57898);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_HIERARCHY_CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* get_Item(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_GET_ITEM_OFFSET))(this, a1);
		}

		static ::UnityEngine::Transform* Get(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::System::String*))((::PBYTE)hIl2Cpp + SRF_HIERARCHY_GET_OFFSET))(a1);
		}

		static ::System::Void RuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRF_HIERARCHY_RUNTIMEINITIALIZE_OFFSET))();
		}

	};
}

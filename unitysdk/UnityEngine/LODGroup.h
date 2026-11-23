#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/E46128E11FD26499.h"

#define UNITYENGINE_LODGROUP_B7A341075003D76B_OFFSET UNITYSDK_OFFSET(0x410F880)
#define UNITYENGINE_LODGROUP_BFE9347A4972E77C_OFFSET UNITYSDK_OFFSET(0x410F8E0)
#define UNITYENGINE_LODGROUP_ED26628F13FB6783_OFFSET UNITYSDK_OFFSET(0x410F800)
#define UNITYENGINE_LODGROUP_F2FAF2A1922751F5_OFFSET UNITYSDK_OFFSET(0x410F840)
#define UNITYENGINE_LODGROUP_FD4987BC3E5D912A_OFFSET UNITYSDK_OFFSET(0x410F920)
#define UNITYENGINE_LODGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x410F8D0)

namespace UnityEngine
{
	inline static constexpr unsigned int LODGroup_TypeDefinitionIndex = 16994;

	class LODGroup : public ::UnityEngine::Component
	{
	public:
		::Il2CppArray<::UnityEngine::E46128E11FD26499>* ED26628F13FB6783()
		{
			return ((::Il2CppArray<::UnityEngine::E46128E11FD26499>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_ED26628F13FB6783_OFFSET))(this);
		}

		::System::Void B7A341075003D76B(::Il2CppArray<::UnityEngine::E46128E11FD26499>* A7468B40EE35736E)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::E46128E11FD26499>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_B7A341075003D76B_OFFSET))(this, A7468B40EE35736E);
		}

		::System::Int32 BFE9347A4972E77C()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_BFE9347A4972E77C_OFFSET))(this);
		}

		::System::Single FD4987BC3E5D912A()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_FD4987BC3E5D912A_OFFSET))(this);
		}

		::System::Void F2FAF2A1922751F5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP_F2FAF2A1922751F5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LODGROUP__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_A3CA9BD94E364034_A77D533498DF1340_OFFSET UNITYSDK_OFFSET(0x4188620)
#define UNITYENGINE_A3CA9BD94E364034_E76D48DEFAAB55CB_OFFSET UNITYSDK_OFFSET(0x41885B0)
#define UNITYENGINE_A3CA9BD94E364034_F3D985F3F361FE85_1_OFFSET UNITYSDK_OFFSET(0x41886F0)
#define UNITYENGINE_A3CA9BD94E364034_F3D985F3F361FE85_2_OFFSET UNITYSDK_OFFSET(0x4188670)
#define UNITYENGINE_A3CA9BD94E364034__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace UnityEngine
{
	inline static constexpr unsigned int A3CA9BD94E364034_TypeDefinitionIndex = 17705;

	class A3CA9BD94E364034 : public ::System::Object
	{
	public:
		static ::UnityEngine::Object* F3D985F3F361FE85_1(::System::String* EFF983A80A48BB2A)
		{
			return ((::UnityEngine::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A3CA9BD94E364034_F3D985F3F361FE85_1_OFFSET))(EFF983A80A48BB2A);
		}

		static ::UnityEngine::Object* F3D985F3F361FE85_2(::System::String* EFF983A80A48BB2A, ::System::Type* A8C3D92FA7B1AF39)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A3CA9BD94E364034_F3D985F3F361FE85_2_OFFSET))(EFF983A80A48BB2A, A8C3D92FA7B1AF39);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* E76D48DEFAAB55CB(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_A3CA9BD94E364034_E76D48DEFAAB55CB_OFFSET))(A288CB28FC2A6DA3);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_A3CA9BD94E364034__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Object* A77D533498DF1340(::System::Type* A288CB28FC2A6DA3, ::System::String* EFF983A80A48BB2A)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_A3CA9BD94E364034_A77D533498DF1340_OFFSET))(A288CB28FC2A6DA3, EFF983A80A48BB2A);
		}
	};
}

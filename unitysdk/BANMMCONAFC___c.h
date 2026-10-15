#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BANMMCONAFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E70CB0)
#define BANMMCONAFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E70CF0)
#define BANMMCONAFC___C___DOSPLIT_B__11_1_OFFSET UNITYSDK_OFFSET(0x15E70D00)

inline static constexpr unsigned int BANMMCONAFC___c_TypeDefinitionIndex = 77897;

	class BANMMCONAFC___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Vector3>** StaticGet___9__11_1()
		{
			return (::System::Action_1<::UnityEngine::Vector3>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64DE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64DE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BANMMCONAFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC___C_CTOR_OFFSET))(this);
		}

		::System::Void __DoSplit_b__11_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANMMCONAFC___C___DOSPLIT_B__11_1_OFFSET))(this, a1);
		}

	};

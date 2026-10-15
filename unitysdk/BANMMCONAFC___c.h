#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Action; }
namespace System { class Object; }

#define BANMMCONAFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E7DAE0)
#define BANMMCONAFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E7DB20)
#define BANMMCONAFC___C___DOSPLIT_B__11_1_OFFSET UNITYSDK_OFFSET(0x15E7DB30)

inline static constexpr unsigned int BANMMCONAFC___c_TypeDefinitionIndex = 77898;

	class BANMMCONAFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C490);
		}

		static ::System::Action** StaticGet___9__11_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C498);
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

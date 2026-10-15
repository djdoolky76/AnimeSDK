#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Component; }

#define RPG_CLIENT_LONGTEXT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4AF900)
#define RPG_CLIENT_LONGTEXT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD4AF930)
#define RPG_CLIENT_LONGTEXT___C__ONPOPULATEMESH_B__15_0_OFFSET UNITYSDK_OFFSET(0xD4AF940)

namespace RPG::Client
{
	class LongText___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Component*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::UnityEngine::Component*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3B0B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3B0B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnPopulateMesh_b__15_0(::UnityEngine::Component* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT___C__ONPOPULATEMESH_B__15_0_OFFSET))(this, a1);
		}

	};
}

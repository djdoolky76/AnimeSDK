#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC7CEAD0)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC7CEB10)
#define RPG_CLIENT_BAT_BATCONTROLLER_GRID___C___UPDATE_B__3_0_OFFSET UNITYSDK_OFFSET(0xC7CEB20)

namespace RPG::Client::BAT
{
	inline static constexpr unsigned int BATController_Grid___c_TypeDefinitionIndex = 73668;

	class BATController_Grid___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*>**)UnitySDK::FromName("RPG.Client.BAT", "<>c")->GetStaticField(0x5A070);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.BAT", "<>c")->GetStaticField(0x5A078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>* __Update_b__3_0(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Matrix4x4>*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BAT_BATCONTROLLER_GRID___C___UPDATE_B__3_0_OFFSET))(this, a1);
		}

	};
}

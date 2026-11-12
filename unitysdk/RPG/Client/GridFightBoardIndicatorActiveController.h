#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTBOARDINDICATORACTIVECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xDA7D710)
#define RPG_CLIENT_GRIDFIGHTBOARDINDICATORACTIVECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDA7D370)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBoardIndicatorActiveController_TypeDefinitionIndex = 65939;

	class GridFightBoardIndicatorActiveController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _Slots; // 0x18
		// static const ::System::String* MGFCNHJICGK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBOARDINDICATORACTIVECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBOARDINDICATORACTIVECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

	};
}

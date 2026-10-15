#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MusicVisualizeDataSourceType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class EBIKHHMFBNE;
class KLEFGGIHGMI;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDC03680)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_EOJBCLHBEGA_OFFSET UNITYSDK_OFFSET(0xDC03830)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_POLYMERADDCHILDOBJ_OFFSET UNITYSDK_OFFSET(0xDC03720)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_VISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0xDC04490)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET UNITYSDK_OFFSET(0xDC043F0)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET UNITYSDK_OFFSET(0xDC04340)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_POLYMERADDCHILDOBJ_OFFSET UNITYSDK_OFFSET(0xDC03730)
#define RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_VISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0xDC044A0)

namespace RPG::Client
{
	inline static constexpr unsigned int PolymerEffectControllBase_TypeDefinitionIndex = 70305;

	class PolymerEffectControllBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::EBIKHHMFBNE* _VisualizeData_k__BackingField; // 0x18
		::RPG::Client::MusicVisualizeDataSourceType SourceType; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::String*>* PolymerChildren; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_PolymerAddChildObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_POLYMERADDCHILDOBJ_OFFSET))(this);
		}

		::System::Void set_PolymerAddChildObj(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_POLYMERADDCHILDOBJ_OFFSET))(this, a1);
		}

		::System::String* EOJBCLHBEGA(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_EOJBCLHBEGA_OFFSET))(this, a1, a2);
		}

		::System::Void OnPolymerRebuildBeforeFading(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDBEFOREFADING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnPolymerRebuildAfterFading(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_ONPOLYMERREBUILDAFTERFADING_OFFSET))(this, a1, a2, a3);
		}

		::EBIKHHMFBNE* get_VisualizeData()
		{
			return ((::EBIKHHMFBNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_GET_VISUALIZEDATA_OFFSET))(this);
		}

		::System::Void set_VisualizeData(::EBIKHHMFBNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBIKHHMFBNE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_POLYMEREFFECTCONTROLLBASE_SET_VISUALIZEDATA_OFFSET))(this, a1);
		}

	};
}

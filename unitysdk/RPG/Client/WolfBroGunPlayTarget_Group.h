#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xE478070)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_HLFAPFCOBGJ_OFFSET UNITYSDK_OFFSET(0xE477FA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xE477CB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xE477C70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_MAFJDACEFMN_OFFSET UNITYSDK_OFFSET(0xE477ED0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_MDNCLDAFLLJ_OFFSET UNITYSDK_OFFSET(0xE477CF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_PEFKOMJKCHA_OFFSET UNITYSDK_OFFSET(0xE477D40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xE477A50)

namespace RPG::Client
{
	class WolfBroGunPlayTarget_Group : public ::RPG::Client::WolfBroGunPlayTarget
	{
	public:
		::Il2CppArray<::System::Object*>* members; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_CTOR_OFFSET))(this);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_SETPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_ISBOOMABLE_OFFSET))(this);
		}

		::System::Boolean MDNCLDAFLLJ(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_MDNCLDAFLLJ_OFFSET))(this, a1);
		}

		::System::Boolean PEFKOMJKCHA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_PEFKOMJKCHA_OFFSET))(this, a1);
		}

		::System::Boolean MAFJDACEFMN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_MAFJDACEFMN_OFFSET))(this, a1);
		}

		::System::Void HLFAPFCOBGJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GROUP_HLFAPFCOBGJ_OFFSET))(this, a1);
		}

	};
}

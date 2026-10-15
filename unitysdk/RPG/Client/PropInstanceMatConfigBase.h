#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"
namespace System { class String; }

#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF7540)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_DBKOJBAIOFL_1_OFFSET UNITYSDK_OFFSET(0xDDF74A0)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_DBKOJBAIOFL_2_OFFSET UNITYSDK_OFFSET(0xDDF74F0)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_DBKOJBAIOFL_OFFSET UNITYSDK_OFFSET(0xDDF7450)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDDF7350)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceMatConfigBase_TypeDefinitionIndex = 70751;

	class PropInstanceMatConfigBase : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::System::Int32 _PropertyID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void DBKOJBAIOFL(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_DBKOJBAIOFL_OFFSET))(this, a1);
		}

		::System::Void DBKOJBAIOFL_1(::Unity::Collections::NativeArray_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_DBKOJBAIOFL_1_OFFSET))(this, a1);
		}

		::System::Void DBKOJBAIOFL_2(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_DBKOJBAIOFL_2_OFFSET))(this, a1);
		}

	};
}

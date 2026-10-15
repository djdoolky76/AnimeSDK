#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropInstanceMatConfigBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_BLPBHBPNFPP_OFFSET UNITYSDK_OFFSET(0xDDF75D0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xDDF7780)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_DBKOJBAIOFL_1_OFFSET UNITYSDK_OFFSET(0xDDF76F0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_DBKOJBAIOFL_OFFSET UNITYSDK_OFFSET(0xDDF7670)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_KDJPBFGKCIM_OFFSET UNITYSDK_OFFSET(0xDDF6EE0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xDDF7550)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceMatFloatConfig_TypeDefinitionIndex = 70752;

	class PropInstanceMatFloatConfig : public ::RPG::Client::PropInstanceMatConfigBase
	{
	public:
		::Il2CppArray<::System::Single>* PropertyValues; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void KDJPBFGKCIM(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_KDJPBFGKCIM_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void BLPBHBPNFPP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_BLPBHBPNFPP_OFFSET))(this, a1);
		}

		::System::Void DBKOJBAIOFL(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_DBKOJBAIOFL_OFFSET))(this, a1);
		}

		::System::Void DBKOJBAIOFL_1(::Unity::Collections::NativeArray_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_DBKOJBAIOFL_1_OFFSET))(this, a1);
		}

	};
}

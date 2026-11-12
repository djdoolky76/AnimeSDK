#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MAPUI3DIDENTIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0xDFB95F0)
#define RPG_CLIENT_MAPUI3DIDENTIFIER_GET_ID_OFFSET UNITYSDK_OFFSET(0xDFB9560)
#define RPG_CLIENT_MAPUI3DIDENTIFIER_SETID_OFFSET UNITYSDK_OFFSET(0xDFB95A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapUI3DIdentifier_TypeDefinitionIndex = 64363;

	class MapUI3DIdentifier : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 _id; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPUI3DIDENTIFIER_CTOR_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPUI3DIDENTIFIER_GET_ID_OFFSET))(this);
		}

		::System::Void SetId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPUI3DIDENTIFIER_SETID_OFFSET))(this, a1);
		}

	};
}

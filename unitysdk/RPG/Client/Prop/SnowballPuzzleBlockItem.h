#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/SnowballPuzzleBlockType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDB7490)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDDB7480)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISDESTINATION_OFFSET UNITYSDK_OFFSET(0xDDB7460)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISSNOWBALL_OFFSET UNITYSDK_OFFSET(0xDDB7470)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_LCEOIMNJOLC_OFFSET UNITYSDK_OFFSET(0xDDB7020)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_RESETDESTINATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDDB73B0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDESTINATIONSTATE_OFFSET UNITYSDK_OFFSET(0xDDB72F0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDYNAMICGRIDUSE_OFFSET UNITYSDK_OFFSET(0xDDB7230)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SNOWBALLSETSIZE_OFFSET UNITYSDK_OFFSET(0xDDB7180)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SnowballPuzzleBlockItem_TypeDefinitionIndex = 78864;

	class SnowballPuzzleBlockItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int Position; // 0x18
		::RPG::Client::Prop::SnowballPuzzleBlockType BlockType; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* AnimObject; // 0x28
		::System::Int32 DestinationSizeRequire; // 0x30
		::System::Int32 SnowballInitSize; // 0x34
		::UnityEngine::Animator* APPGGMLEPLN; // 0x38
		static ::System::Int32* StaticGet_JPEGMAOLGHL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "SnowballPuzzleBlockItem")->GetStaticField(0x14320);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_CCTOR_OFFSET))();
		}

		::UnityEngine::Animator* LCEOIMNJOLC()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_LCEOIMNJOLC_OFFSET))(this);
		}

		::System::Void SnowballSetSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SNOWBALLSETSIZE_OFFSET))(this, a1);
		}

		::System::Void SetDynamicGridUse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDYNAMICGRIDUSE_OFFSET))(this, a1);
		}

		::System::Void SetDestinationState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_SETDESTINATIONSTATE_OFFSET))(this, a1);
		}

		::System::Void ResetDestinationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_RESETDESTINATIONSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsDestination()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISDESTINATION_OFFSET))(this);
		}

		::System::Boolean get_IsSnowball()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBLOCKITEM_GET_ISSNOWBALL_OFFSET))(this);
		}

	};
}

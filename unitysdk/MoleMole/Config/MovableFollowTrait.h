#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xFAD2990)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFAD1CB0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD1DB0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD1CA0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD24F0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD2030)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFAD1DA0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD2550)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD20B0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD2800)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD23B0)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD2A70)
#define MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD2A80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MovableFollowTrait_TypeDefinitionIndex = 90643;

	class MovableFollowTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::UnityEngine::Vector3 PosOffset; // 0x18
		::System::Int32 FollowConfigID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MovableFollowTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MovableFollowTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MovableFollowTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MovableFollowTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MOVABLEFOLLOWTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}

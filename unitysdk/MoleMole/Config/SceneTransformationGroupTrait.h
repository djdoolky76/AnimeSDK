#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6ED140)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6ED240)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6ED0B0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6EE850)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6ED9F0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C6EF0C0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6ED230)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6EE8B0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6EDA70)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6EEF30)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6EE710)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EF190)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6EF1A0)
#define MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C6EF1B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneTransformationGroupTrait_TypeDefinitionIndex = 84461;

	class SceneTransformationGroupTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsCoreGroup; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* SceneTransformationTag; // 0x20
		::System::Boolean IsPushHiddenRenderLayer; // 0x28
		::System::Boolean IsSwitchSceneGameObjects; // 0x29
		::System::Byte _padding1[0x6];
		::System::String* SceneGameObjectsSwitcherKey; // 0x30
		::System::Int32 SceneGameObjectsSwitcherIndex; // 0x38
		::System::Byte _padding2[0x4];
		::System::String* GroupVariable; // 0x40
		::System::String* BattleRegionField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SceneTransformationGroupTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SceneTransformationGroupTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SceneTransformationGroupTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SceneTransformationGroupTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENETRANSFORMATIONGROUPTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}

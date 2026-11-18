#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGHLEODMBD.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class GPLKKGNEDLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFAD2AE0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD2BE0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD2A90)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD4AA0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD3710)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFAD5380)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFAD2BD0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INITNPCNAME_OFFSET UNITYSDK_OFFSET(0xFAD54D0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD4B00)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD3790)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0xFAD5410)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFAD51F0)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFAD4960)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD5B40)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD5B60)
#define MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0xFAD5B70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NamePanelTrait_TypeDefinitionIndex = 80218;

	class NamePanelTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean HideNamePanel; // 0x18
		::System::Byte _padding0[0x3];
		::DIGHLEODMBD NameSource; // 0x1C
		::System::String* NameTextMapKey; // 0x20
		::System::Boolean EnableInteractionDetection; // 0x28
		::System::Boolean HideWhenNoInteract; // 0x29
		::System::Boolean HideWhenInteractMaxPriorityActivated; // 0x2A
		::System::Boolean EnableSpaceDetection; // 0x2B
		::System::Single FadeInThreshold; // 0x2C
		::System::Single FadeOutThreshold; // 0x30
		::System::Single HeightThreshold; // 0x34
		::System::Boolean IgnoreOcclusionCheck; // 0x38
		::System::Boolean HideWhenEntityDisable; // 0x39
		::System::Byte _padding1[0x6];
		::GPLKKGNEDLG* _component; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::NamePanelTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::NamePanelTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::NamePanelTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::NamePanelTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void InitNpcName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT_INITNPCNAME_OFFSET))(this);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NAMEPANELTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}

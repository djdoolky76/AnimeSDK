#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMDBFEPBBAC.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MGPOFMBMFKM.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class ILGGMFDKGPC;
class OHDHAGLCAEB;
namespace MoleMole { class InteractTraitData; }
namespace MoleMole::Config { class ConfigInteractInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONEDATA_OFFSET UNITYSDK_OFFSET(0x11E97280)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x11E94950)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_DOLOADDATA_OFFSET UNITYSDK_OFFSET(0x11E97740)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11E94A50)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x11E948D0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E96620)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11E952E0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11E96ED0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11E94A40)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET UNITYSDK_OFFSET(0x11E96E70)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E96680)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E95360)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADDATA_OFFSET UNITYSDK_OFFSET(0x11E97210)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x11E97AD0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E96CE0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E964E0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_TRYLOADRESOURCEFROMCACHE_OFFSET UNITYSDK_OFFSET(0x11E97C60)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E97D50)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11E97DD0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x11E97DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractTrait_TypeDefinitionIndex = 56969;

	class ConfigInteractTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* InteractName; // 0x18
		::Foundation::AssetPath ConfigDataPath; // 0x20
		::System::Int32 CoopInteractMaxCount; // 0x30
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>* InteractGroup; // 0x38
		::System::Boolean PlayerRotate; // 0x40
		::System::Byte _padding1[0x3];
		::EMDBFEPBBAC NpcRotateMode; // 0x44
		::MGPOFMBMFKM SwitchAvatarMode; // 0x48
		::System::Int32 TargetAgent; // 0x4C
		::System::Int32 SwitchToSkin; // 0x50
		::System::Int32 UnlockId; // 0x54
		::System::String* Hint; // 0x58
		::System::Single OverrideHoldInputTime; // 0x60
		::System::Byte _padding2[0x4];
		::ILGGMFDKGPC* _mainInteractRunData; // 0x68
		::System::Collections::Generic::List_1<::ILGGMFDKGPC*>* _otherInteractRunDataList; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigInteractTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigInteractTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigInteractTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Int32 get_InteractPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GET_INTERACTPRIORITY_OFFSET))(this);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		static ::ILGGMFDKGPC* CloneData(::MoleMole::InteractTraitData* interactTraitData, ::System::String*& interactName)
		{
			return ((::ILGGMFDKGPC*(*)(::MoleMole::InteractTraitData*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_CLONEDATA_OFFSET))(interactTraitData, interactName);
		}

		::System::Void LoadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADDATA_OFFSET))(this);
		}

		::System::Void LoadGroupDataList(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*& interactGroup, ::System::Collections::Generic::List_1<::ILGGMFDKGPC*>*& traitDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigInteractInfo*>*&, ::System::Collections::Generic::List_1<::ILGGMFDKGPC*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_LOADGROUPDATALIST_OFFSET))(this, interactGroup, traitDataList);
		}

		::ILGGMFDKGPC* DoLoadData(::System::String*& key, ::Foundation::AssetPath& assetPath, ::System::Action_1<::MoleMole::InteractTraitData*>* onLoadSuccess)
		{
			return ((::ILGGMFDKGPC*(*)(::PVOID, ::System::String*&, ::Foundation::AssetPath&, ::System::Action_1<::MoleMole::InteractTraitData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_DOLOADDATA_OFFSET))(this, key, assetPath, onLoadSuccess);
		}

		static ::System::Boolean TryLoadResourceFromCache(::Foundation::AssetPath filePath, ::Foundation::AssetRequestHandle& handle, ::MoleMole::InteractTraitData*& interactTraitData)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&, ::MoleMole::InteractTraitData*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT_TRYLOADRESOURCEFROMCACHE_OFFSET))(filePath, handle, interactTraitData);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractTriggerMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IJLOBIGIEDO;
namespace MoleMole::Config { class InteractEntryMode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_INTERACTENTRY_CREATEINTERACTINSTANCE_OFFSET UNITYSDK_OFFSET(0xFAD03C0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETACTIONLIST_OFFSET UNITYSDK_OFFSET(0xFAD04C0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0xFAD0350)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GETVALUELIST_OFFSET UNITYSDK_OFFSET(0xFAD0520)
#define MOLEMOLE_CONFIG_INTERACTENTRY_GET_ISSUPPORTREPEAT_OFFSET UNITYSDK_OFFSET(0xFAD02F0)
#define MOLEMOLE_CONFIG_INTERACTENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFAD0420)
#define MOLEMOLE_CONFIG_INTERACTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD0580)
#define MOLEMOLE_CONFIG_INTERACTENTRY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFAD05B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntry_TypeDefinitionIndex = 87220;

	class InteractEntry : public ::System::Object
	{
	public:
		::System::String* interactName; // 0x10
		::System::String* interactShowName; // 0x18
		::Il2CppArray<::System::String*>* addAbilityArray; // 0x20
		::Il2CppArray<::System::String*>* fcEventArray; // 0x28
		::MoleMole::Config::InteractEntryMode* mode; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagBlackList; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* ZoneTagWhiteList; // 0x40
		::System::Single excludeSourceMaxAngle; // 0x48
		::System::Single maxHeight; // 0x4C
		::System::Single interactRange; // 0x50
		::UnityEngine::Vector3 offset; // 0x54
		::MoleMole::Config::InteractTriggerMode triggerMode; // 0x60
		::System::Int32 interactCount; // 0x64
		::System::Boolean limitSourceDirection; // 0x68
		::System::Byte _padding0[0x3];
		::System::Single limitSourceMaxAngle; // 0x6C
		::System::Single maxAngle; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsSupportRepeat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GET_ISSUPPORTREPEAT_OFFSET))(this);
		}

		::System::Boolean GetEffInteractRange(::System::Single& effRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GETEFFINTERACTRANGE_OFFSET))(this, effRadius);
		}

		::IJLOBIGIEDO* CreateInteractInstance()
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_CREATEINTERACTINSTANCE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_TOSTRING_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetActionList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GETACTIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::String*>* GetValueList()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY_GETVALUELIST_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}

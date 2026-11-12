#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
class JBFFCBPMKEF;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFiveDimContainerDynamicValueChange; }

#define ODMIIOPPONH_CTOR_OFFSET UNITYSDK_OFFSET(0xC6A5190)
#define ODMIIOPPONH_HBFCDJDFNIP_OFFSET UNITYSDK_OFFSET(0xC6A5B40)
#define ODMIIOPPONH_KAMLPCLKGOJ_OFFSET UNITYSDK_OFFSET(0xC6A5D60)
#define ODMIIOPPONH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC6A53D0)
#define ODMIIOPPONH__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xC6A5870)
#define ODMIIOPPONH__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC6A5450)
#define ODMIIOPPONH__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xC6A5660)

inline static constexpr unsigned int ODMIIOPPONH_TypeDefinitionIndex = 54051;

	class ODMIIOPPONH
	{
	public:
		::JBFFCBPMKEF* HIJOAMLICNE; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFiveDimContainerDynamicValueChange*))((::PBYTE)hIl2Cpp + ODMIIOPPONH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMIIOPPONH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMIIOPPONH__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMIIOPPONH__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Boolean _PrepareData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMIIOPPONH__PREPAREDATA_OFFSET))(this);
		}

		::System::Void HBFCDJDFNIP(::RPG::GameCore::StringHash a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ODMIIOPPONH_HBFCDJDFNIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KAMLPCLKGOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODMIIOPPONH_KAMLPCLKGOJ_OFFSET))(this);
		}

	};

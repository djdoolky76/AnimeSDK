#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOFKELIMGM;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DLLNHNMMJOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1867B8D0)
#define DLLNHNMMJOM_GET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1867B870)
#define DLLNHNMMJOM_GET_PROGRESSSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1867B8B0)
#define DLLNHNMMJOM_GET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1867B890)
#define DLLNHNMMJOM_SET_CURDESIGNLEVEL_OFFSET UNITYSDK_OFFSET(0x1867B880)
#define DLLNHNMMJOM_SET_PROGRESSSEGMENTS_OFFSET UNITYSDK_OFFSET(0x1867B8C0)
#define DLLNHNMMJOM_SET_REWARDITEMS_OFFSET UNITYSDK_OFFSET(0x1867B8A0)

inline static constexpr unsigned int DLLNHNMMJOM_TypeDefinitionIndex = 82489;

	class DLLNHNMMJOM : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableList_1<::HLOFKELIMGM*>* _RewardItems_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* _ProgressSegments_k__BackingField; // 0x18
		::System::UInt32 _CurDesignLevel_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_CurDesignLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_GET_CURDESIGNLEVEL_OFFSET))(this);
		}

		::System::Void set_CurDesignLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_SET_CURDESIGNLEVEL_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::HLOFKELIMGM*>* get_RewardItems()
		{
			return ((::ObservableCollections::ObservableList_1<::HLOFKELIMGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_GET_REWARDITEMS_OFFSET))(this);
		}

		::System::Void set_RewardItems(::ObservableCollections::ObservableList_1<::HLOFKELIMGM*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ObservableCollections::ObservableList_1<::HLOFKELIMGM*>*))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_SET_REWARDITEMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_ProgressSegments()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_GET_PROGRESSSEGMENTS_OFFSET))(this);
		}

		::System::Void set_ProgressSegments(::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DLLNHNMMJOM_SET_PROGRESSSEGMENTS_OFFSET))(this, a1);
		}

	};

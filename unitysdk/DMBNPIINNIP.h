#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AFMMIMLKEDK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DMBNPIINNIP_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB85B0)
#define DMBNPIINNIP_GET_ARTPREFABPATH_OFFSET UNITYSDK_OFFSET(0xFEB8530)
#define DMBNPIINNIP_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0xFEB8500)
#define DMBNPIINNIP_GET_EFFECTCOLORLIST_OFFSET UNITYSDK_OFFSET(0xFEB8590)
#define DMBNPIINNIP_GET_ID_OFFSET UNITYSDK_OFFSET(0xFEB8510)
#define DMBNPIINNIP_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xFEB85A0)
#define DMBNPIINNIP_GET_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0xFEB8540)
#define DMBNPIINNIP_GET_NAME_OFFSET UNITYSDK_OFFSET(0xFEB8560)
#define DMBNPIINNIP_GET_PAINTCOLORLIST_OFFSET UNITYSDK_OFFSET(0xFEB8580)
#define DMBNPIINNIP_GET_POSELIST_OFFSET UNITYSDK_OFFSET(0xFEB8570)
#define DMBNPIINNIP_GET_PREVIEWIMAGE_OFFSET UNITYSDK_OFFSET(0xFEB8550)
#define DMBNPIINNIP_GET_UNLOCKCONDITIONID_OFFSET UNITYSDK_OFFSET(0xFEB8520)

	class DMBNPIINNIP : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _EffectColorList_k__BackingField; // 0x10
		::System::String* _PreviewImage_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PaintColorList_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _PoseList_k__BackingField; // 0x28
		::System::String* _ArtPrefabPath_k__BackingField; // 0x30
		::System::Int32 _CacheKey_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::System::UInt32 _UnlockConditionID_k__BackingField; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x48
		::System::Boolean _IsSpecial_k__BackingField; // 0x58
		::System::Byte _padding1[0x3];
		::System::UInt32 _InstanceID_k__BackingField; // 0x5C
		::System::Void _ctor(::AFMMIMLKEDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFMMIMLKEDK*))((::PBYTE)hIl2Cpp + DMBNPIINNIP_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_UnlockConditionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_UNLOCKCONDITIONID_OFFSET))(this);
		}

		::System::String* get_ArtPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_ARTPREFABPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSpecial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_ISSPECIAL_OFFSET))(this);
		}

		::System::String* get_PreviewImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_PREVIEWIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PoseList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_POSELIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_PaintColorList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_PAINTCOLORLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_EffectColorList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_EFFECTCOLORLIST_OFFSET))(this);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBNPIINNIP_GET_INSTANCEID_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIHAAHEDBDH;
namespace RPG::Client { class MusicAlbumItemData; }

#define MIHAAHEDBDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB958C50)
#define MIHAAHEDBDH_GET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xB958C10)
#define MIHAAHEDBDH_GET_VOLUME_OFFSET UNITYSDK_OFFSET(0xB958C30)
#define MIHAAHEDBDH_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xB958BB0)
#define MIHAAHEDBDH_SET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xB958C20)
#define MIHAAHEDBDH_SET_VOLUME_OFFSET UNITYSDK_OFFSET(0xB958C40)

inline static constexpr unsigned int MIHAAHEDBDH_TypeDefinitionIndex = 66363;

	class MIHAAHEDBDH : public ::System::Object
	{
	public:
		::RPG::Client::MusicAlbumItemData* _RelatedMusicItemData_k__BackingField; // 0x10
		::System::UInt32 _Volume_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHAAHEDBDH_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::MIHAAHEDBDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIHAAHEDBDH*))((::PBYTE)hIl2Cpp + MIHAAHEDBDH_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::RPG::Client::MusicAlbumItemData* get_RelatedMusicItemData()
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHAAHEDBDH_GET_RELATEDMUSICITEMDATA_OFFSET))(this);
		}

		::System::Void set_RelatedMusicItemData(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + MIHAAHEDBDH_SET_RELATEDMUSICITEMDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_Volume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHAAHEDBDH_GET_VOLUME_OFFSET))(this);
		}

		::System::Void set_Volume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHAAHEDBDH_SET_VOLUME_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFMIJBJLFCF;
namespace RPG::Client { class MusicAlbumItemData; }

#define OFMIJBJLFCF_CTOR_OFFSET UNITYSDK_OFFSET(0xBE490C0)
#define OFMIJBJLFCF_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xBE490A0)
#define OFMIJBJLFCF_GET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xBE49080)
#define OFMIJBJLFCF_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xBE49020)
#define OFMIJBJLFCF_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xBE490B0)
#define OFMIJBJLFCF_SET_RELATEDMUSICITEMDATA_OFFSET UNITYSDK_OFFSET(0xBE49090)

inline static constexpr unsigned int OFMIJBJLFCF_TypeDefinitionIndex = 66362;

	class OFMIJBJLFCF : public ::System::Object
	{
	public:
		::RPG::Client::MusicAlbumItemData* _RelatedMusicItemData_k__BackingField; // 0x10
		::System::Boolean _IsPaused_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMIJBJLFCF_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::OFMIJBJLFCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFMIJBJLFCF*))((::PBYTE)hIl2Cpp + OFMIJBJLFCF_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::RPG::Client::MusicAlbumItemData* get_RelatedMusicItemData()
		{
			return ((::RPG::Client::MusicAlbumItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMIJBJLFCF_GET_RELATEDMUSICITEMDATA_OFFSET))(this);
		}

		::System::Void set_RelatedMusicItemData(::RPG::Client::MusicAlbumItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicAlbumItemData*))((::PBYTE)hIl2Cpp + OFMIJBJLFCF_SET_RELATEDMUSICITEMDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMIJBJLFCF_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFMIJBJLFCF_SET_ISPAUSED_OFFSET))(this, a1);
		}

	};

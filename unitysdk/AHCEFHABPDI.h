#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Nullable; }
namespace System { class Object; }

#define AHCEFHABPDI_ALKAFBCALDK_OFFSET UNITYSDK_OFFSET(0xEB7A4C0)
#define AHCEFHABPDI_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7A5A0)
#define AHCEFHABPDI_FINDGDBGJEL_OFFSET UNITYSDK_OFFSET(0xEB7A5D0)
#define AHCEFHABPDI_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xEB7A4A0)
#define AHCEFHABPDI_JJKIIDALBBJ_OFFSET UNITYSDK_OFFSET(0xEB7A450)
#define AHCEFHABPDI_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xEB7A4B0)

inline static constexpr unsigned int AHCEFHABPDI_TypeDefinitionIndex = 81426;

	class AHCEFHABPDI : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* KPFKDKLCFKG; // 0x10
		::RPG::Client::ItemDisplayData* CMOLEAFKDGH; // 0x18
		::System::Nullable* _ItemCount_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + AHCEFHABPDI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 JJKIIDALBBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCEFHABPDI_JJKIIDALBBJ_OFFSET))(this);
		}

		::System::Nullable* get_ItemCount()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCEFHABPDI_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + AHCEFHABPDI_SET_ITEMCOUNT_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* ALKAFBCALDK()
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCEFHABPDI_ALKAFBCALDK_OFFSET))(this);
		}

		::System::Object* FINDGDBGJEL()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCEFHABPDI_FINDGDBGJEL_OFFSET))(this);
		}

	};

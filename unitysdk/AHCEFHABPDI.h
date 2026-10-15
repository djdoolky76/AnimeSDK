#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Object; }

#define AHCEFHABPDI_ALKAFBCALDK_OFFSET UNITYSDK_OFFSET(0xEB75220)
#define AHCEFHABPDI_CTOR_OFFSET UNITYSDK_OFFSET(0xEB75300)
#define AHCEFHABPDI_FINDGDBGJEL_OFFSET UNITYSDK_OFFSET(0xEB75330)
#define AHCEFHABPDI_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xEB75200)
#define AHCEFHABPDI_JJKIIDALBBJ_OFFSET UNITYSDK_OFFSET(0xEB751B0)
#define AHCEFHABPDI_SET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xEB75210)

inline static constexpr unsigned int AHCEFHABPDI_TypeDefinitionIndex = 81425;

	class AHCEFHABPDI : public ::System::Object
	{
	public:
		::RPG::Client::ItemData* KPFKDKLCFKG; // 0x10
		::RPG::Client::ItemDisplayData* CMOLEAFKDGH; // 0x18
		::System::Nullable_1<::System::Int32> _ItemCount_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + AHCEFHABPDI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 JJKIIDALBBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCEFHABPDI_JJKIIDALBBJ_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> get_ItemCount()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCEFHABPDI_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemCount(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + AHCEFHABPDI_SET_ITEMCOUNT_OFFSET))(this, a1);
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

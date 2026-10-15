#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDICCCGJFMK;
namespace RPG::Client { class MapMappingInfoData; }

#define HDICCCGJFMK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C35210)
#define HDICCCGJFMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C352B0)
#define HDICCCGJFMK_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0x15C352C0)
#define HDICCCGJFMK_GET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x15C350E0)
#define HDICCCGJFMK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C35100)
#define HDICCCGJFMK_SET_ICONTYPE_OFFSET UNITYSDK_OFFSET(0x15C350F0)

	class HDICCCGJFMK : public ::System::Object
	{
	public:
		::RPG::Client::MapMappingInfoData* KHDMDJELPPL; // 0x10
		::System::UInt32 _IconType_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDICCCGJFMK_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_IconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDICCCGJFMK_GET_ICONTYPE_OFFSET))(this);
		}

		::System::Void set_IconType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDICCCGJFMK_SET_ICONTYPE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + HDICCCGJFMK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		static ::HDICCCGJFMK* BPLPBPMEODA(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::HDICCCGJFMK*(*)(::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + HDICCCGJFMK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Int32 EGKLFHBCGCB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDICCCGJFMK_EGKLFHBCGCB_OFFSET))(this);
		}

	};

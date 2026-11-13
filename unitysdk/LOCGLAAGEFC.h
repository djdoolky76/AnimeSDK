#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimDanmuTrackAlignment.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }
namespace System { class String; }

#define LOCGLAAGEFC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D64A6A0)
#define LOCGLAAGEFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64A720)

inline static constexpr unsigned int LOCGLAAGEFC_TypeDefinitionIndex = 44385;

	class LOCGLAAGEFC : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* EMLLMHAAIJE; // 0x10
		::System::String* OLMLAALKCGN; // 0x18
		::System::Int32 HBFCDPHPOFG; // 0x20
		::System::Single CBNMAGPNPAI; // 0x24
		::System::Int32 LKHBBOJONMK; // 0x28
		::System::Single ACPKBICMMEP; // 0x2C
		::System::Single MODFAGBLNLJ; // 0x30
		::System::UInt32 NOPEABFIFKN; // 0x34
		::System::Boolean PKOHBMPDBCC; // 0x38
		::System::Boolean PHEFCCMCFBJ; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single GCJMFBKLGHI; // 0x3C
		::RPG::GameCore::FiveDimDanmuTrackAlignment PJLADNNBPJD; // 0x40
		::System::Single KCKNBCBIDPI; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCGLAAGEFC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCGLAAGEFC_CLEAR_OFFSET))(this);
		}

	};

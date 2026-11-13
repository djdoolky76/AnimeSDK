#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MuseumPropertyData; }

#define RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARALLDATA_OFFSET UNITYSDK_OFFSET(0x1C2A0A30)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARPREVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1C2A09E0)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x1C2A0A90)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A0B10)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_GET_CANUPDATE_OFFSET UNITYSDK_OFFSET(0x1C2A0990)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWCURNUM_OFFSET UNITYSDK_OFFSET(0x1C2A08D0)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWMAXNUM_OFFSET UNITYSDK_OFFSET(0x1C2A0930)
#define RPG_CLIENT_MUSEUMPROPERTYDATA_ISMAX_OFFSET UNITYSDK_OFFSET(0x1C29F460)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumPropertyData_TypeDefinitionIndex = 68267;

	class MuseumPropertyData : public ::System::Object
	{
	public:
		::System::Boolean IsJustAdd; // 0x10
		::System::Boolean IsAddMaxNumMinus; // 0x11
		::System::Boolean IsAddCurNumMinus; // 0x12
		::System::Boolean IsJustMax; // 0x13
		::System::UInt32 AddMaxNum; // 0x14
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 Level; // 0x1C
		::System::UInt32 MaxNum; // 0x20
		::System::UInt32 UpdateCost; // 0x24
		::System::UInt32 CurNum; // 0x28
		::System::UInt32 AddCurNum; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PreviewCurNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWCURNUM_OFFSET))(this);
		}

		::System::UInt32 get_PreviewMaxNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_GET_PREVIEWMAXNUM_OFFSET))(this);
		}

		::System::Boolean get_CanUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_GET_CANUPDATE_OFFSET))(this);
		}

		::System::Boolean IsMax(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_ISMAX_OFFSET))(this, a1);
		}

		::System::Void ClearPreviewData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARPREVIEWDATA_OFFSET))(this);
		}

		::System::Void ClearAllData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_CLEARALLDATA_OFFSET))(this);
		}

		::System::Void CopyTo(::RPG::Client::MuseumPropertyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumPropertyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMPROPERTYDATA_COPYTO_OFFSET))(this, a1);
		}

	};
}

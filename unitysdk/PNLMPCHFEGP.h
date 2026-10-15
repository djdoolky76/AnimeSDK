#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/System/Object.h"
class BOJKDLCIJCN;
namespace System { class String; }

#define PNLMPCHFEGP_CTOR_OFFSET UNITYSDK_OFFSET(0xC34D780)
#define PNLMPCHFEGP_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0xC34D860)
#define PNLMPCHFEGP_GET_NAME_OFFSET UNITYSDK_OFFSET(0xC34D810)
#define PNLMPCHFEGP_GHLBAAJGKJG_OFFSET UNITYSDK_OFFSET(0xC34D7B0)
#define PNLMPCHFEGP_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0xC34D820)

	class PNLMPCHFEGP : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::BOJKDLCIJCN* PBJAENMIKEJ; // 0x18
		::RPG::GameCore::GroupPropertySide EGHDMDEJICM; // 0x20
		::System::Int16 NDOGICGCDIP; // 0x24
		::System::Int16 AIKAPJELHNK; // 0x26
		::System::Int16 BFLNNOEKIGE; // 0x28
		::System::Byte _padding0[0x2];
		::System::UInt32 LLDCHLHNADA; // 0x2C
		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::Int16 a3, ::System::Int16 a4, ::System::Int16 a5, ::RPG::GameCore::GroupPropertySide a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16, ::System::Int16, ::System::Int16, ::RPG::GameCore::GroupPropertySide))((::PBYTE)hIl2Cpp + PNLMPCHFEGP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GHLBAAJGKJG(::System::Int16 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + PNLMPCHFEGP_GHLBAAJGKJG_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLMPCHFEGP_GET_NAME_OFFSET))(this);
		}

		::System::Int16 MNLDMBGAJIF()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLMPCHFEGP_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + PNLMPCHFEGP_DKDLBLLMPNE_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGPPOPJCAAE;
class FGPFBKDIOEL;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudFreeCardMoveHandler; }

#define MOMIJCEFOAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBA35270)
#define MOMIJCEFOAH_FFPKPGEPHIC_OFFSET UNITYSDK_OFFSET(0xBA351C0)
#define MOMIJCEFOAH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBA35060)
#define MOMIJCEFOAH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBA34F20)
#define MOMIJCEFOAH_LOCANFJBIBP_OFFSET UNITYSDK_OFFSET(0xBA35130)
#define MOMIJCEFOAH_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xBA34D40)

	class MOMIJCEFOAH : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudFreeCardMoveHandler* MEDBMAPJFCI; // 0x10
		::EGPPOPJCAAE* NHJIMBADBEN; // 0x18
		::System::Int32 MJPGFMKPAON; // 0x20
		// static const ::System::Object LGMIKNBJBLG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMIJCEFOAH_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::FGPFBKDIOEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGPFBKDIOEL*))((::PBYTE)hIl2Cpp + MOMIJCEFOAH_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMIJCEFOAH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMIJCEFOAH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean LOCANFJBIBP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOMIJCEFOAH_LOCANFJBIBP_OFFSET))(this, a1);
		}

		::System::Boolean FFPKPGEPHIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMIJCEFOAH_FFPKPGEPHIC_OFFSET))(this);
		}

	};

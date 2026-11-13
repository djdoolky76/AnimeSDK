#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
#include "unitysdk/IGKFNIEJGLM.h"
class ANABDAAAEEA;
class BNCEIPFBBGM;
class BNJCIKPAHIH;
class EBCNJEFOMCG;
class GAHPNAEGACM;
namespace RPG::Client { class ActionBarAnimation; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define FCHPIFLNKJO_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1C018910)
#define FCHPIFLNKJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C018A20)
#define FCHPIFLNKJO_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x1C0182A0)
#define FCHPIFLNKJO_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C018A00)
#define FCHPIFLNKJO_ILMPMNJDDPA_OFFSET UNITYSDK_OFFSET(0x1C018590)
#define FCHPIFLNKJO_JFBDFHPOEEK_OFFSET UNITYSDK_OFFSET(0x1C0185E0)
#define FCHPIFLNKJO_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1C017F90)
#define FCHPIFLNKJO_JIGAHNHGJDB_OFFSET UNITYSDK_OFFSET(0x1C018640)
#define FCHPIFLNKJO_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x1C018730)
#define FCHPIFLNKJO_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1C017D70)
#define FCHPIFLNKJO_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x1C0187D0)
#define FCHPIFLNKJO_KOMEPKKPNKM_OFFSET UNITYSDK_OFFSET(0x1C018870)
#define FCHPIFLNKJO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1C018450)
#define FCHPIFLNKJO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1C018010)
#define FCHPIFLNKJO_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x1C0180E0)
#define FCHPIFLNKJO_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1C018A10)
#define FCHPIFLNKJO__ONBIND_OFFSET UNITYSDK_OFFSET(0x1C017A00)
#define FCHPIFLNKJO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1C017D20)

inline static constexpr unsigned int FCHPIFLNKJO_TypeDefinitionIndex = 73233;

	class FCHPIFLNKJO : public ::CAOEEDDAPIK
	{
	public:
		::EBCNJEFOMCG* PNBFAOANEKC; // 0xE0
		::BNJCIKPAHIH* HJMKFAGJIJK; // 0xE8
		::System::String* _PrefabPath_k__BackingField; // 0xF0
		::RPG::Client::ActionBarAnimation* FGBEMIMABKG; // 0xF8
		::ANABDAAAEEA* CMKFDMKBPDD; // 0x100
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x108
		::IGKFNIEJGLM PMECLILMEDH; // 0x110
		::UnityEngine::Transform* NJFPFGJBLMK; // 0x118
		::System::String* DIDHOFMKIFH; // 0x120
		::BNCEIPFBBGM* CGLMAOHLOJD; // 0x128
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0x130
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void JFBDFHPOEEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_JFBDFHPOEEK_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void ILMPMNJDDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_ILMPMNJDDPA_OFFSET))(this);
		}

		::System::Void JIGAHNHGJDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_JIGAHNHGJDB_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void KOMEPKKPNKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_KOMEPKKPNKM_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_GET_PREFABPATH_OFFSET))(this);
		}

		::System::Void set_PrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCHPIFLNKJO_SET_PREFABPATH_OFFSET))(this, a1);
		}

	};

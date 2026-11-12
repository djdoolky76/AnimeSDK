#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertDeviceId.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BAMIOFOKCEB.h"
#include "unitysdk/RPG/Client/TextID.h"
class ECFOKHCPINL;

#define ALKIDFGNGAH_ADAHCAJBNOB_OFFSET UNITYSDK_OFFSET(0x163DD480)
#define ALKIDFGNGAH_BFADFAELKLJ_OFFSET UNITYSDK_OFFSET(0x163DD940)
#define ALKIDFGNGAH_CTOR_OFFSET UNITYSDK_OFFSET(0x163DD930)
#define ALKIDFGNGAH_DHFKCLJFKOH_OFFSET UNITYSDK_OFFSET(0x163DD560)
#define ALKIDFGNGAH_EGKDPFPIILC_OFFSET UNITYSDK_OFFSET(0x163DD640)
#define ALKIDFGNGAH_EOBJEHAFHCE_OFFSET UNITYSDK_OFFSET(0x163DD4D0)
#define ALKIDFGNGAH_FGBLNCDJJBA_OFFSET UNITYSDK_OFFSET(0x163DD780)
#define ALKIDFGNGAH_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x163DD460)
#define ALKIDFGNGAH_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x163DD410)
#define ALKIDFGNGAH_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x163DD440)
#define ALKIDFGNGAH_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x163DD420)
#define ALKIDFGNGAH_LFIMGEAEBID_OFFSET UNITYSDK_OFFSET(0x163DD980)
#define ALKIDFGNGAH_MPODOGLGMMF_OFFSET UNITYSDK_OFFSET(0x163DD6B0)
#define ALKIDFGNGAH_NNLEOILLCAJ_OFFSET UNITYSDK_OFFSET(0x163DD870)
#define ALKIDFGNGAH_OJAMANBFGFG_OFFSET UNITYSDK_OFFSET(0x163DD720)
#define ALKIDFGNGAH_PENKCHBNLIO_OFFSET UNITYSDK_OFFSET(0x163DD9D0)
#define ALKIDFGNGAH_PHMAELNHJHN_OFFSET UNITYSDK_OFFSET(0x163DD5E0)
#define ALKIDFGNGAH_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x163DD470)
#define ALKIDFGNGAH_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x163DD450)
#define ALKIDFGNGAH_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x163DD430)

inline static constexpr unsigned int ALKIDFGNGAH_TypeDefinitionIndex = 77078;

	class ALKIDFGNGAH : public ::System::Object
	{
	public:
		::ECFOKHCPINL* _Config_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x18
		::RPG::Client::ComicDessert::ComicDessertDeviceId _DeviceId_k__BackingField; // 0x1C
		::System::Boolean _IsUnlocked_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ComicDessert::ComicDessertDeviceId a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ComicDessert::ComicDessertDeviceId get_DeviceId()
		{
			return ((::RPG::Client::ComicDessert::ComicDessertDeviceId(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_GET_DEVICEID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_SET_ISUNLOCKED_OFFSET))(this, a1);
		}

		::ECFOKHCPINL* get_Config()
		{
			return ((::ECFOKHCPINL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::ECFOKHCPINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECFOKHCPINL*))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::UInt32 ADAHCAJBNOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_ADAHCAJBNOB_OFFSET))(this);
		}

		::System::Boolean EOBJEHAFHCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_EOBJEHAFHCE_OFFSET))(this);
		}

		::System::Boolean DHFKCLJFKOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_DHFKCLJFKOH_OFFSET))(this);
		}

		::System::UInt32 PHMAELNHJHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_PHMAELNHJHN_OFFSET))(this);
		}

		::RPG::Client::TextID EGKDPFPIILC()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_EGKDPFPIILC_OFFSET))(this);
		}

		::RPG::Client::TextID MPODOGLGMMF()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_MPODOGLGMMF_OFFSET))(this);
		}

		::BAMIOFOKCEB OJAMANBFGFG()
		{
			return ((::BAMIOFOKCEB(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_OJAMANBFGFG_OFFSET))(this);
		}

		::System::Boolean FGBLNCDJJBA(::BAMIOFOKCEB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_FGBLNCDJJBA_OFFSET))(this, a1);
		}

		::System::Boolean NNLEOILLCAJ(::BAMIOFOKCEB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIOFOKCEB))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_NNLEOILLCAJ_OFFSET))(this, a1);
		}

		::System::Void BFADFAELKLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_BFADFAELKLJ_OFFSET))(this);
		}

		::System::Void LFIMGEAEBID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_LFIMGEAEBID_OFFSET))(this, a1);
		}

		::System::Void PENKCHBNLIO(::ECFOKHCPINL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECFOKHCPINL*))((::PBYTE)hIl2Cpp + ALKIDFGNGAH_PENKCHBNLIO_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class NapRenderEntity;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigIndicatedLight; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Light; }

#define NLANFAAJEEK_BBGKDCEDGEL_OFFSET UNITYSDK_OFFSET(0x1315E9D0)
#define NLANFAAJEEK_CGNDDOLKGAD_OFFSET UNITYSDK_OFFSET(0x1315E8E0)
#define NLANFAAJEEK_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1315E980)
#define NLANFAAJEEK_GBHMOMKECKP_OFFSET UNITYSDK_OFFSET(0x1315E9E0)
#define NLANFAAJEEK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1315E7F0)
#define NLANFAAJEEK_HFIDIEEDMIF_OFFSET UNITYSDK_OFFSET(0x1315E8D0)
#define NLANFAAJEEK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1315EB90)
#define NLANFAAJEEK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1315E8F0)
#define NLANFAAJEEK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1315E780)
#define NLANFAAJEEK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1315E840)
#define NLANFAAJEEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1315E8C0)

inline static constexpr unsigned int NLANFAAJEEK_TypeDefinitionIndex = 79102;

class NLANFAAJEEK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xCF; // 0x0
	::MoleMole::Config::ConfigIndicatedLight* EHJFEGNBNAI; // 0x48
	::System::String* IOEBDDPDLAI; // 0x50
	::MoleMole::Config::ConfigIndicatedLight* BEEKBAHKHDL; // 0x58
	::UnityEngine::Light* NLFGBFCCCLJ; // 0x60
	::System::Action_2<::NLANFAAJEEK*, ::System::String*>* PKDDMFKHEPB; // 0x68
	::NapRenderEntity* ADGKBMCAKNO; // 0x70
	::System::String* HBLHKNMEGJO; // 0x78
	::MoleMole::Battle::Entity* _EANKCNLOKPH_k__BackingField; // 0x80
	::System::Single NNAAGMFKKAE; // 0x88
	::LFGBJHCEJID MHAFFMPJKMG; // 0x8C
	::System::Boolean GEJKLMOINLO; // 0xA8
	::System::Boolean PGOPDAKHAGF; // 0xA9
	::System::Byte _padding0[0x2];
	::System::Single PLAAIMDEAJE; // 0xAC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLANFAAJEEK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLANFAAJEEK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLANFAAJEEK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLANFAAJEEK_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* HFIDIEEDMIF()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLANFAAJEEK_HFIDIEEDMIF_OFFSET))(this);
	}

	::System::String* CGNDDOLKGAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLANFAAJEEK_CGNDDOLKGAD_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLANFAAJEEK_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Battle::Entity* BCMPPBLJNIG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLANFAAJEEK_GALGFCPKMGC_OFFSET))(this, BCMPPBLJNIG);
	}

	::System::Void BBGKDCEDGEL(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NLANFAAJEEK_BBGKDCEDGEL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GBHMOMKECKP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLANFAAJEEK_GBHMOMKECKP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::NLANFAAJEEK* JFDOOELFAOA()
	{
		return ((::NLANFAAJEEK*(*)())((::PBYTE)hIl2Cpp + NLANFAAJEEK_JFDOOELFAOA_OFFSET))();
	}
};

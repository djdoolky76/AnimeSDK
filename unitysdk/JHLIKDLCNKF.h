#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AODIFLIBBJA;
class MBBCFJKMFNF;
namespace MoleMole::Config { class PhotoCameraModeOverride; }

#define JHLIKDLCNKF_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x165AC280)
#define JHLIKDLCNKF_DKCMGJOIJAI_OFFSET UNITYSDK_OFFSET(0x165AC2E0)
#define JHLIKDLCNKF_GLHCEBJKHMF_OFFSET UNITYSDK_OFFSET(0x165AC3F0)
#define JHLIKDLCNKF_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x165AC220)
#define JHLIKDLCNKF_KOGJDEOIAIJ_OFFSET UNITYSDK_OFFSET(0x165AC350)
#define JHLIKDLCNKF__CTOR_OFFSET UNITYSDK_OFFSET(0x165AC340)

inline static constexpr unsigned int JHLIKDLCNKF_TypeDefinitionIndex = 51382;

class JHLIKDLCNKF : public ::System::Object
{
public:
	::MBBCFJKMFNF* EIBJMGBGNAE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLIKDLCNKF__CTOR_OFFSET))(this);
	}

	::System::Void KIJAJIHPBDL(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + JHLIKDLCNKF_KIJAJIHPBDL_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLIKDLCNKF_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void DKCMGJOIJAI(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + JHLIKDLCNKF_DKCMGJOIJAI_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void KOGJDEOIAIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLIKDLCNKF_KOGJDEOIAIJ_OFFSET))(this);
	}

	::MBBCFJKMFNF* GLHCEBJKHMF()
	{
		return ((::MBBCFJKMFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLIKDLCNKF_GLHCEBJKHMF_OFFSET))(this);
	}
};

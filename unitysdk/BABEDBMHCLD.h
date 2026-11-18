#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"

#define BABEDBMHCLD_FGPIICEOOPA_OFFSET UNITYSDK_OFFSET(0x1437DCD0)
#define BABEDBMHCLD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1437DBE0)
#define BABEDBMHCLD_IFJHDINJPMO_OFFSET UNITYSDK_OFFSET(0x1437DDF0)
#define BABEDBMHCLD_IHHGDEANPMP_OFFSET UNITYSDK_OFFSET(0x1437DD90)
#define BABEDBMHCLD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1437DD00)
#define BABEDBMHCLD_KKIOJGFNBFE_OFFSET UNITYSDK_OFFSET(0x1437DCF0)
#define BABEDBMHCLD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1437DE00)
#define BABEDBMHCLD_NNFGJFFOGCE_OFFSET UNITYSDK_OFFSET(0x1437DCE0)
#define BABEDBMHCLD_OJKECAKGFJN_OFFSET UNITYSDK_OFFSET(0x1437DDA0)
#define BABEDBMHCLD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1437DB90)
#define BABEDBMHCLD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1437DC30)
#define BABEDBMHCLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1437DCB0)

inline static constexpr unsigned int BABEDBMHCLD_TypeDefinitionIndex = 39025;

class BABEDBMHCLD : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA6; // 0x0
	::MoleMole::Config::TerrainMatType _BGMPCCNEGBJ_k__BackingField; // 0x48
	::MoleMole::Config::TerrainMatType _JPKEMJGNBOB_k__BackingField; // 0x4C
	::MoleMole::Config::TerrainMatType CAPEGLDLFFL; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BABEDBMHCLD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD_GETCLASSID_OFFSET))(this);
	}

	::System::Void FGPIICEOOPA(::MoleMole::Config::TerrainMatType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TerrainMatType))((::PBYTE)hIl2Cpp + BABEDBMHCLD_FGPIICEOOPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NNFGJFFOGCE(::MoleMole::Config::TerrainMatType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TerrainMatType))((::PBYTE)hIl2Cpp + BABEDBMHCLD_NNFGJFFOGCE_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::TerrainMatType KKIOJGFNBFE()
	{
		return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD_KKIOJGFNBFE_OFFSET))(this);
	}

	static ::BABEDBMHCLD* JFDOOELFAOA()
	{
		return ((::BABEDBMHCLD*(*)())((::PBYTE)hIl2Cpp + BABEDBMHCLD_JFDOOELFAOA_OFFSET))();
	}

	::MoleMole::Config::TerrainMatType IHHGDEANPMP()
	{
		return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD_IHHGDEANPMP_OFFSET))(this);
	}

	::System::Void OJKECAKGFJN(::MoleMole::Config::TerrainMatType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TerrainMatType))((::PBYTE)hIl2Cpp + BABEDBMHCLD_OJKECAKGFJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Config::TerrainMatType IFJHDINJPMO()
	{
		return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD_IFJHDINJPMO_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BABEDBMHCLD_MEFBHFEOKGH_OFFSET))(this);
	}
};

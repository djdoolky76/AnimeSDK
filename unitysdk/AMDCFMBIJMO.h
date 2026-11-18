#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/NAPInput/IMUData.h"

class HBPLKADNEOH;

#define AMDCFMBIJMO_EMAINDGMNNN_OFFSET UNITYSDK_OFFSET(0x14516FC0)
#define AMDCFMBIJMO_GFMJIDLLKKF_OFFSET UNITYSDK_OFFSET(0x14516FE0)
#define AMDCFMBIJMO_JBEMBFMHIDL_OFFSET UNITYSDK_OFFSET(0x14516F50)
#define AMDCFMBIJMO_KFDOOKFGBAG_OFFSET UNITYSDK_OFFSET(0x14516EE0)
#define AMDCFMBIJMO_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14517000)
#define AMDCFMBIJMO__CTOR_OFFSET UNITYSDK_OFFSET(0x14516E00)

inline static constexpr unsigned int AMDCFMBIJMO_TypeDefinitionIndex = 63108;

class AMDCFMBIJMO : public ::System::Object
{
public:
	::HBPLKADNEOH* AGMLIHHDBKO; // 0x10
	::UnityEngine::Vector3 BAMNOMPALCH; // 0x18
	::System::Single IMBBBIHMFDG; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDCFMBIJMO__CTOR_OFFSET))(this);
	}

	::System::Single EMAINDGMNNN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDCFMBIJMO_EMAINDGMNNN_OFFSET))(this);
	}

	::System::Single GFMJIDLLKKF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDCFMBIJMO_GFMJIDLLKKF_OFFSET))(this);
	}

	::System::Void KFDOOKFGBAG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMDCFMBIJMO_KFDOOKFGBAG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JBEMBFMHIDL(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMDCFMBIJMO_JBEMBFMHIDL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PLPONJAKNEB(::MoleMole::NAPInput::IMUData BPIKCCNLPBD)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NAPInput::IMUData))((::PBYTE)hIl2Cpp + AMDCFMBIJMO_PLPONJAKNEB_OFFSET))(this, BPIKCCNLPBD);
	}
};

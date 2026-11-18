#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DEGAODOPPNN_CBLHMIGBLAE_OFFSET UNITYSDK_OFFSET(0x147C50A0)
#define DEGAODOPPNN_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x147C5040)
#define DEGAODOPPNN_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x147C50B0)
#define DEGAODOPPNN_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x147C4FB0)
#define DEGAODOPPNN_IDCGAIKMNID_OFFSET UNITYSDK_OFFSET(0x147C5140)
#define DEGAODOPPNN_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x147C5150)
#define DEGAODOPPNN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x147C4EA0)
#define DEGAODOPPNN__CCTOR_OFFSET UNITYSDK_OFFSET(0x147C4F30)
#define DEGAODOPPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x147C4FA0)

inline static constexpr unsigned int DEGAODOPPNN_TypeDefinitionIndex = 41964;

class DEGAODOPPNN : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x156; // 0x0
	::System::UInt32 _ONHNCIPHPKP_k__BackingField; // 0x20
	::System::Int32 GNHEHOMMHPB; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEGAODOPPNN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAODOPPNN__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAODOPPNN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAODOPPNN_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Int32 GNHEHOMMHPB, ::System::UInt32 ECKMALONJCL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + DEGAODOPPNN_CNHBDOMKKDE_OFFSET))(this, GNHEHOMMHPB, ECKMALONJCL);
	}

	::System::Void CBLHMIGBLAE(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEGAODOPPNN_CBLHMIGBLAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAODOPPNN_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::UInt32 IDCGAIKMNID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAODOPPNN_IDCGAIKMNID_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEGAODOPPNN_OHFHFOHMBJH_OFFSET))(this);
	}
};

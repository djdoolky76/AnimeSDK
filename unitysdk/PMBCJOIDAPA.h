#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJCAJJEAJPC.h"

namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System { class EventArgs; }

#define PMBCJOIDAPA_BIOEHNHCKJM_OFFSET UNITYSDK_OFFSET(0x1C693080)
#define PMBCJOIDAPA_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x1C6934E0)
#define PMBCJOIDAPA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1C6934D0)
#define PMBCJOIDAPA_NIGDIMFIAEJ_OFFSET UNITYSDK_OFFSET(0x1C692FF0)
#define PMBCJOIDAPA_OKKOLFKKDFJ_OFFSET UNITYSDK_OFFSET(0x1C693580)
#define PMBCJOIDAPA_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C6929F0)
#define PMBCJOIDAPA_PLPONJAKNEB_1_OFFSET UNITYSDK_OFFSET(0x1C692BE0)
#define PMBCJOIDAPA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1C692B70)
#define PMBCJOIDAPA_START_OFFSET UNITYSDK_OFFSET(0x1C692780)
#define PMBCJOIDAPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C692F80)

inline static constexpr unsigned int PMBCJOIDAPA_TypeDefinitionIndex = 59663;

class PMBCJOIDAPA : public ::FJCAJJEAJPC
{
public:
	::MoleMole::UIHollowChessboard3DModelController* KIDLCBIMMPI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_START_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_ONDESTROY_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NIGDIMFIAEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_NIGDIMFIAEJ_OFFSET))(this);
	}

	::System::Void BIOEHNHCKJM(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_BIOEHNHCKJM_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void PLPONJAKNEB_1(::System::Single PMNLNNGEIFM, ::System::Single BEKLCLFIDKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_PLPONJAKNEB_1_OFFSET))(this, PMNLNNGEIFM, BEKLCLFIDKF);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void OKKOLFKKDFJ(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_OKKOLFKKDFJ_OFFSET))(this, KOIBHLHLMFC);
	}
};

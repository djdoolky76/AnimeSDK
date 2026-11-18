#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHBMOKNBCE.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class GalPlayableNodeBase; }

#define NGLPPILMPGH_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x105B7280)
#define NGLPPILMPGH_BJPBOKFKIFI_OFFSET UNITYSDK_OFFSET(0x105B73D0)
#define NGLPPILMPGH_CDIPBMMDICL_OFFSET UNITYSDK_OFFSET(0x105B7460)
#define NGLPPILMPGH_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x105B7310)
#define NGLPPILMPGH_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x105B7420)
#define NGLPPILMPGH_IDJDKBFAPBJ_OFFSET UNITYSDK_OFFSET(0x105B7390)
#define NGLPPILMPGH_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x105B7350)
#define NGLPPILMPGH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x105B72D0)
#define NGLPPILMPGH_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x105B7220)
#define NGLPPILMPGH__CTOR_OFFSET UNITYSDK_OFFSET(0x105B74A0)

inline static constexpr unsigned int NGLPPILMPGH_TypeDefinitionIndex = 76816;

class NGLPPILMPGH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NGLPPILMPGH_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::GalGame::GalPlayableNodeBase* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayableNodeBase*))((::PBYTE)hIl2Cpp + NGLPPILMPGH_BBOMJDBNHIC_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void MLOKEBDBDCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH_MLOKEBDBDCN_OFFSET))(this);
	}

	::System::Void IDJDKBFAPBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH_IDJDKBFAPBJ_OFFSET))(this);
	}

	::System::Void BJPBOKFKIFI(::NHHBMOKNBCE FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::NHHBMOKNBCE))((::PBYTE)hIl2Cpp + NGLPPILMPGH_BJPBOKFKIFI_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void HONMDMHAKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Boolean CDIPBMMDICL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLPPILMPGH_CDIPBMMDICL_OFFSET))(this);
	}
};

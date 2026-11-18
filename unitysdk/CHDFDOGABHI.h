#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGIJLODBJKC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FKNIEPCILLG;
namespace System { class String; }

#define CHDFDOGABHI_BGALDEMJGKB_OFFSET UNITYSDK_OFFSET(0x19A021E0)
#define CHDFDOGABHI_ECNACLMHCPO_OFFSET UNITYSDK_OFFSET(0x19A02CE0)
#define CHDFDOGABHI_FKFMAKNIIEB_OFFSET UNITYSDK_OFFSET(0x19A024F0)
#define CHDFDOGABHI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19A01F70)
#define CHDFDOGABHI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19A01B60)
#define CHDFDOGABHI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x19A01FD0)
#define CHDFDOGABHI_ILMHGGEFDOG_OFFSET UNITYSDK_OFFSET(0x19A02560)
#define CHDFDOGABHI_IOFGLHBALKK_OFFSET UNITYSDK_OFFSET(0x19A02280)
#define CHDFDOGABHI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x19A01BE0)
#define CHDFDOGABHI__CTOR_OFFSET UNITYSDK_OFFSET(0x19A021D0)

inline static constexpr unsigned int CHDFDOGABHI_TypeDefinitionIndex = 91173;

class CHDFDOGABHI : public ::System::Object
{
public:
	::System::String* HAMIDAGPIFG; // 0x10
	::DGIJLODBJKC JMINOGAOFIL; // 0x18
	::System::Boolean GNCANDJFFOC; // 0x48
	::System::Byte _padding0[0x3];
	::UnityEngine::Bounds GIAIFJENOBN; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDFDOGABHI__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CHDFDOGABHI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHDFDOGABHI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + CHDFDOGABHI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean BGALDEMJGKB(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Single ICJCLINBNID, ::System::Boolean PIODNOLGGDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CHDFDOGABHI_BGALDEMJGKB_OFFSET))(this, CKPGOKHECCH, ICJCLINBNID, PIODNOLGGDG);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CHDFDOGABHI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::UnityEngine::Bounds FKFMAKNIIEB()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDFDOGABHI_FKFMAKNIIEB_OFFSET))(this);
	}

	::System::Boolean ECNACLMHCPO(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CHDFDOGABHI_ECNACLMHCPO_OFFSET))(this, MPLDDNMCECG, NCCDJLDKFGA);
	}

	::System::Boolean IOFGLHBALKK(::UnityEngine::Vector3 CKPGOKHECCH, ::System::Boolean PIODNOLGGDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CHDFDOGABHI_IOFGLHBALKK_OFFSET))(this, CKPGOKHECCH, PIODNOLGGDG);
	}

	::System::Void ILMHGGEFDOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHDFDOGABHI_ILMHGGEFDOG_OFFSET))(this);
	}
};

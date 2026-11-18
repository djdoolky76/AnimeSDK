#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class BHEKACANAMA;
class FKNIEPCILLG;
class LNODBDPJGFL;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDEJIHKJAMF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x125C4990)
#define GDEJIHKJAMF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x125C54D0)
#define GDEJIHKJAMF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x125C49F0)
#define GDEJIHKJAMF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x125C5550)
#define GDEJIHKJAMF__CTOR_OFFSET UNITYSDK_OFFSET(0x125C73B0)

inline static constexpr unsigned int GDEJIHKJAMF_TypeDefinitionIndex = 86638;

class GDEJIHKJAMF : public ::System::Object
{
public:
	::MoleMole::Config::DynamicString* EBLKBABPBEB; // 0x10
	::MoleMole::Config::DynamicFloat* EDAHMBNOBIE; // 0x18
	::MoleMole::Config::DynamicInt* HLBKHEFJAPH; // 0x20
	::MoleMole::Config::DynamicInt* NFJGDDPEGHG; // 0x28
	::BHEKACANAMA* INKAKKLBHPN; // 0x30
	::MoleMole::Config::DynamicFloat* GCEHJHKIHAK; // 0x38
	::MoleMole::Config::ConfigPosRot* BANODIDMKOA; // 0x40
	::BHEKACANAMA* CHDJGLDHMAO; // 0x48
	::BHEKACANAMA* FLBHICLLAEB; // 0x50
	::MoleMole::Config::ConfigPosRot* AEGJIEMBDLC; // 0x58
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* GLJPPHOIFOA; // 0x60
	::MoleMole::Config::DynamicInt* BNKHCNKJKFO; // 0x68
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* BDDELGKOOHI; // 0x70
	::BHEKACANAMA* NJFFKPPHJAA; // 0x78
	::MoleMole::Config::ConfigPosRot* KPAPPDGCNPE; // 0x80
	::System::Collections::Generic::List_1<::LNODBDPJGFL*>* FBENNOADONO; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDEJIHKJAMF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDEJIHKJAMF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GDEJIHKJAMF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GDEJIHKJAMF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GDEJIHKJAMF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

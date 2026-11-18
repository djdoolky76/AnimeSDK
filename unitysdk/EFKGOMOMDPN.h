#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALMLLFFEJOC.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EFKGOMOMDPN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13544D40)
#define EFKGOMOMDPN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x135455F0)
#define EFKGOMOMDPN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13544E50)
#define EFKGOMOMDPN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13545AB0)
#define EFKGOMOMDPN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13544E40)
#define EFKGOMOMDPN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13545C60)
#define EFKGOMOMDPN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13545650)
#define EFKGOMOMDPN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13545A20)
#define EFKGOMOMDPN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13544320)
#define EFKGOMOMDPN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13544CB0)
#define EFKGOMOMDPN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13544ED0)
#define EFKGOMOMDPN__CTOR_OFFSET UNITYSDK_OFFSET(0x13545980)

inline static constexpr unsigned int EFKGOMOMDPN_TypeDefinitionIndex = 51493;

class EFKGOMOMDPN : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::FOBNALGHPPD_1<::System::String*> PCJHLJLMKNN; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> MFDOBMEPCLL; // 0x58
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::String*> BODECKIDFGF; // 0x78
	::System::Byte _padding2[0x18];
	::ALMLLFFEJOC KDMGHOAFBGL; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGOMOMDPN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::EFKGOMOMDPN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EFKGOMOMDPN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EFKGOMOMDPN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EFKGOMOMDPN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EFKGOMOMDPN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

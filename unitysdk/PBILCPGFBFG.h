#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PBILCPGFBFG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13A83890)
#define PBILCPGFBFG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A83C80)
#define PBILCPGFBFG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A839A0)
#define PBILCPGFBFG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13A840E0)
#define PBILCPGFBFG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13A83990)
#define PBILCPGFBFG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13A83F80)
#define PBILCPGFBFG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13A83CE0)
#define PBILCPGFBFG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13A84290)
#define PBILCPGFBFG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13A83530)
#define PBILCPGFBFG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13A83800)
#define PBILCPGFBFG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13A83A20)
#define PBILCPGFBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x13A83EF0)

inline static constexpr unsigned int PBILCPGFBFG_TypeDefinitionIndex = 79138;

class PBILCPGFBFG : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* GDJPFPCBCPL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILCPGFBFG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILCPGFBFG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PBILCPGFBFG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILCPGFBFG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILCPGFBFG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBILCPGFBFG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBILCPGFBFG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PBILCPGFBFG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PBILCPGFBFG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PBILCPGFBFG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PBILCPGFBFG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PBILCPGFBFG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBILCPGFBFG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PBILCPGFBFG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PBILCPGFBFG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILCPGFBFG_JFLMLBMNFFK_OFFSET))(this);
	}
};

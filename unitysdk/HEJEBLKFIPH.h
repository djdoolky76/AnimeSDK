#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define HEJEBLKFIPH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15DA25F0)
#define HEJEBLKFIPH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15DA29E0)
#define HEJEBLKFIPH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15DA2700)
#define HEJEBLKFIPH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15DA2E40)
#define HEJEBLKFIPH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15DA26F0)
#define HEJEBLKFIPH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15DA2CE0)
#define HEJEBLKFIPH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15DA2A40)
#define HEJEBLKFIPH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15DA2FF0)
#define HEJEBLKFIPH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15DA2320)
#define HEJEBLKFIPH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15DA2560)
#define HEJEBLKFIPH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15DA2780)
#define HEJEBLKFIPH__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA2C50)

inline static constexpr unsigned int HEJEBLKFIPH_TypeDefinitionIndex = 38400;

class HEJEBLKFIPH : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* BPHNOMCLEJD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEBLKFIPH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HEJEBLKFIPH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HEJEBLKFIPH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::HEJEBLKFIPH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HEJEBLKFIPH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJEBLKFIPH_JFLMLBMNFFK_OFFSET))(this);
	}
};

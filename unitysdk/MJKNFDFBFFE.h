#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MJKNFDFBFFE_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x131924D0)
#define MJKNFDFBFFE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13192A90)
#define MJKNFDFBFFE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131925E0)
#define MJKNFDFBFFE_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13192EC0)
#define MJKNFDFBFFE_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x131925D0)
#define MJKNFDFBFFE_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13193070)
#define MJKNFDFBFFE_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13192AF0)
#define MJKNFDFBFFE_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x13192E30)
#define MJKNFDFBFFE_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x13192110)
#define MJKNFDFBFFE_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13192430)
#define MJKNFDFBFFE_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13192660)
#define MJKNFDFBFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13192DA0)

inline static constexpr unsigned int MJKNFDFBFFE_TypeDefinitionIndex = 39168;

class MJKNFDFBFFE : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKNFDFBFFE__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::MJKNFDFBFFE* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MJKNFDFBFFE*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MJKNFDFBFFE* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MJKNFDFBFFE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MJKNFDFBFFE_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

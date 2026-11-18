#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define ENCIDFAPOFJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1724C140)
#define ENCIDFAPOFJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1724C810)
#define ENCIDFAPOFJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1724C250)
#define ENCIDFAPOFJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1724CCB0)
#define ENCIDFAPOFJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1724C240)
#define ENCIDFAPOFJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1724CB50)
#define ENCIDFAPOFJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1724C870)
#define ENCIDFAPOFJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1724CE60)
#define ENCIDFAPOFJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1724BE80)
#define ENCIDFAPOFJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1724C0B0)
#define ENCIDFAPOFJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1724C2D0)
#define ENCIDFAPOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1724CAC0)

inline static constexpr unsigned int ENCIDFAPOFJ_TypeDefinitionIndex = 72288;

class ENCIDFAPOFJ : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::System::Int32> BKLHHDEELFL; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x50
	::FOBNALGHPPD_1<::System::Int32> OMAIMFOELNN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ENCIDFAPOFJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ENCIDFAPOFJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::ENCIDFAPOFJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ENCIDFAPOFJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCIDFAPOFJ_JFLMLBMNFFK_OFFSET))(this);
	}
};

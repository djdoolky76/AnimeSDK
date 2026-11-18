#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GMDPECBBELK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x179FD3A0)
#define GMDPECBBELK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x179FD700)
#define GMDPECBBELK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x179FD4B0)
#define GMDPECBBELK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x179FDAB0)
#define GMDPECBBELK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x179FD4A0)
#define GMDPECBBELK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x179FDC60)
#define GMDPECBBELK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x179FD760)
#define GMDPECBBELK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x179FDA20)
#define GMDPECBBELK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x179FD2F0)
#define GMDPECBBELK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x179FD350)
#define GMDPECBBELK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x179FD530)
#define GMDPECBBELK__CTOR_OFFSET UNITYSDK_OFFSET(0x179FD990)

inline static constexpr unsigned int GMDPECBBELK_TypeDefinitionIndex = 92556;

class GMDPECBBELK : public ::HDJJJGCHLEE
{
public:
	::System::Boolean HIPMJKGLMOK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDPECBBELK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDPECBBELK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GMDPECBBELK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDPECBBELK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDPECBBELK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMDPECBBELK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMDPECBBELK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + GMDPECBBELK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDPECBBELK_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::GMDPECBBELK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::GMDPECBBELK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMDPECBBELK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + GMDPECBBELK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::GMDPECBBELK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::GMDPECBBELK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + GMDPECBBELK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

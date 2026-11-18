#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define FLGBBMANGDF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x156C4190)
#define FLGBBMANGDF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x156C4580)
#define FLGBBMANGDF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x156C42A0)
#define FLGBBMANGDF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x156C4A70)
#define FLGBBMANGDF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x156C4290)
#define FLGBBMANGDF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x156C4910)
#define FLGBBMANGDF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x156C45E0)
#define FLGBBMANGDF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x156C4880)
#define FLGBBMANGDF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x156C3E10)
#define FLGBBMANGDF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x156C4100)
#define FLGBBMANGDF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x156C4320)
#define FLGBBMANGDF__CTOR_OFFSET UNITYSDK_OFFSET(0x156C47F0)

inline static constexpr unsigned int FLGBBMANGDF_TypeDefinitionIndex = 89738;

class FLGBBMANGDF : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGBBMANGDF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGBBMANGDF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FLGBBMANGDF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGBBMANGDF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGBBMANGDF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLGBBMANGDF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLGBBMANGDF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGBBMANGDF_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FLGBBMANGDF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FLGBBMANGDF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FLGBBMANGDF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FLGBBMANGDF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLGBBMANGDF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FLGBBMANGDF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FLGBBMANGDF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FLGBBMANGDF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

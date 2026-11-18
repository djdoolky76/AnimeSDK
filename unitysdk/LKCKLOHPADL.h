#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LKCKLOHPADL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A60EC50)
#define LKCKLOHPADL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A60F310)
#define LKCKLOHPADL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A60ED60)
#define LKCKLOHPADL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A60F720)
#define LKCKLOHPADL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A60ED50)
#define LKCKLOHPADL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A60F8D0)
#define LKCKLOHPADL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A60F370)
#define LKCKLOHPADL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A60F690)
#define LKCKLOHPADL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A60EA40)
#define LKCKLOHPADL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A60EBC0)
#define LKCKLOHPADL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A60EDE0)
#define LKCKLOHPADL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60F600)

inline static constexpr unsigned int LKCKLOHPADL_TypeDefinitionIndex = 91304;

class LKCKLOHPADL : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKLOHPADL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKLOHPADL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LKCKLOHPADL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKLOHPADL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKLOHPADL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LKCKLOHPADL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKCKLOHPADL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKCKLOHPADL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCKLOHPADL_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::LKCKLOHPADL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LKCKLOHPADL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKCKLOHPADL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::LKCKLOHPADL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LKCKLOHPADL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LKCKLOHPADL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LKCKLOHPADL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

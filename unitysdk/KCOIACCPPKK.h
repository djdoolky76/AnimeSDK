#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KCOIACCPPKK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x18A3A760)
#define KCOIACCPPKK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A3AE70)
#define KCOIACCPPKK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18A3A870)
#define KCOIACCPPKK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x18A3B3C0)
#define KCOIACCPPKK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x18A3A860)
#define KCOIACCPPKK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x18A3B260)
#define KCOIACCPPKK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x18A3AED0)
#define KCOIACCPPKK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x18A3B570)
#define KCOIACCPPKK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x18A3A3F0)
#define KCOIACCPPKK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x18A3A6A0)
#define KCOIACCPPKK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x18A3A8F0)
#define KCOIACCPPKK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A3B1D0)

inline static constexpr unsigned int KCOIACCPPKK_TypeDefinitionIndex = 54133;

class KCOIACCPPKK : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* AOAHMGPOJDF; // 0x30
	::HBIBNDIOKPG* CMJNCDJBFMC; // 0x38
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOIACCPPKK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOIACCPPKK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KCOIACCPPKK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOIACCPPKK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOIACCPPKK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KCOIACCPPKK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KCOIACCPPKK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KCOIACCPPKK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KCOIACCPPKK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KCOIACCPPKK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KCOIACCPPKK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::KCOIACCPPKK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KCOIACCPPKK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KCOIACCPPKK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOIACCPPKK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KCOIACCPPKK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

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

#define PNLLJJCHMAP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1EBBD260)
#define PNLLJJCHMAP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBBD770)
#define PNLLJJCHMAP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1EBBD370)
#define PNLLJJCHMAP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1EBBDAA0)
#define PNLLJJCHMAP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1EBBD360)
#define PNLLJJCHMAP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1EBBDC50)
#define PNLLJJCHMAP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1EBBD7D0)
#define PNLLJJCHMAP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1EBBDDB0)
#define PNLLJJCHMAP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1EBBD0B0)
#define PNLLJJCHMAP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1EBBD1D0)
#define PNLLJJCHMAP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1EBBD3F0)
#define PNLLJJCHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBDA10)

inline static constexpr unsigned int PNLLJJCHMAP_TypeDefinitionIndex = 83489;

class PNLLJJCHMAP : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Boolean> HFGOOECLHDD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLJJCHMAP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PNLLJJCHMAP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PNLLJJCHMAP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PNLLJJCHMAP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PNLLJJCHMAP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLLJJCHMAP_JFLMLBMNFFK_OFFSET))(this);
	}
};

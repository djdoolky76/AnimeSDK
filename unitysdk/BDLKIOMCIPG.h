#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/LOEFNLADIDM.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BDLKIOMCIPG_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1506AD60)
#define BDLKIOMCIPG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1506B540)
#define BDLKIOMCIPG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1506AE70)
#define BDLKIOMCIPG_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1506B8F0)
#define BDLKIOMCIPG_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1506AE60)
#define BDLKIOMCIPG_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1506BAA0)
#define BDLKIOMCIPG_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1506B5A0)
#define BDLKIOMCIPG_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1506BC00)
#define BDLKIOMCIPG_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1506AAA0)
#define BDLKIOMCIPG_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1506ACD0)
#define BDLKIOMCIPG_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1506AEF0)
#define BDLKIOMCIPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1506B860)

inline static constexpr unsigned int BDLKIOMCIPG_TypeDefinitionIndex = 71619;

class BDLKIOMCIPG : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x58
	::System::Byte _padding1[0x18];
	::LOEFNLADIDM LLDMOGGEDOD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLKIOMCIPG__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BDLKIOMCIPG* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BDLKIOMCIPG*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::BDLKIOMCIPG* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BDLKIOMCIPG*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLKIOMCIPG_JFLMLBMNFFK_OFFSET))(this);
	}
};

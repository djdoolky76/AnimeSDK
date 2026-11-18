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

#define MNIPICCFDBB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11A25FF0)
#define MNIPICCFDBB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A266B0)
#define MNIPICCFDBB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11A26100)
#define MNIPICCFDBB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11A26A30)
#define MNIPICCFDBB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11A260F0)
#define MNIPICCFDBB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11A26C70)
#define MNIPICCFDBB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11A26710)
#define MNIPICCFDBB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11A26BE0)
#define MNIPICCFDBB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11A25D20)
#define MNIPICCFDBB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11A25F60)
#define MNIPICCFDBB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11A26180)
#define MNIPICCFDBB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A269A0)

inline static constexpr unsigned int MNIPICCFDBB_TypeDefinitionIndex = 60893;

class MNIPICCFDBB : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> HFGOOECLHDD; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPICCFDBB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPICCFDBB_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MNIPICCFDBB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPICCFDBB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPICCFDBB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MNIPICCFDBB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNIPICCFDBB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MNIPICCFDBB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MNIPICCFDBB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNIPICCFDBB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIPICCFDBB_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MNIPICCFDBB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MNIPICCFDBB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::MNIPICCFDBB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MNIPICCFDBB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MNIPICCFDBB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

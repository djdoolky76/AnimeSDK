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

#define PJNAOADNJMO_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x178DF270)
#define PJNAOADNJMO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178DF930)
#define PJNAOADNJMO_FROMFLX_OFFSET UNITYSDK_OFFSET(0x178DF380)
#define PJNAOADNJMO_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x178DFCB0)
#define PJNAOADNJMO_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x178DF370)
#define PJNAOADNJMO_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x178DFE60)
#define PJNAOADNJMO_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x178DF990)
#define PJNAOADNJMO_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x178DFFC0)
#define PJNAOADNJMO_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x178DEFB0)
#define PJNAOADNJMO_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x178DF1E0)
#define PJNAOADNJMO_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x178DF400)
#define PJNAOADNJMO__CTOR_OFFSET UNITYSDK_OFFSET(0x178DFC20)

inline static constexpr unsigned int PJNAOADNJMO_TypeDefinitionIndex = 71036;

class PJNAOADNJMO : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNAOADNJMO__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNAOADNJMO_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PJNAOADNJMO_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNAOADNJMO_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNAOADNJMO_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJNAOADNJMO_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJNAOADNJMO_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PJNAOADNJMO_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PJNAOADNJMO* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PJNAOADNJMO*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJNAOADNJMO_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PJNAOADNJMO* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PJNAOADNJMO*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PJNAOADNJMO_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PJNAOADNJMO_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNAOADNJMO_JFLMLBMNFFK_OFFSET))(this);
	}
};

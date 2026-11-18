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

#define PGLDOGBNEMK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1949E410)
#define PGLDOGBNEMK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1949EAD0)
#define PGLDOGBNEMK_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1949E520)
#define PGLDOGBNEMK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1949EFB0)
#define PGLDOGBNEMK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1949E510)
#define PGLDOGBNEMK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1949EE50)
#define PGLDOGBNEMK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1949EB30)
#define PGLDOGBNEMK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1949F160)
#define PGLDOGBNEMK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1949E230)
#define PGLDOGBNEMK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1949E380)
#define PGLDOGBNEMK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1949E5A0)
#define PGLDOGBNEMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1949EDC0)

inline static constexpr unsigned int PGLDOGBNEMK_TypeDefinitionIndex = 88068;

class PGLDOGBNEMK : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLDOGBNEMK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::PGLDOGBNEMK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PGLDOGBNEMK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::PGLDOGBNEMK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PGLDOGBNEMK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGLDOGBNEMK_JFLMLBMNFFK_OFFSET))(this);
	}
};

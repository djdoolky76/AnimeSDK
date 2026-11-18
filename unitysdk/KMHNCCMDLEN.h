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

#define KMHNCCMDLEN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xD4079B0)
#define KMHNCCMDLEN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD408220)
#define KMHNCCMDLEN_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD407AC0)
#define KMHNCCMDLEN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xD4087D0)
#define KMHNCCMDLEN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xD407AB0)
#define KMHNCCMDLEN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xD4085E0)
#define KMHNCCMDLEN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xD408280)
#define KMHNCCMDLEN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xD408740)
#define KMHNCCMDLEN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xD407740)
#define KMHNCCMDLEN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xD407920)
#define KMHNCCMDLEN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xD407B40)
#define KMHNCCMDLEN__CTOR_OFFSET UNITYSDK_OFFSET(0xD408550)

inline static constexpr unsigned int KMHNCCMDLEN_TypeDefinitionIndex = 76897;

class KMHNCCMDLEN : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> CNCCEBPMCLG; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Int32> LMIBEHAAIIB; // 0x50
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::Int32> HFGOOECLHDD; // 0x70
	::System::Byte _padding2[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCCMDLEN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KMHNCCMDLEN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KMHNCCMDLEN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::KMHNCCMDLEN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KMHNCCMDLEN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KMHNCCMDLEN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

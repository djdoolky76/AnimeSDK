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

#define HENAIFIJOLF_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x146F6A50)
#define HENAIFIJOLF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x146F6F60)
#define HENAIFIJOLF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x146F6B60)
#define HENAIFIJOLF_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x146F7290)
#define HENAIFIJOLF_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x146F6B50)
#define HENAIFIJOLF_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x146F74D0)
#define HENAIFIJOLF_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x146F6FC0)
#define HENAIFIJOLF_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x146F7440)
#define HENAIFIJOLF_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x146F6890)
#define HENAIFIJOLF_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x146F69C0)
#define HENAIFIJOLF_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x146F6BE0)
#define HENAIFIJOLF__CTOR_OFFSET UNITYSDK_OFFSET(0x146F7200)

inline static constexpr unsigned int HENAIFIJOLF_TypeDefinitionIndex = 61475;

class HENAIFIJOLF : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> KLBGAHPJAJO; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENAIFIJOLF__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENAIFIJOLF_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HENAIFIJOLF_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENAIFIJOLF_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENAIFIJOLF_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HENAIFIJOLF_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HENAIFIJOLF_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HENAIFIJOLF_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HENAIFIJOLF_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::HENAIFIJOLF* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::HENAIFIJOLF*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HENAIFIJOLF_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENAIFIJOLF_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::HENAIFIJOLF* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::HENAIFIJOLF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HENAIFIJOLF_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

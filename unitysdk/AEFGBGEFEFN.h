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

#define AEFGBGEFEFN_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x17DC5060)
#define AEFGBGEFEFN_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17DC5570)
#define AEFGBGEFEFN_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17DC5170)
#define AEFGBGEFEFN_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x17DC5A90)
#define AEFGBGEFEFN_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x17DC5160)
#define AEFGBGEFEFN_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x17DC58A0)
#define AEFGBGEFEFN_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x17DC55D0)
#define AEFGBGEFEFN_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x17DC5A00)
#define AEFGBGEFEFN_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x17DC4EA0)
#define AEFGBGEFEFN_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x17DC4FD0)
#define AEFGBGEFEFN_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x17DC51F0)
#define AEFGBGEFEFN__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC5810)

inline static constexpr unsigned int AEFGBGEFEFN_TypeDefinitionIndex = 62714;

class AEFGBGEFEFN : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> KLBGAHPJAJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFGBGEFEFN__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AEFGBGEFEFN* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::AEFGBGEFEFN*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::AEFGBGEFEFN* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::AEFGBGEFEFN*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + AEFGBGEFEFN_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

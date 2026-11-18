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

#define LKALBFBMJNB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16854290)
#define LKALBFBMJNB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16854950)
#define LKALBFBMJNB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x168543A0)
#define LKALBFBMJNB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16854E30)
#define LKALBFBMJNB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16854390)
#define LKALBFBMJNB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16854CD0)
#define LKALBFBMJNB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x168549B0)
#define LKALBFBMJNB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16854FE0)
#define LKALBFBMJNB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x168540A0)
#define LKALBFBMJNB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16854200)
#define LKALBFBMJNB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16854420)
#define LKALBFBMJNB__CTOR_OFFSET UNITYSDK_OFFSET(0x16854C40)

inline static constexpr unsigned int LKALBFBMJNB_TypeDefinitionIndex = 75108;

class LKALBFBMJNB : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::System::Single> DAJINDPALIE; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> BCOHCCCCOGB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKALBFBMJNB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKALBFBMJNB_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LKALBFBMJNB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKALBFBMJNB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKALBFBMJNB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LKALBFBMJNB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKALBFBMJNB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LKALBFBMJNB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LKALBFBMJNB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LKALBFBMJNB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LKALBFBMJNB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::LKALBFBMJNB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LKALBFBMJNB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKALBFBMJNB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LKALBFBMJNB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKALBFBMJNB_JFLMLBMNFFK_OFFSET))(this);
	}
};

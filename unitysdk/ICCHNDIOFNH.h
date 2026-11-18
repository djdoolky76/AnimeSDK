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

#define ICCHNDIOFNH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x15BF6F30)
#define ICCHNDIOFNH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15BF77A0)
#define ICCHNDIOFNH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15BF7040)
#define ICCHNDIOFNH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15BF7D50)
#define ICCHNDIOFNH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x15BF7030)
#define ICCHNDIOFNH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x15BF7B60)
#define ICCHNDIOFNH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15BF7800)
#define ICCHNDIOFNH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15BF7CC0)
#define ICCHNDIOFNH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15BF6CC0)
#define ICCHNDIOFNH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15BF6EA0)
#define ICCHNDIOFNH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15BF70C0)
#define ICCHNDIOFNH__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF7AD0)

inline static constexpr unsigned int ICCHNDIOFNH_TypeDefinitionIndex = 50919;

class ICCHNDIOFNH : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::System::Single> FDFEDLFEIIN; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> JOGJHDBEDPN; // 0x50
	::System::Byte _padding1[0x18];
	::FOBNALGHPPD_1<::System::Single> ONGKNJDGBLJ; // 0x70
	::System::Byte _padding2[0x18];
	::GPIOLGMOBLJ* HACHJLCBGJP; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCHNDIOFNH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ICCHNDIOFNH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ICCHNDIOFNH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ICCHNDIOFNH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ICCHNDIOFNH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ICCHNDIOFNH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

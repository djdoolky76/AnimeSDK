#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define OBCBHOIFBHJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x10055D50)
#define OBCBHOIFBHJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x100560B0)
#define OBCBHOIFBHJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10055E60)
#define OBCBHOIFBHJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x10056360)
#define OBCBHOIFBHJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x10055E50)
#define OBCBHOIFBHJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x100565A0)
#define OBCBHOIFBHJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x10056110)
#define OBCBHOIFBHJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x10056510)
#define OBCBHOIFBHJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x100559F0)
#define OBCBHOIFBHJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x10055CC0)
#define OBCBHOIFBHJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x10055EE0)
#define OBCBHOIFBHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x100562D0)

inline static constexpr unsigned int OBCBHOIFBHJ_TypeDefinitionIndex = 44864;

class OBCBHOIFBHJ : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* LAHGJCIOILI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OBCBHOIFBHJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OBCBHOIFBHJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::OBCBHOIFBHJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OBCBHOIFBHJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OBCBHOIFBHJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

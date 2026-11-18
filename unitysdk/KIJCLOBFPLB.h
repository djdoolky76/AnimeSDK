#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KIJCLOBFPLB_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x126899D0)
#define KIJCLOBFPLB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12689F90)
#define KIJCLOBFPLB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12689AE0)
#define KIJCLOBFPLB_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1268A520)
#define KIJCLOBFPLB_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x12689AD0)
#define KIJCLOBFPLB_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1268A330)
#define KIJCLOBFPLB_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x12689FF0)
#define KIJCLOBFPLB_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1268A490)
#define KIJCLOBFPLB_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x126897E0)
#define KIJCLOBFPLB_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x12689930)
#define KIJCLOBFPLB_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x12689B60)
#define KIJCLOBFPLB__CTOR_OFFSET UNITYSDK_OFFSET(0x1268A2A0)

inline static constexpr unsigned int KIJCLOBFPLB_TypeDefinitionIndex = 69433;

class KIJCLOBFPLB : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* ODBPLMMLIEO; // 0x30
	::HBIBNDIOKPG* MOOHFHCPOIE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCLOBFPLB__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KIJCLOBFPLB* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::KIJCLOBFPLB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::KIJCLOBFPLB* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::KIJCLOBFPLB*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + KIJCLOBFPLB_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

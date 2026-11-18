#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LEKNPFBOGMJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A307130)
#define LEKNPFBOGMJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A307660)
#define LEKNPFBOGMJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A307240)
#define LEKNPFBOGMJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A307B10)
#define LEKNPFBOGMJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A307230)
#define LEKNPFBOGMJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A3079B0)
#define LEKNPFBOGMJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A3076C0)
#define LEKNPFBOGMJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A307CC0)
#define LEKNPFBOGMJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A306BA0)
#define LEKNPFBOGMJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A307090)
#define LEKNPFBOGMJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A3072C0)
#define LEKNPFBOGMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A307920)

inline static constexpr unsigned int LEKNPFBOGMJ_TypeDefinitionIndex = 90779;

class LEKNPFBOGMJ : public ::HDJJJGCHLEE
{
public:
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x30
	::HBIBNDIOKPG* MFKJLJJGHJF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::LEKNPFBOGMJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::LEKNPFBOGMJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::LEKNPFBOGMJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::LEKNPFBOGMJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + LEKNPFBOGMJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

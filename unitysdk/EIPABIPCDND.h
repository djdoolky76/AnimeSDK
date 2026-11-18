#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
class NFCIDHJGOIB;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define EIPABIPCDND_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1415A010)
#define EIPABIPCDND_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1415A720)
#define EIPABIPCDND_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1415A120)
#define EIPABIPCDND_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1415AC70)
#define EIPABIPCDND_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1415A110)
#define EIPABIPCDND_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1415AB10)
#define EIPABIPCDND_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1415A780)
#define EIPABIPCDND_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1415AE20)
#define EIPABIPCDND_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x14159930)
#define EIPABIPCDND_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x14159F50)
#define EIPABIPCDND_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1415A1A0)
#define EIPABIPCDND__CTOR_OFFSET UNITYSDK_OFFSET(0x1415AA80)

inline static constexpr unsigned int EIPABIPCDND_TypeDefinitionIndex = 45989;

class EIPABIPCDND : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x30
	::GPIOLGMOBLJ* IPMANCMHFPH; // 0x38
	::NFCIDHJGOIB* OMMFLIHBBIH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPABIPCDND__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPABIPCDND_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + EIPABIPCDND_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPABIPCDND_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPABIPCDND_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EIPABIPCDND_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EIPABIPCDND_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EIPABIPCDND_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::EIPABIPCDND* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::EIPABIPCDND*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + EIPABIPCDND_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + EIPABIPCDND_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::EIPABIPCDND* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::EIPABIPCDND*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + EIPABIPCDND_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIPABIPCDND_JFLMLBMNFFK_OFFSET))(this);
	}
};

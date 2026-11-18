#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/MEBGCKEHHIN.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DIOLJKIBGGP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x13E50C00)
#define DIOLJKIBGGP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13E513A0)
#define DIOLJKIBGGP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13E50D10)
#define DIOLJKIBGGP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x13E51930)
#define DIOLJKIBGGP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x13E50D00)
#define DIOLJKIBGGP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x13E517D0)
#define DIOLJKIBGGP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x13E51400)
#define DIOLJKIBGGP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x13E50B40)
#define DIOLJKIBGGP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x13E50D90)
#define DIOLJKIBGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x13E51740)

inline static constexpr unsigned int DIOLJKIBGGP_TypeDefinitionIndex = 59043;

class DIOLJKIBGGP : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* JOFGIJDODCD; // 0x30
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x38
	::System::String* OPNMCKJHKLC; // 0x40
	::MEBGCKEHHIN MEFDBLDPCIL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOLJKIBGGP__CTOR_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::DIOLJKIBGGP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::DIOLJKIBGGP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::DIOLJKIBGGP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::DIOLJKIBGGP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + DIOLJKIBGGP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

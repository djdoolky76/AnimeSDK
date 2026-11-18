#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define ACGJEFGOFOJ_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16D60570)
#define ACGJEFGOFOJ_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D60DE0)
#define ACGJEFGOFOJ_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16D60680)
#define ACGJEFGOFOJ_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16D61210)
#define ACGJEFGOFOJ_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16D60670)
#define ACGJEFGOFOJ_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16D61450)
#define ACGJEFGOFOJ_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16D60E40)
#define ACGJEFGOFOJ_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16D613C0)
#define ACGJEFGOFOJ_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16D5FEF0)
#define ACGJEFGOFOJ_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16D604D0)
#define ACGJEFGOFOJ_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16D60700)
#define ACGJEFGOFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16D61180)

inline static constexpr unsigned int ACGJEFGOFOJ_TypeDefinitionIndex = 71777;

class ACGJEFGOFOJ : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x30
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> BPOPIDAAKAH; // 0x58
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::ACGJEFGOFOJ* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::ACGJEFGOFOJ*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::ACGJEFGOFOJ* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::ACGJEFGOFOJ*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ACGJEFGOFOJ_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

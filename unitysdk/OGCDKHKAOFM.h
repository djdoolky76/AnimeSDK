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

#define OGCDKHKAOFM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x16F75740)
#define OGCDKHKAOFM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F75DD0)
#define OGCDKHKAOFM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16F75850)
#define OGCDKHKAOFM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x16F761F0)
#define OGCDKHKAOFM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x16F75840)
#define OGCDKHKAOFM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x16F763A0)
#define OGCDKHKAOFM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16F75E30)
#define OGCDKHKAOFM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x16F76160)
#define OGCDKHKAOFM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x16F745B0)
#define OGCDKHKAOFM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x16F756B0)
#define OGCDKHKAOFM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16F758D0)
#define OGCDKHKAOFM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F760D0)

inline static constexpr unsigned int OGCDKHKAOFM_TypeDefinitionIndex = 91089;

class OGCDKHKAOFM : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x30
	::FOBNALGHPPD_1<::System::String*> DCJCHGOGLMF; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCDKHKAOFM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::OGCDKHKAOFM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::OGCDKHKAOFM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::OGCDKHKAOFM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::OGCDKHKAOFM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + OGCDKHKAOFM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

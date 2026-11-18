#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/KHFGGFPIAOM.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HDJJJGCHLEE;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define BLJKBGPHNFL_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x150818B0)
#define BLJKBGPHNFL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15081F70)
#define BLJKBGPHNFL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x150819C0)
#define BLJKBGPHNFL_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x15082450)
#define BLJKBGPHNFL_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x150819B0)
#define BLJKBGPHNFL_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x150822F0)
#define BLJKBGPHNFL_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x15081FD0)
#define BLJKBGPHNFL_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x15082600)
#define BLJKBGPHNFL_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x15081630)
#define BLJKBGPHNFL_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x15081820)
#define BLJKBGPHNFL_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x15081A40)
#define BLJKBGPHNFL__CTOR_OFFSET UNITYSDK_OFFSET(0x15082260)

inline static constexpr unsigned int BLJKBGPHNFL_TypeDefinitionIndex = 63385;

class BLJKBGPHNFL : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* PFPNPKNBNFI; // 0x30
	::FOBNALGHPPD_1<::UnityEngine::Vector3> JPGOMOGGDCH; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> HNNMABFMCBL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJKBGPHNFL__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::BLJKBGPHNFL* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::BLJKBGPHNFL*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	static ::BLJKBGPHNFL* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::BLJKBGPHNFL*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJKBGPHNFL_JFLMLBMNFFK_OFFSET))(this);
	}
};

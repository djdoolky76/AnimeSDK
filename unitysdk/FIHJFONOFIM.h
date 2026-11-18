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
namespace System { template <typename T> class Action_1; }

#define FIHJFONOFIM_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x14299470)
#define FIHJFONOFIM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x142999F0)
#define FIHJFONOFIM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14299580)
#define FIHJFONOFIM_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x14299D40)
#define FIHJFONOFIM_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x14299570)
#define FIHJFONOFIM_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x14299EF0)
#define FIHJFONOFIM_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x14299A50)
#define FIHJFONOFIM_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1429A050)
#define FIHJFONOFIM_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x142991B0)
#define FIHJFONOFIM_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x142993E0)
#define FIHJFONOFIM_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x14299600)
#define FIHJFONOFIM__CTOR_OFFSET UNITYSDK_OFFSET(0x14299CB0)

inline static constexpr unsigned int FIHJFONOFIM_TypeDefinitionIndex = 53731;

class FIHJFONOFIM : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* PBANCBCAMOI; // 0x30
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHJFONOFIM__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHJFONOFIM_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FIHJFONOFIM_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHJFONOFIM_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHJFONOFIM_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FIHJFONOFIM_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FIHJFONOFIM_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FIHJFONOFIM* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FIHJFONOFIM*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FIHJFONOFIM_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FIHJFONOFIM* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FIHJFONOFIM*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FIHJFONOFIM_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FIHJFONOFIM_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FIHJFONOFIM_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHJFONOFIM_JFLMLBMNFFK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
class HBIBNDIOKPG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FILGFLBBFHH_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x11C51A50)
#define FILGFLBBFHH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11C523F0)
#define FILGFLBBFHH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11C51B60)
#define FILGFLBBFHH_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x11C52880)
#define FILGFLBBFHH_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x11C51B50)
#define FILGFLBBFHH_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x11C52AC0)
#define FILGFLBBFHH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x11C52450)
#define FILGFLBBFHH_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x11C52A30)
#define FILGFLBBFHH_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x11C51650)
#define FILGFLBBFHH_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x11C51990)
#define FILGFLBBFHH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x11C51BE0)
#define FILGFLBBFHH__CTOR_OFFSET UNITYSDK_OFFSET(0x11C527F0)

inline static constexpr unsigned int FILGFLBBFHH_TypeDefinitionIndex = 51671;

class FILGFLBBFHH : public ::HDJJJGCHLEE
{
public:
	::HBIBNDIOKPG* IFEFGIHOKOC; // 0x30
	::FOBNALGHPPD_1<::UnityEngine::Vector3> ILOJFPNKJII; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::String*> PFGJCNHGNPO; // 0x58
	::System::Byte _padding1[0x18];
	::HBIBNDIOKPG* KEHECMCDLFC; // 0x78
	::GPIOLGMOBLJ* IHMHFABMGEO; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGFLBBFHH__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGFLBBFHH_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + FILGFLBBFHH_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGFLBBFHH_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGFLBBFHH_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FILGFLBBFHH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILGFLBBFHH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILGFLBBFHH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::FILGFLBBFHH* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::FILGFLBBFHH*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + FILGFLBBFHH_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILGFLBBFHH_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::FILGFLBBFHH* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::FILGFLBBFHH*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + FILGFLBBFHH_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + FILGFLBBFHH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

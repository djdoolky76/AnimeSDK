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

#define MKFKMHDCNBP_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A66B050)
#define MKFKMHDCNBP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A66B710)
#define MKFKMHDCNBP_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A66B160)
#define MKFKMHDCNBP_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A66BB80)
#define MKFKMHDCNBP_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A66B150)
#define MKFKMHDCNBP_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A66BD30)
#define MKFKMHDCNBP_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A66B770)
#define MKFKMHDCNBP_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A66BAF0)
#define MKFKMHDCNBP_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A66AD20)
#define MKFKMHDCNBP_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A66AFC0)
#define MKFKMHDCNBP_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A66B1E0)
#define MKFKMHDCNBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A66BA00)

inline static constexpr unsigned int MKFKMHDCNBP_TypeDefinitionIndex = 68510;

class MKFKMHDCNBP : public ::KHFGGFPIAOM
{
public:
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x30
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x38
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::System::Single> HBADNCJHEOJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMHDCNBP__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_JFLMLBMNFFK_OFFSET))(this);
	}

	static ::MKFKMHDCNBP* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::MKFKMHDCNBP*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::MKFKMHDCNBP* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::MKFKMHDCNBP*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MKFKMHDCNBP_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}
};

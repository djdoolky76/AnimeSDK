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

#define PPKOAOLNNHI_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x1A807B40)
#define PPKOAOLNNHI_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A808050)
#define PPKOAOLNNHI_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A807C50)
#define PPKOAOLNNHI_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0x1A808380)
#define PPKOAOLNNHI_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0x1A807C40)
#define PPKOAOLNNHI_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0x1A808530)
#define PPKOAOLNNHI_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1A8080B0)
#define PPKOAOLNNHI_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0x1A808690)
#define PPKOAOLNNHI_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0x1A807900)
#define PPKOAOLNNHI_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0x1A807AB0)
#define PPKOAOLNNHI_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1A807CD0)
#define PPKOAOLNNHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8082F0)

inline static constexpr unsigned int PPKOAOLNNHI_TypeDefinitionIndex = 84555;

class PPKOAOLNNHI : public ::KHFGGFPIAOM
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> KDLNKNDCPAB; // 0x30
	::System::Byte _padding0[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKOAOLNNHI__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PPKOAOLNNHI* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::PPKOAOLNNHI*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::PPKOAOLNNHI* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::PPKOAOLNNHI*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKOAOLNNHI_JFLMLBMNFFK_OFFSET))(this);
	}
};

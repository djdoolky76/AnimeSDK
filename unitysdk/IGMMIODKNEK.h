#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOBNALGHPPD_1.h"
#include "unitysdk/HDJJJGCHLEE.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GPIOLGMOBLJ;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IGMMIODKNEK_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0xEBD4530)
#define IGMMIODKNEK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEBD4C10)
#define IGMMIODKNEK_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEBD4640)
#define IGMMIODKNEK_GCPLFHBJMLD_OFFSET UNITYSDK_OFFSET(0xEBD50A0)
#define IGMMIODKNEK_GIJLLGEPMIA_OFFSET UNITYSDK_OFFSET(0xEBD4630)
#define IGMMIODKNEK_HGOAEJAJNPK_OFFSET UNITYSDK_OFFSET(0xEBD5250)
#define IGMMIODKNEK_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0xEBD4C70)
#define IGMMIODKNEK_JFLMLBMNFFK_OFFSET UNITYSDK_OFFSET(0xEBD53B0)
#define IGMMIODKNEK_LBHNEFGNNNB_OFFSET UNITYSDK_OFFSET(0xEBD4050)
#define IGMMIODKNEK_LODDGCEMGJO_OFFSET UNITYSDK_OFFSET(0xEBD44A0)
#define IGMMIODKNEK_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0xEBD46C0)
#define IGMMIODKNEK__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD4EC0)

inline static constexpr unsigned int IGMMIODKNEK_TypeDefinitionIndex = 77259;

class IGMMIODKNEK : public ::HDJJJGCHLEE
{
public:
	::FOBNALGHPPD_1<::UnityEngine::Vector3> LKCGCKABIOH; // 0x30
	::System::Byte _padding0[0x18];
	::FOBNALGHPPD_1<::UnityEngine::Vector3> CONBBLDCMED; // 0x50
	::System::Byte _padding1[0x18];
	::GPIOLGMOBLJ* EPMNNELBGFG; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMMIODKNEK__CTOR_OFFSET))(this);
	}

	::System::Void LBHNEFGNNNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMMIODKNEK_LBHNEFGNNNB_OFFSET))(this);
	}

	::System::Void LODDGCEMGJO(::System::Action_1<::System::Object*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + IGMMIODKNEK_LODDGCEMGJO_OFFSET))(this, EJGDHCIBCJH);
	}

	::HDJJJGCHLEE* DGNAAPGKIPL()
	{
		return ((::HDJJJGCHLEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMMIODKNEK_DGNAAPGKIPL_OFFSET))(this);
	}

	::System::Int32 GIJLLGEPMIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMMIODKNEK_GIJLLGEPMIA_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IGMMIODKNEK_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGMMIODKNEK_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + IGMMIODKNEK_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	static ::IGMMIODKNEK* GCPLFHBJMLD(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::IGMMIODKNEK*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGMMIODKNEK_GCPLFHBJMLD_OFFSET))(EAIMGHKJLNF, PIIOJAOKMDK);
	}

	static ::IGMMIODKNEK* HGOAEJAJNPK(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::IGMMIODKNEK*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + IGMMIODKNEK_HGOAEJAJNPK_OFFSET))(HHIJHDFHPOI);
	}

	::System::Void JFLMLBMNFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMMIODKNEK_JFLMLBMNFFK_OFFSET))(this);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + IGMMIODKNEK_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};

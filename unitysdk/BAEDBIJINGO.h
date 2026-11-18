#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AONOIHMHNFI.h"
#include "unitysdk/BAEDBIJINGO_JDKCNEOONOM.h"
#include "unitysdk/ENEPAKBEJBM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LINJLPFDNEP;
namespace MoleMole { class SceneSoundPolygonData; }
namespace MoleMole { class SceneSoundPortalData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define BAEDBIJINGO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x143C1E20)
#define BAEDBIJINGO_BJACPEMOMHF_OFFSET UNITYSDK_OFFSET(0x143C1470)
#define BAEDBIJINGO_FFJGMBFJIBE_OFFSET UNITYSDK_OFFSET(0x143C1C90)
#define BAEDBIJINGO_FGOKECLDFPL_OFFSET UNITYSDK_OFFSET(0x143C1B20)
#define BAEDBIJINGO_FJECGCNLCKB_OFFSET UNITYSDK_OFFSET(0x143C1AD0)
#define BAEDBIJINGO_FNHLFDAKEDC_OFFSET UNITYSDK_OFFSET(0x143C12D0)
#define BAEDBIJINGO_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x143C1240)
#define BAEDBIJINGO_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x143C1230)
#define BAEDBIJINGO_NGPJLFKLFPK_OFFSET UNITYSDK_OFFSET(0x143C1D50)
#define BAEDBIJINGO_NPDINEENLLA_OFFSET UNITYSDK_OFFSET(0x143C1F40)
#define BAEDBIJINGO_OANDJBOBIDI_OFFSET UNITYSDK_OFFSET(0x143C1980)
#define BAEDBIJINGO_OENOKJAPFOG_OFFSET UNITYSDK_OFFSET(0x143C1C30)
#define BAEDBIJINGO__CTOR_OFFSET UNITYSDK_OFFSET(0x143C1250)

inline static constexpr unsigned int BAEDBIJINGO_TypeDefinitionIndex = 78002;

class BAEDBIJINGO : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_EMJCEBIPDBL()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(BAEDBIJINGO_TypeDefinitionIndex)->GetStaticField(0xCB70);
	}
	static ::UnityEngine::Vector3* StaticGet_JMIFINDMBEP()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(BAEDBIJINGO_TypeDefinitionIndex)->GetStaticField(0xCB7C);
	}
	static ::UnityEngine::Quaternion* StaticGet_PIFODJMNKEO()
	{
		return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(BAEDBIJINGO_TypeDefinitionIndex)->GetStaticField(0xCB88);
	}
	// static const ::System::Int32 DBCPGOJLJJO = 0x4; // 0x0
	::System::String* HIAIKHDFCLN; // 0x10
	::LINJLPFDNEP* LIIMNHBHFMC; // 0x18
	::MoleMole::SceneSoundPolygonData* MAMHEMMBFAO; // 0x20
	::Il2CppArray<::System::Object*>* GHEAMPIHCFO; // 0x28
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::SceneSoundPortalData*>* LNBNGGFCOKD; // 0x38
	::MoleMole::SceneSoundPolygonData* HDDFKKGEHPK; // 0x40
	::UnityEngine::Vector3 LMDOIGGMHLB; // 0x48
	::System::Boolean EAKNKPNEKBN; // 0x54
	::System::Boolean AEPDHAEIKPP; // 0x55
	::System::Boolean ODABNJPMLOL; // 0x56
	::System::Byte _padding0[0x1];
	::AONOIHMHNFI LHCBCLICEMA; // 0x58
	::System::Int32 KBFDAIKOIKL; // 0x5C
	::System::Int32 IDEFFLEMNOE; // 0x60
	::UnityEngine::Vector3 JFKMDEJAANP; // 0x64
	::System::Single NKDIIOJBFIA; // 0x70
	::System::Int32 BNLHPGHLKDK; // 0x74
	::System::Single DBLBPFAOHAP; // 0x78
	::ENEPAKBEJBM KKMENMCMMBN; // 0x7C
	::BAEDBIJINGO_JDKCNEOONOM ECGFMDFFEDP; // 0x80
	::System::Single PEAFKNANIAF; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void FNHLFDAKEDC(::BAEDBIJINGO_JDKCNEOONOM MOEKEKKJGBB)
	{
		return ((::System::Void(*)(::PVOID, ::BAEDBIJINGO_JDKCNEOONOM))((::PBYTE)hIl2Cpp + BAEDBIJINGO_FNHLFDAKEDC_OFFSET))(this, MOEKEKKJGBB);
	}

	::BAEDBIJINGO_JDKCNEOONOM BJACPEMOMHF()
	{
		return ((::BAEDBIJINGO_JDKCNEOONOM(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_BJACPEMOMHF_OFFSET))(this);
	}

	::System::Void OANDJBOBIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_OANDJBOBIDI_OFFSET))(this);
	}

	::System::Void FJECGCNLCKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_FJECGCNLCKB_OFFSET))(this);
	}

	static ::System::Boolean OENOKJAPFOG(::AONOIHMHNFI LHCBCLICEMA)
	{
		return ((::System::Boolean(*)(::AONOIHMHNFI))((::PBYTE)hIl2Cpp + BAEDBIJINGO_OENOKJAPFOG_OFFSET))(LHCBCLICEMA);
	}

	::UnityEngine::Vector3 FFJGMBFJIBE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_FFJGMBFJIBE_OFFSET))(this);
	}

	::System::Void FGOKECLDFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_FGOKECLDFPL_OFFSET))(this);
	}

	::System::Void NGPJLFKLFPK(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 CFJFMMGPGKE, ::UnityEngine::Vector3 KBHFBLJPFJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BAEDBIJINGO_NGPJLFKLFPK_OFFSET))(this, OHOGDOMNHNK, CFJFMMGPGKE, KBHFBLJPFJH);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void NPDINEENLLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDBIJINGO_NPDINEENLLA_OFFSET))(this);
	}
};

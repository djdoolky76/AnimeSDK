#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPLDABGFDMJ_BOADAELCKCG.h"
#include "unitysdk/FPLDABGFDMJ_FKEDKNHLFCM.h"
#include "unitysdk/FPLDABGFDMJ_LCNFKDAEEAC.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoSceneMoveObject; }
namespace MoleMole::Level { class LevelConfig_SceneMoveElement; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FPLDABGFDMJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11C7F380)
#define FPLDABGFDMJ_CMGFGOFMIEM_OFFSET UNITYSDK_OFFSET(0x11C7F4E0)
#define FPLDABGFDMJ_FHJPPJPDMAO_OFFSET UNITYSDK_OFFSET(0x11C7F6F0)
#define FPLDABGFDMJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x11C7F160)
#define FPLDABGFDMJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11C7F2B0)
#define FPLDABGFDMJ_KDDBPLGBOFC_OFFSET UNITYSDK_OFFSET(0x11C7F750)
#define FPLDABGFDMJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11C7F660)
#define FPLDABGFDMJ_NPEPCKHNDCO_OFFSET UNITYSDK_OFFSET(0x11C7F400)
#define FPLDABGFDMJ_OJHBBDMNJBA_OFFSET UNITYSDK_OFFSET(0x11C7F540)
#define FPLDABGFDMJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x11C7EFF0)
#define FPLDABGFDMJ_PNBGBCLNMFB_OFFSET UNITYSDK_OFFSET(0x11C7F3F0)
#define FPLDABGFDMJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x11C7F1B0)
#define FPLDABGFDMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11C7F240)

inline static constexpr unsigned int FPLDABGFDMJ_TypeDefinitionIndex = 85417;

class FPLDABGFDMJ : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_CKGJFNACEFJ()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FPLDABGFDMJ_TypeDefinitionIndex)->GetStaticField(0x12090);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x64; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* FOKINKGKAEI; // 0x48
	::MoleMole::Level::LevelConfig_SceneMoveElement* DFMKILICPFB; // 0x50
	::System::String* ALFCJABDJCP; // 0x58
	::System::Collections::Generic::List_1<::System::UInt32>* LHDEBNKBFLJ; // 0x60
	::UnityEngine::GameObject* EIIDOADGOIF; // 0x68
	::System::Single KMKBJKOEBMF; // 0x70
	::FPLDABGFDMJ_FKEDKNHLFCM GBKAKLFGKDB; // 0x74
	::FPLDABGFDMJ_LCNFKDAEEAC EEMOPKCLEGM; // 0x78
	::System::Single EBOJHJHHCIO; // 0x7C
	::System::Single OGIHENKICBP; // 0x80
	::UnityEngine::Vector3 CLKIGNKHBKK; // 0x84
	::System::Int32 GHNOBMMLJOF; // 0x90
	::UnityEngine::Vector3 JMFFGJMMCAC; // 0x94
	::FPLDABGFDMJ_BOADAELCKCG NFACBFOBNMM; // 0xA0
	::System::Int32 HNLAFHFDGDL; // 0xA4
	::System::Single ALLNOLHHJMD; // 0xA8
	::System::Single KJBJMMBBLEP; // 0xAC
	::System::Single LPIPKHBNCMO; // 0xB0
	::System::Single BECLFDOKGON; // 0xB4
	::System::UInt32 HDEFINGLFOD; // 0xB8

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPLDABGFDMJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_GETCLASSID_OFFSET))(this);
	}

	static ::FPLDABGFDMJ* JFDOOELFAOA()
	{
		return ((::FPLDABGFDMJ*(*)())((::PBYTE)hIl2Cpp + FPLDABGFDMJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::MoleMole::MonoSceneMoveObject* DIPMGNJBPHK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoSceneMoveObject*))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_BBOMJDBNHIC_OFFSET))(this, DIPMGNJBPHK);
	}

	::System::Boolean PNBGBCLNMFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_PNBGBCLNMFB_OFFSET))(this);
	}

	::UnityEngine::Vector3 NPEPCKHNDCO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_NPEPCKHNDCO_OFFSET))(this);
	}

	::System::Boolean CMGFGOFMIEM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_CMGFGOFMIEM_OFFSET))(this);
	}

	::UnityEngine::Vector3 OJHBBDMNJBA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_OJHBBDMNJBA_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean FHJPPJPDMAO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_FHJPPJPDMAO_OFFSET))(this);
	}

	::System::Boolean KDDBPLGBOFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLDABGFDMJ_KDDBPLGBOFC_OFFSET))(this);
	}
};

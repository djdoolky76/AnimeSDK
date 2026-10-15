#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class NEKPAIMIIBA;
namespace RPG::Client { class ClientInputData; }
namespace System { class Object; }

#define KJPENGJCKCO_ANDDCFBDOPM_OFFSET UNITYSDK_OFFSET(0xB458A20)
#define KJPENGJCKCO_CTOR_OFFSET UNITYSDK_OFFSET(0xB457690)
#define KJPENGJCKCO_DAMAAIIEEIP_OFFSET UNITYSDK_OFFSET(0xB4589C0)
#define KJPENGJCKCO_DDGDOBDOMKD_OFFSET UNITYSDK_OFFSET(0xB458210)
#define KJPENGJCKCO_DHHAGHKLIJI_OFFSET UNITYSDK_OFFSET(0xB4582B0)
#define KJPENGJCKCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB457980)
#define KJPENGJCKCO_DNCBPJPJIBN_OFFSET UNITYSDK_OFFSET(0xB458830)
#define KJPENGJCKCO_FHNEEELAEGK_OFFSET UNITYSDK_OFFSET(0xB458150)
#define KJPENGJCKCO_FLMCAKFKMHD_OFFSET UNITYSDK_OFFSET(0xB4588A0)
#define KJPENGJCKCO_GEGEELPGEOH_OFFSET UNITYSDK_OFFSET(0xB458430)
#define KJPENGJCKCO_GEHFJMKBCAM_OFFSET UNITYSDK_OFFSET(0xB4587D0)
#define KJPENGJCKCO_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xB458A80)
#define KJPENGJCKCO_HBBAGPGNFKJ_OFFSET UNITYSDK_OFFSET(0xB458350)
#define KJPENGJCKCO_HLHHHMHJJFH_OFFSET UNITYSDK_OFFSET(0xB458700)
#define KJPENGJCKCO_KBPMBBIJBKB_OFFSET UNITYSDK_OFFSET(0xB458300)
#define KJPENGJCKCO_KEHNFJCEAGF_OFFSET UNITYSDK_OFFSET(0xB458630)
#define KJPENGJCKCO_KFJLGBHOONO_OFFSET UNITYSDK_OFFSET(0xB458260)
#define KJPENGJCKCO_KFOKCNMBKID_OFFSET UNITYSDK_OFFSET(0xB4583A0)
#define KJPENGJCKCO_MGLPJKBFEJK_OFFSET UNITYSDK_OFFSET(0xB458530)
#define KJPENGJCKCO_NDMEGEJBOEG_OFFSET UNITYSDK_OFFSET(0xB457C00)
#define KJPENGJCKCO_OCMKMOHFIID_OFFSET UNITYSDK_OFFSET(0xB458090)
#define KJPENGJCKCO_OELFBHLOEMD_OFFSET UNITYSDK_OFFSET(0xB4584B0)
#define KJPENGJCKCO_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0xB458020)
#define KJPENGJCKCO_SET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xB458A90)

inline static constexpr unsigned int KJPENGJCKCO_TypeDefinitionIndex = 57546;

	class KJPENGJCKCO : public ::System::Object
	{
	public:
		::RPG::Client::ClientInputData* ADHGKKKNJAB; // 0x10
		::NEKPAIMIIBA* _InputData_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_DISPOSE_OFFSET))(this);
		}

		::System::Void NDMEGEJBOEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_NDMEGEJBOEG_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC(::System::Boolean a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KJPENGJCKCO_PEDFLCNLIOC_OFFSET))(this, a1, a2);
		}

		::System::Void OCMKMOHFIID(::System::Single a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KJPENGJCKCO_OCMKMOHFIID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHNEEELAEGK(::System::Single a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + KJPENGJCKCO_FHNEEELAEGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDGDOBDOMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_DDGDOBDOMKD_OFFSET))(this);
		}

		::System::Void KFJLGBHOONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_KFJLGBHOONO_OFFSET))(this);
		}

		::System::Void DHHAGHKLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_DHHAGHKLIJI_OFFSET))(this);
		}

		::System::Void KBPMBBIJBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_KBPMBBIJBKB_OFFSET))(this);
		}

		::System::Void HBBAGPGNFKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_HBBAGPGNFKJ_OFFSET))(this);
		}

		::System::Void KFOKCNMBKID(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + KJPENGJCKCO_KFOKCNMBKID_OFFSET))(this, a1, a2);
		}

		::System::Void GEGEELPGEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_GEGEELPGEOH_OFFSET))(this);
		}

		::System::Void OELFBHLOEMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_OELFBHLOEMD_OFFSET))(this);
		}

		::System::Void MGLPJKBFEJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_MGLPJKBFEJK_OFFSET))(this, a1);
		}

		::System::Void KEHNFJCEAGF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_KEHNFJCEAGF_OFFSET))(this, a1);
		}

		::System::Void HLHHHMHJJFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_HLHHHMHJJFH_OFFSET))(this, a1);
		}

		::System::Void GEHFJMKBCAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_GEHFJMKBCAM_OFFSET))(this, a1);
		}

		::System::Void DNCBPJPJIBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_DNCBPJPJIBN_OFFSET))(this, a1);
		}

		::System::Void FLMCAKFKMHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_FLMCAKFKMHD_OFFSET))(this, a1);
		}

		::System::Void DAMAAIIEEIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_DAMAAIIEEIP_OFFSET))(this, a1);
		}

		::System::Void ANDDCFBDOPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_ANDDCFBDOPM_OFFSET))(this, a1);
		}

		::NEKPAIMIIBA* get_InputData()
		{
			return ((::NEKPAIMIIBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJPENGJCKCO_GET_INPUTDATA_OFFSET))(this);
		}

		::System::Void set_InputData(::NEKPAIMIIBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NEKPAIMIIBA*))((::PBYTE)hIl2Cpp + KJPENGJCKCO_SET_INPUTDATA_OFFSET))(this, a1);
		}

	};

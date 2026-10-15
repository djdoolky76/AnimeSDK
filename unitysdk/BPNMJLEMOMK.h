#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GEIDBPKDFDC;
namespace RPG::Client { class ClientInputData; }
namespace System { class Object; }

#define BPNMJLEMOMK_ANDDCFBDOPM_OFFSET UNITYSDK_OFFSET(0xC1ABAF0)
#define BPNMJLEMOMK_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AAD30)
#define BPNMJLEMOMK_DAMAAIIEEIP_OFFSET UNITYSDK_OFFSET(0xC1ABA90)
#define BPNMJLEMOMK_DDGDOBDOMKD_OFFSET UNITYSDK_OFFSET(0xC1AB6A0)
#define BPNMJLEMOMK_DHHAGHKLIJI_OFFSET UNITYSDK_OFFSET(0xC1AB5F0)
#define BPNMJLEMOMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1AAF90)
#define BPNMJLEMOMK_DNCBPJPJIBN_OFFSET UNITYSDK_OFFSET(0xC1ABBB0)
#define BPNMJLEMOMK_FLMCAKFKMHD_OFFSET UNITYSDK_OFFSET(0xC1ABC20)
#define BPNMJLEMOMK_GEGEELPGEOH_OFFSET UNITYSDK_OFFSET(0xC1AB820)
#define BPNMJLEMOMK_GEHFJMKBCAM_OFFSET UNITYSDK_OFFSET(0xC1ABB50)
#define BPNMJLEMOMK_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xC1ABD10)
#define BPNMJLEMOMK_HBBAGPGNFKJ_OFFSET UNITYSDK_OFFSET(0xC1AB740)
#define BPNMJLEMOMK_HLHHHMHJJFH_OFFSET UNITYSDK_OFFSET(0xC1AB9C0)
#define BPNMJLEMOMK_KBPMBBIJBKB_OFFSET UNITYSDK_OFFSET(0xC1AB6F0)
#define BPNMJLEMOMK_KFJLGBHOONO_OFFSET UNITYSDK_OFFSET(0xC1AB5A0)
#define BPNMJLEMOMK_MGLPJKBFEJK_OFFSET UNITYSDK_OFFSET(0xC1AB8F0)
#define BPNMJLEMOMK_NDMEGEJBOEG_OFFSET UNITYSDK_OFFSET(0xC1AB1D0)
#define BPNMJLEMOMK_OBKNANIDMKH_OFFSET UNITYSDK_OFFSET(0xC1AB530)
#define BPNMJLEMOMK_OELFBHLOEMD_OFFSET UNITYSDK_OFFSET(0xC1AB790)
#define BPNMJLEMOMK_PEDFLCNLIOC_OFFSET UNITYSDK_OFFSET(0xC1AB640)
#define BPNMJLEMOMK_SET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xC1ABD20)

	class BPNMJLEMOMK : public ::System::Object
	{
	public:
		::GEIDBPKDFDC* _InputData_k__BackingField; // 0x10
		::RPG::Client::ClientInputData* ADHGKKKNJAB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_DISPOSE_OFFSET))(this);
		}

		::System::Void NDMEGEJBOEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_NDMEGEJBOEG_OFFSET))(this);
		}

		::System::Void OBKNANIDMKH(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_OBKNANIDMKH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFJLGBHOONO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_KFJLGBHOONO_OFFSET))(this);
		}

		::System::Void DHHAGHKLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_DHHAGHKLIJI_OFFSET))(this);
		}

		::System::Void PEDFLCNLIOC(::System::Boolean a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_PEDFLCNLIOC_OFFSET))(this, a1, a2);
		}

		::System::Void DDGDOBDOMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_DDGDOBDOMKD_OFFSET))(this);
		}

		::System::Void KBPMBBIJBKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_KBPMBBIJBKB_OFFSET))(this);
		}

		::System::Void HBBAGPGNFKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_HBBAGPGNFKJ_OFFSET))(this);
		}

		::System::Void OELFBHLOEMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_OELFBHLOEMD_OFFSET))(this);
		}

		::System::Void GEGEELPGEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_GEGEELPGEOH_OFFSET))(this);
		}

		::System::Void MGLPJKBFEJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_MGLPJKBFEJK_OFFSET))(this, a1);
		}

		::System::Void HLHHHMHJJFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_HLHHHMHJJFH_OFFSET))(this, a1);
		}

		::System::Void DAMAAIIEEIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_DAMAAIIEEIP_OFFSET))(this, a1);
		}

		::System::Void ANDDCFBDOPM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_ANDDCFBDOPM_OFFSET))(this, a1);
		}

		::System::Void GEHFJMKBCAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_GEHFJMKBCAM_OFFSET))(this, a1);
		}

		::System::Void DNCBPJPJIBN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_DNCBPJPJIBN_OFFSET))(this, a1);
		}

		::System::Void FLMCAKFKMHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_FLMCAKFKMHD_OFFSET))(this, a1);
		}

		::GEIDBPKDFDC* get_InputData()
		{
			return ((::GEIDBPKDFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_GET_INPUTDATA_OFFSET))(this);
		}

		::System::Void set_InputData(::GEIDBPKDFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEIDBPKDFDC*))((::PBYTE)hIl2Cpp + BPNMJLEMOMK_SET_INPUTDATA_OFFSET))(this, a1);
		}

	};

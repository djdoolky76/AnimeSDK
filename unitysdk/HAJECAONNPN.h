#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
class EMJIDLCDFMI;
class HGBELHFMMAC;
class IAJLHKIHBFB;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
class LBJLBMOOJGM;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define HAJECAONNPN_AJMFNOJOBBP_OFFSET UNITYSDK_OFFSET(0x15B6F540)
#define HAJECAONNPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F160)
#define HAJECAONNPN_DKIOFFIHDFB_OFFSET UNITYSDK_OFFSET(0x15B70430)
#define HAJECAONNPN_GETENTITYNAME_OFFSET UNITYSDK_OFFSET(0x15B6F1F0)
#define HAJECAONNPN_GETSERVICES_OFFSET UNITYSDK_OFFSET(0x15B6F260)
#define HAJECAONNPN_GET_AIPROFILESHUFFLESEED_OFFSET UNITYSDK_OFFSET(0x15B6F140)
#define HAJECAONNPN_JBNLPLPIDFK_OFFSET UNITYSDK_OFFSET(0x15B703E0)
#define HAJECAONNPN_JCCDBGLGBPM_OFFSET UNITYSDK_OFFSET(0x15B6FCD0)
#define HAJECAONNPN_OEFBEEFDDHH_OFFSET UNITYSDK_OFFSET(0x15B6F2B0)
#define HAJECAONNPN_SET_AIPROFILESHUFFLESEED_OFFSET UNITYSDK_OFFSET(0x15B6F150)
#define HAJECAONNPN__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15B6F300)
#define HAJECAONNPN__ONINIT_OFFSET UNITYSDK_OFFSET(0x15B6F690)
#define HAJECAONNPN__ONTICK_OFFSET UNITYSDK_OFFSET(0x15B6FE70)

inline static constexpr unsigned int HAJECAONNPN_TypeDefinitionIndex = 75906;

	class HAJECAONNPN : public ::HCLPKMIIANI
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x78
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x80
		::HGBELHFMMAC* MCMEKPNOFKP; // 0x88
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x90
		::LBJLBMOOJGM* FHEMCAFOIKG; // 0x98
		::System::Boolean BIGHCPKCOAA; // 0xA0
		static ::System::Int32* StaticGet__AIProfileShuffleSeed_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HAJECAONNPN")->GetStaticField(0x75D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN_CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_AIProfileShuffleSeed()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HAJECAONNPN_GET_AIPROFILESHUFFLESEED_OFFSET))();
		}

		static ::System::Void set_AIProfileShuffleSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HAJECAONNPN_SET_AIPROFILESHUFFLESEED_OFFSET))(a1);
		}

		::System::String* GetEntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN_GETENTITYNAME_OFFSET))(this);
		}

		::EMJIDLCDFMI* GetServices()
		{
			return ((::EMJIDLCDFMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN_GETSERVICES_OFFSET))(this);
		}

		::LBJLBMOOJGM* OEFBEEFDDHH()
		{
			return ((::LBJLBMOOJGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN_OEFBEEFDDHH_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN__ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + HAJECAONNPN__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAJECAONNPN__ONTICK_OFFSET))(this, a1);
		}

		::System::Void JCCDBGLGBPM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HAJECAONNPN_JCCDBGLGBPM_OFFSET))(this, a1);
		}

		::System::Void JBNLPLPIDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAJECAONNPN_JBNLPLPIDFK_OFFSET))(this, a1);
		}

		::System::Void DKIOFFIHDFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN_DKIOFFIHDFB_OFFSET))(this);
		}

		::System::Void AJMFNOJOBBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAJECAONNPN_AJMFNOJOBBP_OFFSET))(this);
		}

	};

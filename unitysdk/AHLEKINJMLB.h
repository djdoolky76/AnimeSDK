#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class PivotBasedFractureMonoPlugin; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define AHLEKINJMLB_CCTOR_OFFSET UNITYSDK_OFFSET(0xEB81BA0)
#define AHLEKINJMLB_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xEB813C0)
#define AHLEKINJMLB_CTOR_OFFSET UNITYSDK_OFFSET(0xEB81B90)
#define AHLEKINJMLB_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0xEB812E0)
#define AHLEKINJMLB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEB81140)
#define AHLEKINJMLB_LATETICK_OFFSET UNITYSDK_OFFSET(0xEB81400)
#define AHLEKINJMLB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xEB81360)
#define AHLEKINJMLB_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xEB81180)

inline static constexpr unsigned int AHLEKINJMLB_TypeDefinitionIndex = 70695;

	class AHLEKINJMLB : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x38
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x40
		static ::System::Int32* StaticGet_CJDMIIKGIIA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127B0);
		}

		static ::System::Int32* StaticGet_CMLDHKCIJHK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127B4);
		}

		static ::System::Int32* StaticGet_BPAHAGEDLDG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127B8);
		}

		static ::System::Int32* StaticGet_KPDHDAOEFPH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127BC);
		}

		static ::System::Int32* StaticGet_LNOIIDNGDAD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127C0);
		}

		static ::System::Int32* StaticGet_PMBJBLOEOIA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127C4);
		}

		static ::System::Int32* StaticGet_DNOIIDPGDCD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127C8);
		}

		static ::System::Int32* StaticGet_IIKOLHDHGBC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127CC);
		}

		static ::System::Int32* StaticGet_LAKLBPKDKBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127D0);
		}

		static ::System::Int32* StaticGet_FAJJHIJEFMK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127D4);
		}

		static ::System::Int32* StaticGet_DDCOEPJNLIL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AHLEKINJMLB")->GetStaticField(0x127D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKINJMLB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLEKINJMLB_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKINJMLB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKINJMLB_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKINJMLB_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKINJMLB_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHLEKINJMLB_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::PivotBasedFractureMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::PivotBasedFractureMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLEKINJMLB_JJINILFDJOF_OFFSET))(this);
		}

	};

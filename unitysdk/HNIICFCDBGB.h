#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IMHNJGALBDG;
namespace RPG::GameCore { class ConfigGetOnTrain; }
namespace RPG::GameCore { class LevelPedestrianLineUpPointInfo; }
namespace RPG::GameCore { class LevelPedestrianLineUpSourceInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNIICFCDBGB_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0x15D978D0)
#define HNIICFCDBGB_AHKBDPKJFCM_OFFSET UNITYSDK_OFFSET(0x15D98030)
#define HNIICFCDBGB_BEMDNIPJHAG_OFFSET UNITYSDK_OFFSET(0x15D98240)
#define HNIICFCDBGB_BGMDKAECGNE_OFFSET UNITYSDK_OFFSET(0x15D98D90)
#define HNIICFCDBGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D97450)
#define HNIICFCDBGB_DPCMIOJPFPK_OFFSET UNITYSDK_OFFSET(0x15D993F0)
#define HNIICFCDBGB_EBDHJDLHNON_OFFSET UNITYSDK_OFFSET(0x15D98CB0)
#define HNIICFCDBGB_FKMGEOCJCNL_OFFSET UNITYSDK_OFFSET(0x15D97DB0)
#define HNIICFCDBGB_GGOCCNCEFHO_OFFSET UNITYSDK_OFFSET(0x15D98980)
#define HNIICFCDBGB_GOGEHPGBDAN_OFFSET UNITYSDK_OFFSET(0x15D97AD0)
#define HNIICFCDBGB_JKHLIOFAJMB_OFFSET UNITYSDK_OFFSET(0x15D98860)
#define HNIICFCDBGB_LEDOPOOJEFG_OFFSET UNITYSDK_OFFSET(0x15D97E50)
#define HNIICFCDBGB_MDCODKDCPLI_OFFSET UNITYSDK_OFFSET(0x15D987E0)
#define HNIICFCDBGB_NDFAAHAEKII_OFFSET UNITYSDK_OFFSET(0x15D97E70)
#define HNIICFCDBGB_OGPFKJOKGPJ_OFFSET UNITYSDK_OFFSET(0x15D97E30)
#define HNIICFCDBGB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15D97A70)
#define HNIICFCDBGB_PCBJKDPMKMI_OFFSET UNITYSDK_OFFSET(0x15D99480)
#define HNIICFCDBGB_PMJLIMECKJB_OFFSET UNITYSDK_OFFSET(0x15D99550)
#define HNIICFCDBGB_PNAOFJDFFEO_OFFSET UNITYSDK_OFFSET(0x15D98D40)

inline static constexpr unsigned int HNIICFCDBGB_TypeDefinitionIndex = 69221;

	class HNIICFCDBGB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::GameCore::LevelPedestrianLineUpSourceInfo*>* KFCCKKPGPPN; // 0x10
		::Il2CppArray<::IMHNJGALBDG*>* GJJKNDENMLG; // 0x18
		::System::String* LLPIMMJKHPP; // 0x20
		::RPG::GameCore::ConfigGetOnTrain* DDMMCKFBKEN; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IMHNJGALBDG*>* EANBPFEBJMC; // 0x30
		::RPG::GameCore::LevelPedestrianLineUpPointInfo* EJJEEJENLDA; // 0x38
		::System::Single KABMKDPFFFE; // 0x40
		::System::Int32 GIFFFEDCMLL; // 0x44
		::UnityEngine::Vector3 ABKJHLPCDOD; // 0x48
		::System::Single PODKEDFAAOK; // 0x54
		::UnityEngine::Vector3 ADAMLNOKDPM; // 0x58
		::System::Boolean GEKJLCDCHGF; // 0x64
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FHPOGIMFLPA; // 0x68
		::System::Void _ctor(::RPG::GameCore::LevelPedestrianLineUpPointInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianLineUpPointInfo*))((::PBYTE)hIl2Cpp + HNIICFCDBGB_CTOR_OFFSET))(this, a1);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNIICFCDBGB_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean FKMGEOCJCNL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_FKMGEOCJCNL_OFFSET))(this);
		}

		::System::Single OGPFKJOKGPJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_OGPFKJOKGPJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 LEDOPOOJEFG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_LEDOPOOJEFG_OFFSET))(this);
		}

		::System::Boolean NDFAAHAEKII(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HNIICFCDBGB_NDFAAHAEKII_OFFSET))(this, a1, a2);
		}

		::System::Void AHKBDPKJFCM(::IMHNJGALBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMHNJGALBDG*))((::PBYTE)hIl2Cpp + HNIICFCDBGB_AHKBDPKJFCM_OFFSET))(this, a1);
		}

		::System::Void BEMDNIPJHAG(::IMHNJGALBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMHNJGALBDG*))((::PBYTE)hIl2Cpp + HNIICFCDBGB_BEMDNIPJHAG_OFFSET))(this, a1);
		}

		::System::Void EBDHJDLHNON(::RPG::GameCore::ConfigGetOnTrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigGetOnTrain*))((::PBYTE)hIl2Cpp + HNIICFCDBGB_EBDHJDLHNON_OFFSET))(this, a1);
		}

		::System::Void BGMDKAECGNE(::IMHNJGALBDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMHNJGALBDG*))((::PBYTE)hIl2Cpp + HNIICFCDBGB_BGMDKAECGNE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GGOCCNCEFHO(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HNIICFCDBGB_GGOCCNCEFHO_OFFSET))(this, a1);
		}

		::System::Int32 MDCODKDCPLI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_MDCODKDCPLI_OFFSET))(this);
		}

		::System::Int32 JKHLIOFAJMB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_JKHLIOFAJMB_OFFSET))(this);
		}

		::System::Int32 DPCMIOJPFPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_DPCMIOJPFPK_OFFSET))(this);
		}

		::System::Void PCBJKDPMKMI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNIICFCDBGB_PCBJKDPMKMI_OFFSET))(this, a1);
		}

		::System::Void PNAOFJDFFEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_PNAOFJDFFEO_OFFSET))(this);
		}

		::System::Void PMJLIMECKJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIICFCDBGB_PMJLIMECKJB_OFFSET))(this);
		}

		::System::Void GOGEHPGBDAN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNIICFCDBGB_GOGEHPGBDAN_OFFSET))(this, a1);
		}

	};

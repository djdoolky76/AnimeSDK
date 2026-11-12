#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKNJCCODPIF_WaitEntityResult.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
class HHCKNGMIAKL;
class LLADGGNOJPG;
namespace Proto { class SceneEntityInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define HKNJCCODPIF_BCHCNGLJCON_OFFSET UNITYSDK_OFFSET(0x16CA70C0)
#define HKNJCCODPIF_CNKFOBKLMJP_OFFSET UNITYSDK_OFFSET(0x16CA9140)
#define HKNJCCODPIF_CTOR_OFFSET UNITYSDK_OFFSET(0x16CA70B0)
#define HKNJCCODPIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16CA7140)
#define HKNJCCODPIF_DLAELHJFONH_OFFSET UNITYSDK_OFFSET(0x16CA70D0)
#define HKNJCCODPIF_DMCKPDHBHJB_OFFSET UNITYSDK_OFFSET(0x16CA7880)
#define HKNJCCODPIF_DNOJHJNONLJ_OFFSET UNITYSDK_OFFSET(0x16CA7F70)
#define HKNJCCODPIF_DOEJIIPDGGB_OFFSET UNITYSDK_OFFSET(0x16CA88F0)
#define HKNJCCODPIF_EDJJKKCGJKM_OFFSET UNITYSDK_OFFSET(0x16CA7CB0)
#define HKNJCCODPIF_FOBABCJLJFB_OFFSET UNITYSDK_OFFSET(0x16CA7220)
#define HKNJCCODPIF_HMPCCNNAIHB_OFFSET UNITYSDK_OFFSET(0x16CA8230)
#define HKNJCCODPIF_HNOAJCMKGBF_OFFSET UNITYSDK_OFFSET(0x16CA7270)
#define HKNJCCODPIF_JABCONMPGGF_OFFSET UNITYSDK_OFFSET(0x16CA7E80)
#define HKNJCCODPIF_KDGKKJLBOMP_OFFSET UNITYSDK_OFFSET(0x16CA90F0)
#define HKNJCCODPIF_NLHCGMDBKCB_OFFSET UNITYSDK_OFFSET(0x16CA9210)
#define HKNJCCODPIF_NMAHJAPLIMP_OFFSET UNITYSDK_OFFSET(0x16CA86F0)
#define HKNJCCODPIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16CA9030)

inline static constexpr unsigned int HKNJCCODPIF_TypeDefinitionIndex = 62151;

	class HKNJCCODPIF : public ::System::Object
	{
	public:
		::HHCKNGMIAKL* OOFIFJJMNJM; // 0x10
		::LLADGGNOJPG* KBPHHANBMAN; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::System::Boolean CNHKFIINEBD; // 0x28
		::System::Boolean GDGNOBCCCIP; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single DEIEJFFJAAN; // 0x2C
		// static const ::System::Object KIMHGGGGOHH; // 0x0
		::System::Void _ctor(::HHCKNGMIAKL* a1, ::LLADGGNOJPG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HHCKNGMIAKL*, ::LLADGGNOJPG*))((::PBYTE)hIl2Cpp + HKNJCCODPIF_CTOR_OFFSET))(this, a1, a2);
		}

		::LLADGGNOJPG* BCHCNGLJCON()
		{
			return ((::LLADGGNOJPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_BCHCNGLJCON_OFFSET))(this);
		}

		::System::Boolean DLAELHJFONH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNJCCODPIF_DLAELHJFONH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_DISPOSE_OFFSET))(this);
		}

		::System::Void FOBABCJLJFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_FOBABCJLJFB_OFFSET))(this);
		}

		::System::Boolean HNOAJCMKGBF(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKNJCCODPIF_HNOAJCMKGBF_OFFSET))(this, a1);
		}

		::System::Boolean EDJJKKCGJKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_EDJJKKCGJKM_OFFSET))(this);
		}

		::System::Void DMCKPDHBHJB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HKNJCCODPIF_DMCKPDHBHJB_OFFSET))(this, a1);
		}

		::HKNJCCODPIF_WaitEntityResult HMPCCNNAIHB(::System::UInt32 a1)
		{
			return ((::HKNJCCODPIF_WaitEntityResult(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNJCCODPIF_HMPCCNNAIHB_OFFSET))(this, a1);
		}

		::System::Boolean NMAHJAPLIMP(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + HKNJCCODPIF_NMAHJAPLIMP_OFFSET))(this, a1);
		}

		::System::String* DOEJIIPDGGB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_DOEJIIPDGGB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_TOSTRING_OFFSET))(this);
		}

		::System::Void KDGKKJLBOMP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HKNJCCODPIF_KDGKKJLBOMP_OFFSET))(this, a1);
		}

		::System::Void DNOJHJNONLJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HKNJCCODPIF_DNOJHJNONLJ_OFFSET))(this, a1);
		}

		::System::Void JABCONMPGGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_JABCONMPGGF_OFFSET))(this);
		}

		::System::Void CNKFOBKLMJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_CNKFOBKLMJP_OFFSET))(this);
		}

		::RPG::GameCore::EntityClassifyType NLHCGMDBKCB()
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNJCCODPIF_NLHCGMDBKCB_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FNAFLGKGKII;
class HHCKNGMIAKL;
class PBGJFNCHEJO;
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class SharedValue; }
namespace RPG::GameCore { class StartSummonUnitGameplay; }
namespace RPG::GameCore { class SummonUnitGameplayConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIHCPGBPDNI_BCJNPBGPOFD_OFFSET UNITYSDK_OFFSET(0xBE8B140)
#define OIHCPGBPDNI_BEMNHPEOGBB_OFFSET UNITYSDK_OFFSET(0xBE8B200)
#define OIHCPGBPDNI_BOGPGBJJAAN_OFFSET UNITYSDK_OFFSET(0xBE8C620)
#define OIHCPGBPDNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8A360)
#define OIHCPGBPDNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE8A4C0)
#define OIHCPGBPDNI_DKDBABLBIJJ_OFFSET UNITYSDK_OFFSET(0xBE8C730)
#define OIHCPGBPDNI_FNBDNKLMCDI_OFFSET UNITYSDK_OFFSET(0xBE8C780)
#define OIHCPGBPDNI_GMCIOCENFKM_OFFSET UNITYSDK_OFFSET(0xBE8CAF0)
#define OIHCPGBPDNI_GOLDGOGEDMH_OFFSET UNITYSDK_OFFSET(0xBE8C230)
#define OIHCPGBPDNI_HEENBPGNFIE_OFFSET UNITYSDK_OFFSET(0xBE8AF70)
#define OIHCPGBPDNI_IIOBLLNNCOO_OFFSET UNITYSDK_OFFSET(0xBE8C2F0)
#define OIHCPGBPDNI_JAFOENLPOJL_OFFSET UNITYSDK_OFFSET(0xBE8BFC0)
#define OIHCPGBPDNI_JKJOLLPBFMG_OFFSET UNITYSDK_OFFSET(0xBE8C010)
#define OIHCPGBPDNI_KECEHLINDFI_OFFSET UNITYSDK_OFFSET(0xBE8AE90)
#define OIHCPGBPDNI_MBJAMHLFDFI_OFFSET UNITYSDK_OFFSET(0xBE8A7E0)
#define OIHCPGBPDNI_NNDEDGOMIBE_OFFSET UNITYSDK_OFFSET(0xBE8B2A0)
#define OIHCPGBPDNI_NNJOANNJEMO_OFFSET UNITYSDK_OFFSET(0xBE8C280)
#define OIHCPGBPDNI_NOMFMJDEIAN_OFFSET UNITYSDK_OFFSET(0xBE8BAD0)
#define OIHCPGBPDNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE8A630)
#define OIHCPGBPDNI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE8A560)
#define OIHCPGBPDNI_PPIOBFKMFIH_1_OFFSET UNITYSDK_OFFSET(0xBE8CE00)
#define OIHCPGBPDNI_PPIOBFKMFIH_2_OFFSET UNITYSDK_OFFSET(0xBE8CB60)
#define OIHCPGBPDNI_PPIOBFKMFIH_OFFSET UNITYSDK_OFFSET(0xBE8D090)
#define OIHCPGBPDNI_TICK_OFFSET UNITYSDK_OFFSET(0xBE8A5C0)

inline static constexpr unsigned int OIHCPGBPDNI_TypeDefinitionIndex = 58729;

	class OIHCPGBPDNI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StartSummonUnitGameplay* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::LevelGraphConfig* INCIKECJNHK; // 0x28
		::RPG::GameCore::SummonUnitGameplayConfig* IOFNMCBADNM; // 0x30
		::PBGJFNCHEJO* EPGIOAEIACN; // 0x38
		::HHCKNGMIAKL* AFNDGMJDPIC; // 0x40
		::FNAFLGKGKII* KFEEIIIHPJM; // 0x48
		::System::Boolean HFAPCECJFPM; // 0x50
		::System::Byte _padding0[0x3];
		::System::UInt32 ACOIPMDKLPJ; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartSummonUnitGameplay* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartSummonUnitGameplay*))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean MBJAMHLFDFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_MBJAMHLFDFI_OFFSET))(this);
		}

		::System::Void BEMNHPEOGBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_BEMNHPEOGBB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NOMFMJDEIAN(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::System::Boolean a6)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_NOMFMJDEIAN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void NNDEDGOMIBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::EntityPosAdaptionConfig*, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_NNDEDGOMIBE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JAFOENLPOJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_JAFOENLPOJL_OFFSET))(this);
		}

		::System::Void GOLDGOGEDMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_GOLDGOGEDMH_OFFSET))(this);
		}

		::System::Void NNJOANNJEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_NNJOANNJEMO_OFFSET))(this);
		}

		::System::Void KECEHLINDFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_KECEHLINDFI_OFFSET))(this);
		}

		::System::Void BCJNPBGPOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_BCJNPBGPOFD_OFFSET))(this);
		}

		::System::Void IIOBLLNNCOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_IIOBLLNNCOO_OFFSET))(this);
		}

		::System::Void BOGPGBJJAAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_BOGPGBJJAAN_OFFSET))(this);
		}

		::System::Void DKDBABLBIJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_DKDBABLBIJJ_OFFSET))(this, a1);
		}

		::System::Void JKJOLLPBFMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_JKJOLLPBFMG_OFFSET))(this);
		}

		::System::Void HEENBPGNFIE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_HEENBPGNFIE_OFFSET))(this, a1);
		}

		::System::Void GMCIOCENFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_GMCIOCENFKM_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* FNBDNKLMCDI()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_FNBDNKLMCDI_OFFSET))(this);
		}

		static ::System::Void PPIOBFKMFIH(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_PPIOBFKMFIH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PPIOBFKMFIH_1(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_PPIOBFKMFIH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PPIOBFKMFIH_2(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::SharedValue*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OIHCPGBPDNI_PPIOBFKMFIH_2_OFFSET))(a1, a2, a3);
		}

	};

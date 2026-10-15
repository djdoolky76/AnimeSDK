#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/BattleComboGear.h"
class OIKIOEIKOHK;
namespace RPG::GameCore { class LevelComboChangeEvent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define NDMLNNNPFFF_ADMOLOIAIOE_OFFSET UNITYSDK_OFFSET(0xBB4C020)
#define NDMLNNNPFFF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBB4C5B0)
#define NDMLNNNPFFF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBB4C6A0)
#define NDMLNNNPFFF_BHMDBFNCEHE_OFFSET UNITYSDK_OFFSET(0xBB4BC70)
#define NDMLNNNPFFF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB4C770)
#define NDMLNNNPFFF_DOFNGKBCFEJ_OFFSET UNITYSDK_OFFSET(0xBB4BD10)
#define NDMLNNNPFFF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBB4BCC0)
#define NDMLNNNPFFF_GJEJKBIMDFH_OFFSET UNITYSDK_OFFSET(0xBB4C090)
#define NDMLNNNPFFF_LJCAENMHJCK_OFFSET UNITYSDK_OFFSET(0xBB4BF80)
#define NDMLNNNPFFF_PMJIGNFAOBJ_OFFSET UNITYSDK_OFFSET(0xBB4C490)
#define NDMLNNNPFFF__ONBIND_OFFSET UNITYSDK_OFFSET(0xBB4B820)

inline static constexpr unsigned int NDMLNNNPFFF_TypeDefinitionIndex = 71566;

	class NDMLNNNPFFF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* FNAOHBLCEIO; // 0x60
		::Il2CppArray<::OIKIOEIKOHK*>* NLINGFCACGM; // 0x68
		::System::Boolean HPDPEGMLLCF; // 0x70
		::System::Boolean EINNACFPAEN; // 0x71
		::System::Byte _padding0[0x2];
		::RPG::Client::BattleComboGear JNJIBBOHBFB; // 0x74
		// static const ::System::Object NDBNGFLJJAL; // 0x0
		// static const ::System::String* FDHODEPLFKL; // 0x0
		// static const ::System::String* BKFNPDMBKJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMLNNNPFFF__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void LJCAENMHJCK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_LJCAENMHJCK_OFFSET))(this, a1);
		}

		::System::Void ADMOLOIAIOE(::RPG::GameCore::LevelComboChangeEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelComboChangeEvent*))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_ADMOLOIAIOE_OFFSET))(this, a1);
		}

		::System::Void DOFNGKBCFEJ(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_DOFNGKBCFEJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GJEJKBIMDFH(::RPG::Client::BattleComboGear a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleComboGear))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_GJEJKBIMDFH_OFFSET))(this, a1);
		}

		::System::Int32 BHMDBFNCEHE(::RPG::Client::BattleComboGear a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BattleComboGear))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_BHMDBFNCEHE_OFFSET))(this, a1);
		}

		::System::Void PMJIGNFAOBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_PMJIGNFAOBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMLNNNPFFF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};

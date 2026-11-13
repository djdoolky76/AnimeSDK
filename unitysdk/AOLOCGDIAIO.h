#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
class AOLOCGDIAIO;
class DOPPLDOEKFA;
namespace RPG::GameCore { class ElationSkillResBakeConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SingleElationSkillResBakeConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOLOCGDIAIO_AEAACHAGGCJ_OFFSET UNITYSDK_OFFSET(0x184E3820)
#define AOLOCGDIAIO_AFPLLGLFBPJ_OFFSET UNITYSDK_OFFSET(0x184E3260)
#define AOLOCGDIAIO_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x184E2DB0)
#define AOLOCGDIAIO_BKKKEKPHFJA_OFFSET UNITYSDK_OFFSET(0x184E3530)
#define AOLOCGDIAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x184E3830)
#define AOLOCGDIAIO_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x184E3800)
#define AOLOCGDIAIO_DMDHGKEFBCK_OFFSET UNITYSDK_OFFSET(0x184E35D0)
#define AOLOCGDIAIO_EIGFHEGGFHN_OFFSET UNITYSDK_OFFSET(0x184E37E0)
#define AOLOCGDIAIO_EOCIPOCBKHA_OFFSET UNITYSDK_OFFSET(0x184E24C0)
#define AOLOCGDIAIO_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x184E25A0)
#define AOLOCGDIAIO_GDEPNHHLFDI_OFFSET UNITYSDK_OFFSET(0x184E3810)
#define AOLOCGDIAIO_GHMAGGLIJKB_OFFSET UNITYSDK_OFFSET(0x184E2D50)
#define AOLOCGDIAIO_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0x184E2430)
#define AOLOCGDIAIO_KBCNMDMPLKF_OFFSET UNITYSDK_OFFSET(0x184E2BF0)
#define AOLOCGDIAIO_KMFJPDBLABA_OFFSET UNITYSDK_OFFSET(0x184E2E20)
#define AOLOCGDIAIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x184E2940)

inline static constexpr unsigned int AOLOCGDIAIO_TypeDefinitionIndex = 56824;

	class AOLOCGDIAIO : public ::System::Object
	{
	public:
		::RPG::GameCore::ElationSkillResBakeConfig* MDANAGOKBBI; // 0x10
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* EALOHJKCDGO; // 0x20
		::RPG::GameCore::SingleElationSkillResBakeConfig* HNLPJPJFNOL; // 0x28
		::System::String* EBCJLEJPGPC; // 0x30
		::DOPPLDOEKFA* GDLNOPLNNJC; // 0x38
		::System::String* LIJNCANLLMC; // 0x40
		::System::Single MLNKKEDOHMF; // 0x48
		::System::Single PCOBIKOHGKB; // 0x4C
		::System::Single HAMLEPGAIFC; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_CTOR_OFFSET))(this);
		}

		static ::AOLOCGDIAIO* IAONPECOKLB(::RPG::GameCore::TaskContext* a1)
		{
			return ((::AOLOCGDIAIO*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_IAONPECOKLB_OFFSET))(a1);
		}

		static ::AOLOCGDIAIO* EOCIPOCBKHA(::RPG::GameCore::TaskContext* a1)
		{
			return ((::AOLOCGDIAIO*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_EOCIPOCBKHA_OFFSET))(a1);
		}

		::System::Void KPJGDHLENIP(::DOPPLDOEKFA* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DOPPLDOEKFA*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KBCNMDMPLKF(::RPG::GameCore::SkillType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillType, ::System::Single))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_KBCNMDMPLKF_OFFSET))(this, a1, a2);
		}

		::System::Boolean GHMAGGLIJKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_GHMAGGLIJKB_OFFSET))(this);
		}

		::System::Boolean FHLALJENMHB(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_FHLALJENMHB_OFFSET))(this, a1);
		}

		::System::Void BJPFKNECHPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_BJPFKNECHPL_OFFSET))(this);
		}

		::System::Void KMFJPDBLABA(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_KMFJPDBLABA_OFFSET))(this, a1, a2);
		}

		::System::Void AFPLLGLFBPJ(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_AFPLLGLFBPJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean BKKKEKPHFJA(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_BKKKEKPHFJA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMDHGKEFBCK(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_DMDHGKEFBCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean EIGFHEGGFHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_EIGFHEGGFHN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* DJMOOLAIGEO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::String* GDEPNHHLFDI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_GDEPNHHLFDI_OFFSET))(this);
		}

		::System::Single AEAACHAGGCJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AOLOCGDIAIO_AEAACHAGGCJ_OFFSET))(this);
		}

	};

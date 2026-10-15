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

#define AOLOCGDIAIO_AEAACHAGGCJ_OFFSET UNITYSDK_OFFSET(0x158B6E80)
#define AOLOCGDIAIO_BJPFKNECHPL_OFFSET UNITYSDK_OFFSET(0x158B66F0)
#define AOLOCGDIAIO_BKKKEKPHFJA_OFFSET UNITYSDK_OFFSET(0x158B6B90)
#define AOLOCGDIAIO_CTOR_OFFSET UNITYSDK_OFFSET(0x158B6E90)
#define AOLOCGDIAIO_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x158B6E60)
#define AOLOCGDIAIO_DMDHGKEFBCK_OFFSET UNITYSDK_OFFSET(0x158B6C30)
#define AOLOCGDIAIO_EIGFHEGGFHN_OFFSET UNITYSDK_OFFSET(0x158B6E40)
#define AOLOCGDIAIO_EOCIPOCBKHA_OFFSET UNITYSDK_OFFSET(0x158B5DF0)
#define AOLOCGDIAIO_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0x158B5ED0)
#define AOLOCGDIAIO_GDEPNHHLFDI_OFFSET UNITYSDK_OFFSET(0x158B6E70)
#define AOLOCGDIAIO_GHMAGGLIJKB_OFFSET UNITYSDK_OFFSET(0x158B6690)
#define AOLOCGDIAIO_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0x158B5D60)
#define AOLOCGDIAIO_KBCNMDMPLKF_OFFSET UNITYSDK_OFFSET(0x158B6530)
#define AOLOCGDIAIO_KMFJPDBLABA_OFFSET UNITYSDK_OFFSET(0x158B6770)
#define AOLOCGDIAIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158B6280)

inline static constexpr unsigned int AOLOCGDIAIO_TypeDefinitionIndex = 55626;

	class AOLOCGDIAIO : public ::System::Object
	{
	public:
		::System::String* LIJNCANLLMC; // 0x10
		::DOPPLDOEKFA* GDLNOPLNNJC; // 0x18
		::RPG::GameCore::ElationSkillResBakeConfig* MDANAGOKBBI; // 0x20
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
		::System::String* EBCJLEJPGPC; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* EALOHJKCDGO; // 0x38
		::RPG::GameCore::SingleElationSkillResBakeConfig* HNLPJPJFNOL; // 0x40
		::System::Single HAMLEPGAIFC; // 0x48
		::System::Single PCOBIKOHGKB; // 0x4C
		::System::Single MLNKKEDOHMF; // 0x50
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

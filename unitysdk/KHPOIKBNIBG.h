#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertTutorialOperationType.h"
#include "unitysdk/System/Object.h"
class PFEKPLADKKC;
namespace System { class Action; }
namespace System { class String; }

#define KHPOIKBNIBG_ADD_ONRULECHANGED_OFFSET UNITYSDK_OFFSET(0x197A1700)
#define KHPOIKBNIBG_BJCNLIGKEDN_OFFSET UNITYSDK_OFFSET(0x197A17C0)
#define KHPOIKBNIBG_CTOR_OFFSET UNITYSDK_OFFSET(0x197A1FD0)
#define KHPOIKBNIBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197A1F70)
#define KHPOIKBNIBG_DJCDOBJOFFF_1_OFFSET UNITYSDK_OFFSET(0x197A1DC0)
#define KHPOIKBNIBG_DJCDOBJOFFF_OFFSET UNITYSDK_OFFSET(0x197A1D60)
#define KHPOIKBNIBG_FEKFHHAGOLO_OFFSET UNITYSDK_OFFSET(0x197A1B20)
#define KHPOIKBNIBG_GET_CURRENTRULE_OFFSET UNITYSDK_OFFSET(0x197A1690)
#define KHPOIKBNIBG_LIPGHEHEMDJ_1_OFFSET UNITYSDK_OFFSET(0x197A1EA0)
#define KHPOIKBNIBG_LIPGHEHEMDJ_OFFSET UNITYSDK_OFFSET(0x197A1E40)
#define KHPOIKBNIBG_MEFNJIHFCMO_OFFSET UNITYSDK_OFFSET(0x197A16B0)
#define KHPOIKBNIBG_OHJLHFOJLBA_OFFSET UNITYSDK_OFFSET(0x197A1CD0)
#define KHPOIKBNIBG_REMOVE_ONRULECHANGED_OFFSET UNITYSDK_OFFSET(0x197A1760)
#define KHPOIKBNIBG_SET_CURRENTRULE_OFFSET UNITYSDK_OFFSET(0x197A16A0)

inline static constexpr unsigned int KHPOIKBNIBG_TypeDefinitionIndex = 77047;

	class KHPOIKBNIBG : public ::System::Object
	{
	public:
		::PFEKPLADKKC* _CurrentRule_k__BackingField; // 0x10
		::System::Action* IDLDNPGDGOK; // 0x18
		::System::Action* OnRuleChanged; // 0x20
		::System::UInt32 LFLEGOBDGGL; // 0x28
		::System::UInt32 DNLIGDAAJAA; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_CTOR_OFFSET))(this);
		}

		::PFEKPLADKKC* get_CurrentRule()
		{
			return ((::PFEKPLADKKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_GET_CURRENTRULE_OFFSET))(this);
		}

		::System::Void set_CurrentRule(::PFEKPLADKKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFEKPLADKKC*))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_SET_CURRENTRULE_OFFSET))(this, a1);
		}

		::System::Boolean MEFNJIHFCMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_MEFNJIHFCMO_OFFSET))(this);
		}

		::System::Void add_OnRuleChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_ADD_ONRULECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnRuleChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_REMOVE_ONRULECHANGED_OFFSET))(this, a1);
		}

		::System::UInt32 BJCNLIGKEDN(::PFEKPLADKKC* a1, ::System::Action* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::PFEKPLADKKC*, ::System::Action*))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_BJCNLIGKEDN_OFFSET))(this, a1, a2);
		}

		::System::Void OHJLHFOJLBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_OHJLHFOJLBA_OFFSET))(this, a1);
		}

		::System::Boolean DJCDOBJOFFF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_DJCDOBJOFFF_OFFSET))(this, a1);
		}

		::System::Boolean DJCDOBJOFFF_1(::System::UInt32 a1, ::RPG::GameCore::ComicDessertTutorialOperationType a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ComicDessertTutorialOperationType))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_DJCDOBJOFFF_1_OFFSET))(this, a1, a2);
		}

		::System::Void LIPGHEHEMDJ(::System::UInt32 a1, ::RPG::GameCore::ComicDessertTutorialOperationType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ComicDessertTutorialOperationType))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_LIPGHEHEMDJ_OFFSET))(this, a1, a2);
		}

		::System::Void LIPGHEHEMDJ_1(::System::UInt32 a1, ::RPG::GameCore::ComicDessertTutorialOperationType a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ComicDessertTutorialOperationType, ::System::Int32))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_LIPGHEHEMDJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* FEKFHHAGOLO(::PFEKPLADKKC* a1)
		{
			return ((::System::String*(*)(::PVOID, ::PFEKPLADKKC*))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_FEKFHHAGOLO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPOIKBNIBG_DISPOSE_OFFSET))(this);
		}

	};

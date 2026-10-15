#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class HeliobusSNSQuickPost; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NJJIBGPFONJ_AEMABNHMCAI_OFFSET UNITYSDK_OFFSET(0xBC190D0)
#define NJJIBGPFONJ_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xBC19010)
#define NJJIBGPFONJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC18500)
#define NJJIBGPFONJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC185F0)
#define NJJIBGPFONJ_DNGKEBIBKLA_OFFSET UNITYSDK_OFFSET(0xBC18CF0)
#define NJJIBGPFONJ_HBLGHOCOHAL_OFFSET UNITYSDK_OFFSET(0xBC18F30)
#define NJJIBGPFONJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC187F0)
#define NJJIBGPFONJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC19340)
#define NJJIBGPFONJ_TICK_OFFSET UNITYSDK_OFFSET(0xBC19390)

inline static constexpr unsigned int NJJIBGPFONJ_TypeDefinitionIndex = 52923;

	class NJJIBGPFONJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LevelGraphComponent* LIGDIMNGMAA; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* JPEFFCLHJLO; // 0x28
		::RPG::GameCore::HeliobusSNSQuickPost* OFKGLJOAMLD; // 0x30
		::KFELGAIGHAP* DFDEFDBLMJB; // 0x38
		// static const ::System::String* AKDEDAOBLEN; // 0x0
		// static const ::System::String* BJPLHPFOEAP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HeliobusSNSQuickPost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HeliobusSNSQuickPost*))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Boolean AEMABNHMCAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_AEMABNHMCAI_OFFSET))(this);
		}

		::System::Void DNGKEBIBKLA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_DNGKEBIBKLA_OFFSET))(this, a1);
		}

		::System::Void HBLGHOCOHAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJJIBGPFONJ_HBLGHOCOHAL_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_2.h"
class EKFMIDBJDIA;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreateOrigamiByPropStateChange; }
namespace RPG::GameCore { class MazePuzzleOrigamiColonyRow; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGCAOECFEGM_AEGIAGFHBHB_OFFSET UNITYSDK_OFFSET(0xC70C7F0)
#define OGCAOECFEGM_CTOR_OFFSET UNITYSDK_OFFSET(0xC70BF70)
#define OGCAOECFEGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC70BF80)
#define OGCAOECFEGM_ECEBDIPBCGN_OFFSET UNITYSDK_OFFSET(0xC70C9E0)
#define OGCAOECFEGM_HOODGGALJEL_OFFSET UNITYSDK_OFFSET(0xC70C850)
#define OGCAOECFEGM_LJKLOKHHIEC_OFFSET UNITYSDK_OFFSET(0xC70C010)
#define OGCAOECFEGM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC70C0F0)
#define OGCAOECFEGM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC70C930)
#define OGCAOECFEGM_TICK_OFFSET UNITYSDK_OFFSET(0xC70C980)

inline static constexpr unsigned int OGCAOECFEGM_TypeDefinitionIndex = 53865;

	class OGCAOECFEGM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CreateOrigamiByPropStateChange* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* HIJFAMPOEME; // 0x20
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::MapPropDef*, ::System::Int32>>* JBOKMBGMFLJ; // 0x38
		::RPG::GameCore::MazePuzzleOrigamiColonyRow* CLDJDHCJFFD; // 0x40
		::RPG::Client::RuntimeGroupManager* KDCJFIMPKLP; // 0x48
		::System::UInt32 KGGMOFBNALD; // 0x50
		::System::Boolean MAPILNBMEIE; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateOrigamiByPropStateChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateOrigamiByPropStateChange*))((::PBYTE)hIl2Cpp + OGCAOECFEGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCAOECFEGM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCAOECFEGM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCAOECFEGM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGCAOECFEGM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean AEGIAGFHBHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCAOECFEGM_AEGIAGFHBHB_OFFSET))(this);
		}

		::System::Void HOODGGALJEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCAOECFEGM_HOODGGALJEL_OFFSET))(this);
		}

		::System::Void LJKLOKHHIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGCAOECFEGM_LJKLOKHHIEC_OFFSET))(this);
		}

		::System::Void ECEBDIPBCGN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OGCAOECFEGM_ECEBDIPBCGN_OFFSET))(this, a1);
		}

	};

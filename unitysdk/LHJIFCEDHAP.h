#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LHJIFCEDHAP_NDCJAJHGHCO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropCurveSetStartPoint; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define LHJIFCEDHAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6B50F0)
#define LHJIFCEDHAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6B5100)
#define LHJIFCEDHAP_INMFMFPMMOC_OFFSET UNITYSDK_OFFSET(0xB6B5AA0)
#define LHJIFCEDHAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6B52D0)
#define LHJIFCEDHAP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB6B5220)
#define LHJIFCEDHAP_TICK_OFFSET UNITYSDK_OFFSET(0xB6B5A40)

	class LHJIFCEDHAP : public ::GELIALJDFBL
	{
	public:
		::System::String* IJMGEMMNNPI; // 0x18
		::RPG::GameCore::PropCurveSetStartPoint* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x30
		::LHJIFCEDHAP_NDCJAJHGHCO* MBOEDFCNCJF; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropCurveSetStartPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropCurveSetStartPoint*))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_TICK_OFFSET))(this, a1);
		}

		::System::Void INMFMFPMMOC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHJIFCEDHAP_INMFMFPMMOC_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class CreateEmojiBubbleParam; }
namespace RPG::GameCore { class ShowEmojiBubble; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PNCCGFBICDE_CTOR_OFFSET UNITYSDK_OFFSET(0x184A9AD0)
#define PNCCGFBICDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184A9AE0)
#define PNCCGFBICDE_LIHCEOMMJOD_OFFSET UNITYSDK_OFFSET(0x184AA060)
#define PNCCGFBICDE_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0x184AA120)
#define PNCCGFBICDE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x184A9FF0)
#define PNCCGFBICDE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x184A9BA0)
#define PNCCGFBICDE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x184A9F40)
#define PNCCGFBICDE_TICK_OFFSET UNITYSDK_OFFSET(0x184A9F90)

inline static constexpr unsigned int PNCCGFBICDE_TypeDefinitionIndex = 59903;

	class PNCCGFBICDE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowEmojiBubble* OFKGLJOAMLD; // 0x20
		::RPG::Client::CreateEmojiBubbleParam* CPOBDMDEHNK; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEmojiBubble* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEmojiBubble*))((::PBYTE)hIl2Cpp + PNCCGFBICDE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCCGFBICDE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCCGFBICDE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCCGFBICDE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNCCGFBICDE_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNCCGFBICDE_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void LIHCEOMMJOD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNCCGFBICDE_LIHCEOMMJOD_OFFSET))(this, a1);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNCCGFBICDE_LLDKMAMCNIA_OFFSET))(this);
		}

	};

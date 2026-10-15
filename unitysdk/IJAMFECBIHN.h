#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IJAMFECBIHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1644B080)
#define IJAMFECBIHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1644B4E0)
#define IJAMFECBIHN_GCCDBBHLLMO_OFFSET UNITYSDK_OFFSET(0x1644B5E0)
#define IJAMFECBIHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1644B090)
#define IJAMFECBIHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1644B440)
#define IJAMFECBIHN_TICK_OFFSET UNITYSDK_OFFSET(0x1644B580)

inline static constexpr unsigned int IJAMFECBIHN_TypeDefinitionIndex = 58330;

	class IJAMFECBIHN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropInitPuzzle* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + IJAMFECBIHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAMFECBIHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAMFECBIHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJAMFECBIHN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IJAMFECBIHN_TICK_OFFSET))(this, a1);
		}

		::System::Void GCCDBBHLLMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJAMFECBIHN_GCCDBBHLLMO_OFFSET))(this, a1);
		}

	};

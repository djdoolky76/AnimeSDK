#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMoveArrived; }
namespace System { class Object; }
namespace System { class String; }

#define GCCBOJPECJK_CTOR_OFFSET UNITYSDK_OFFSET(0x19E9A390)
#define GCCBOJPECJK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19E9A410)
#define GCCBOJPECJK_HNOLFHJAMGI_OFFSET UNITYSDK_OFFSET(0x19E9A960)
#define GCCBOJPECJK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19E9A680)
#define GCCBOJPECJK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19E9A580)
#define GCCBOJPECJK_TICK_OFFSET UNITYSDK_OFFSET(0x19E9A8C0)

inline static constexpr unsigned int GCCBOJPECJK_TypeDefinitionIndex = 60187;

	class GCCBOJPECJK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitPropCurveMoveArrived* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
		::System::String* PEEEONAMDHN; // 0x30
		::System::String* IJMGEMMNNPI; // 0x38
		::KFELGAIGHAP* HFOFIODMFGB; // 0x40
		::System::UInt32 MDFOOOPHGKC; // 0x48
		::System::UInt32 NNGMJFCCMAI; // 0x4C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMoveArrived* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMoveArrived*))((::PBYTE)hIl2Cpp + GCCBOJPECJK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCBOJPECJK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCBOJPECJK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCBOJPECJK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCCBOJPECJK_TICK_OFFSET))(this, a1);
		}

		::System::Void HNOLFHJAMGI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCCBOJPECJK_HNOLFHJAMGI_OFFSET))(this, a1);
		}

	};

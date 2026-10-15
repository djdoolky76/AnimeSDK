#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EBLHIMCKJIJ;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPropCurveMovePaused; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define NEKANHCFAJJ_CKBCLDKJJDC_OFFSET UNITYSDK_OFFSET(0xBB64720)
#define NEKANHCFAJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB64110)
#define NEKANHCFAJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB64230)
#define NEKANHCFAJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB644C0)
#define NEKANHCFAJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB643A0)
#define NEKANHCFAJJ_TICK_OFFSET UNITYSDK_OFFSET(0xBB64640)

inline static constexpr unsigned int NEKANHCFAJJ_TypeDefinitionIndex = 58916;

	class NEKANHCFAJJ : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::String* IJMGEMMNNPI; // 0x28
		::System::WeakReference_1<::EBLHIMCKJIJ*>* HPIHLICKLAD; // 0x30
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x38
		::RPG::GameCore::WaitPropCurveMovePaused* OFKGLJOAMLD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_TICK_OFFSET))(this, a1);
		}

		::System::Void CKBCLDKJJDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEKANHCFAJJ_CKBCLDKJJDC_OFFSET))(this, a1);
		}

	};

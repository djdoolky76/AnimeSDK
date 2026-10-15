#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TryShowFateEntranceUI; }
namespace System { class Exception; }

#define LAMOKDDOIMP_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xB5E8510)
#define LAMOKDDOIMP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5E8190)
#define LAMOKDDOIMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5E81A0)
#define LAMOKDDOIMP_LPCMOAPLJPN_OFFSET UNITYSDK_OFFSET(0xB5E8570)
#define LAMOKDDOIMP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5E8240)
#define LAMOKDDOIMP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5E84C0)
#define LAMOKDDOIMP_TICK_OFFSET UNITYSDK_OFFSET(0xB5E81E0)
#define LAMOKDDOIMP__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xB5E8640)
#define LAMOKDDOIMP__ONTASKBEGIN_B__3_1_OFFSET UNITYSDK_OFFSET(0xB5E86A0)

inline static constexpr unsigned int LAMOKDDOIMP_TypeDefinitionIndex = 58806;

	class LAMOKDDOIMP : public ::GELIALJDFBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TryShowFateEntranceUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TryShowFateEntranceUI*))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void LPCMOAPLJPN(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + LAMOKDDOIMP_LPCMOAPLJPN_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOKDDOIMP__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + LAMOKDDOIMP__ONTASKBEGIN_B__3_1_OFFSET))(this, a1);
		}

	};

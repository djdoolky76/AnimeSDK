#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define AKKHJPODFDG_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0x197A5C20)
#define AKKHJPODFDG_CTOR_OFFSET UNITYSDK_OFFSET(0x197A5820)
#define AKKHJPODFDG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x197A5990)
#define AKKHJPODFDG_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x197A6980)
#define AKKHJPODFDG_HGBMPNEDDHM_OFFSET UNITYSDK_OFFSET(0x197A68A0)
#define AKKHJPODFDG_HGPNDCPAGJM_OFFSET UNITYSDK_OFFSET(0x197A6240)
#define AKKHJPODFDG_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x197A6480)
#define AKKHJPODFDG_KHLEKJFAGLH_OFFSET UNITYSDK_OFFSET(0x197A6690)
#define AKKHJPODFDG_ONSKIP_OFFSET UNITYSDK_OFFSET(0x197A6330)
#define AKKHJPODFDG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x197A5B90)
#define AKKHJPODFDG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x197A6280)
#define AKKHJPODFDG_TICK_OFFSET UNITYSDK_OFFSET(0x197A62D0)
#define AKKHJPODFDG___SHOWUI_B__6_0_OFFSET UNITYSDK_OFFSET(0x197A6990)

inline static constexpr unsigned int AKKHJPODFDG_TypeDefinitionIndex = 59976;

	class AKKHJPODFDG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::KFELGAIGHAP* GMMCBEFIKHL; // 0x28
		::KFELGAIGHAP* BKCCFPHPIHM; // 0x30
		::KFELGAIGHAP* CKMKMCAOLOG; // 0x38
		::RPG::GameCore::ShowUI* OFKGLJOAMLD; // 0x40
		// static const ::System::String* NKOODGOCHHI; // 0x0
		// static const ::System::String* CDMMOBINDKJ; // 0x0
		// static const ::System::String* CGNDEOCKKCP; // 0x0
		// static const ::System::String* OLILKDDCBHD; // 0x0
		// static const ::System::String* IHOGADJKNII; // 0x0
		// static const ::System::String* OCBKJJBGKKG; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUI*))((::PBYTE)hIl2Cpp + AKKHJPODFDG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKKHJPODFDG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_ONSKIP_OFFSET))(this);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void HGPNDCPAGJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_HGPNDCPAGJM_OFFSET))(this);
		}

		::System::Void HGBMPNEDDHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKKHJPODFDG_HGBMPNEDDHM_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_JNIKOAEAEHB_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* KHLEKJFAGLH()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_KHLEKJFAGLH_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void __ShowUI_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKHJPODFDG___SHOWUI_B__6_0_OFFSET))(this);
		}

	};

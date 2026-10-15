#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class DronesPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BGDLDFPMHLC_CTOR_OFFSET UNITYSDK_OFFSET(0xB178F90)
#define BGDLDFPMHLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB179590)
#define BGDLDFPMHLC_GJFCEJJJFFK_OFFSET UNITYSDK_OFFSET(0xB179E00)
#define BGDLDFPMHLC_JGEOBLFJMKE_OFFSET UNITYSDK_OFFSET(0xB1798C0)
#define BGDLDFPMHLC_MIKANICKFAP_OFFSET UNITYSDK_OFFSET(0xB17A000)
#define BGDLDFPMHLC_OHIOGJLIEFD_OFFSET UNITYSDK_OFFSET(0xB179B10)
#define BGDLDFPMHLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1791D0)
#define BGDLDFPMHLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1793E0)
#define BGDLDFPMHLC_TICK_OFFSET UNITYSDK_OFFSET(0xB17A300)

inline static constexpr unsigned int BGDLDFPMHLC_TypeDefinitionIndex = 58091;

	class BGDLDFPMHLC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* NDAOBOMHGDA; // 0x20
		::KFELGAIGHAP* BKCCIMBLMHN; // 0x28
		::KFELGAIGHAP* NLGPHOKCGAC; // 0x30
		::RPG::GameCore::DronesPuzzleEventListener* IGHAHBNLIJA; // 0x38
		::KFELGAIGHAP* BCAHIEKECBN; // 0x40
		::KFELGAIGHAP* MGFEGFCANBP; // 0x48
		::System::Boolean JGLBOEPDEOB; // 0x50
		::System::Boolean IPLEKIHBLHE; // 0x51
		::System::Boolean APMJOKCHJID; // 0x52
		::System::Boolean NPNCKMIKGAK; // 0x53
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DronesPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DronesPuzzleEventListener*))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_DISPOSE_OFFSET))(this);
		}

		::System::Void JGEOBLFJMKE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_JGEOBLFJMKE_OFFSET))(this, a1);
		}

		::System::Void OHIOGJLIEFD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_OHIOGJLIEFD_OFFSET))(this, a1);
		}

		::System::Void GJFCEJJJFFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_GJFCEJJJFFK_OFFSET))(this, a1);
		}

		::System::Void MIKANICKFAP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_MIKANICKFAP_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BGDLDFPMHLC_TICK_OFFSET))(this, a1);
		}

	};

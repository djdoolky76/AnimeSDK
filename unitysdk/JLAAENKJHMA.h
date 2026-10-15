#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNBOAMEBAOE.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::Client { class Map; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PerformanceTransition; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define JLAAENKJHMA_ACBNIOGJFLK_OFFSET UNITYSDK_OFFSET(0xB229800)
#define JLAAENKJHMA_BMIHEGFLGNH_OFFSET UNITYSDK_OFFSET(0xB22B850)
#define JLAAENKJHMA_CIADCOCBJDB_OFFSET UNITYSDK_OFFSET(0xB22AE70)
#define JLAAENKJHMA_CKJDFGKIMBC_OFFSET UNITYSDK_OFFSET(0xB22A980)
#define JLAAENKJHMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB228AD0)
#define JLAAENKJHMA_DDLKFCCLOCD_OFFSET UNITYSDK_OFFSET(0xB22B720)
#define JLAAENKJHMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB229B00)
#define JLAAENKJHMA_DONCFHNHHPC_OFFSET UNITYSDK_OFFSET(0xB229E60)
#define JLAAENKJHMA_DPCEDFABNNE_OFFSET UNITYSDK_OFFSET(0xB22B920)
#define JLAAENKJHMA_FBDGNKHHGDL_OFFSET UNITYSDK_OFFSET(0xB22B090)
#define JLAAENKJHMA_FFOJKGONJFL_OFFSET UNITYSDK_OFFSET(0xB22BB70)
#define JLAAENKJHMA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB22AEB0)
#define JLAAENKJHMA_HENKODGDBNB_OFFSET UNITYSDK_OFFSET(0xB22B460)
#define JLAAENKJHMA_HKGCEMEDAHL_OFFSET UNITYSDK_OFFSET(0xB2297B0)
#define JLAAENKJHMA_HMJHHNIHFFB_OFFSET UNITYSDK_OFFSET(0xB22B5E0)
#define JLAAENKJHMA_JFJALLPCLBJ_OFFSET UNITYSDK_OFFSET(0xB229D60)
#define JLAAENKJHMA_MBMICAFLADF_OFFSET UNITYSDK_OFFSET(0xB22A620)
#define JLAAENKJHMA_MGMKBOAFFHI_OFFSET UNITYSDK_OFFSET(0xB22B7F0)
#define JLAAENKJHMA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xB22B200)
#define JLAAENKJHMA_ONSKIP_OFFSET UNITYSDK_OFFSET(0xB22AEC0)
#define JLAAENKJHMA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB22A280)
#define JLAAENKJHMA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB22AC40)
#define JLAAENKJHMA_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xB22ADA0)
#define JLAAENKJHMA_TICK_OFFSET UNITYSDK_OFFSET(0xB22A050)

inline static constexpr unsigned int JLAAENKJHMA_TypeDefinitionIndex = 53075;

	class JLAAENKJHMA : public ::BNBOAMEBAOE
	{
	public:
		::RPG::Client::Promises::Promise* LKFANGBCMNJ; // 0x18
		::RPG::GameCore::TaskContext* LANHALCJKIM; // 0x20
		::RPG::GameCore::PerformanceTransition* OFKGLJOAMLD; // 0x28
		::GELIALJDFBL* CJHJNLGOJLA; // 0x30
		::KFELGAIGHAP* LPGMOLOFLOP; // 0x38
		::KFELGAIGHAP* DFPELEEAMOL; // 0x40
		::System::Boolean PLNOCAGEEIH; // 0x48
		::System::Boolean FPEJBIKHPHF; // 0x49
		::System::Boolean OGCIFIFIAEP; // 0x4A
		::System::Byte _padding0[0x1];
		::System::UInt32 ENFEOOMNNJN; // 0x4C
		::RPG::GameCore::ScreenTransferReason FBPGLJAFBHF; // 0x50
		::System::Int32 GAHGABBBDFF; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PerformanceTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PerformanceTransition*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLAAENKJHMA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_ONTASKRESET_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_SETNEXTTASK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* CIADCOCBJDB()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_CIADCOCBJDB_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLAAENKJHMA_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void CKJDFGKIMBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_CKJDFGKIMBC_OFFSET))(this);
		}

		::System::Void MBMICAFLADF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_MBMICAFLADF_OFFSET))(this);
		}

		::System::Void HENKODGDBNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_HENKODGDBNB_OFFSET))(this);
		}

		::System::Void DDLKFCCLOCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_DDLKFCCLOCD_OFFSET))(this);
		}

		::System::Void MGMKBOAFFHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_MGMKBOAFFHI_OFFSET))(this, a1);
		}

		::System::Void BMIHEGFLGNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_BMIHEGFLGNH_OFFSET))(this, a1);
		}

		::System::Void DPCEDFABNNE(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_DPCEDFABNNE_OFFSET))(this, a1);
		}

		::System::Void FBDGNKHHGDL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JLAAENKJHMA_FBDGNKHHGDL_OFFSET))(this, a1, a2);
		}

		::System::Void HMJHHNIHFFB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JLAAENKJHMA_HMJHHNIHFFB_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferReason HKGCEMEDAHL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_HKGCEMEDAHL_OFFSET))(this, a1);
		}

		::System::Void FFOJKGONJFL(::RPG::Client::Map* a1, ::RPG::GameCore::DynamicFloat* a2, ::RPG::GameCore::DynamicFloat* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*, ::RPG::GameCore::DynamicFloat*, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + JLAAENKJHMA_FFOJKGONJFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DONCFHNHHPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_DONCFHNHHPC_OFFSET))(this);
		}

		::System::Void ACBNIOGJFLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_ACBNIOGJFLK_OFFSET))(this);
		}

		::System::Void JFJALLPCLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAAENKJHMA_JFJALLPCLBJ_OFFSET))(this);
		}

	};

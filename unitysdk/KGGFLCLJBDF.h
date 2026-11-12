#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
class GELIALJDFBL;
class KNKPLOGICFO;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define KGGFLCLJBDF_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0xBC72900)
#define KGGFLCLJBDF_AHABDBEBNIM_OFFSET UNITYSDK_OFFSET(0xBC71650)
#define KGGFLCLJBDF_BJCLAPOBKBA_OFFSET UNITYSDK_OFFSET(0xBC72C20)
#define KGGFLCLJBDF_BMALDMHOIML_OFFSET UNITYSDK_OFFSET(0xBC72F20)
#define KGGFLCLJBDF_BMIHEGFLGNH_OFFSET UNITYSDK_OFFSET(0xBC72750)
#define KGGFLCLJBDF_CCIBHCHLLCN_OFFSET UNITYSDK_OFFSET(0xBC725F0)
#define KGGFLCLJBDF_CGIMOKGHLDH_OFFSET UNITYSDK_OFFSET(0xBC71DE0)
#define KGGFLCLJBDF_CTOR_OFFSET UNITYSDK_OFFSET(0xBC712C0)
#define KGGFLCLJBDF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC71560)
#define KGGFLCLJBDF_FBMNACFKDEC_OFFSET UNITYSDK_OFFSET(0xBC724D0)
#define KGGFLCLJBDF_FPNKLHMGNKD_OFFSET UNITYSDK_OFFSET(0xBC72D40)
#define KGGFLCLJBDF_HKGCEMEDAHL_OFFSET UNITYSDK_OFFSET(0xBC714E0)
#define KGGFLCLJBDF_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0xBC726F0)
#define KGGFLCLJBDF_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0xBC72010)
#define KGGFLCLJBDF_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0xBC72830)
#define KGGFLCLJBDF_LCALFPHNHHD_OFFSET UNITYSDK_OFFSET(0xBC72AB0)
#define KGGFLCLJBDF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xBC72590)
#define KGGFLCLJBDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC71750)
#define KGGFLCLJBDF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC72390)
#define KGGFLCLJBDF_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xBC71700)
#define KGGFLCLJBDF_TICK_OFFSET UNITYSDK_OFFSET(0xBC723E0)
#define KGGFLCLJBDF___PROMISEFULLKEEPTIMEOUT_B__19_0_OFFSET UNITYSDK_OFFSET(0xBC73100)
#define KGGFLCLJBDF___STARTFULLWITHTEXT_B__14_0_OFFSET UNITYSDK_OFFSET(0xBC72FE0)

inline static constexpr unsigned int KGGFLCLJBDF_TypeDefinitionIndex = 59538;

	class KGGFLCLJBDF : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Promises::Promise* JCCIDPKEOPA; // 0x18
		::KNKPLOGICFO* MMKPAPCNEAC; // 0x20
		::RPG::Client::Promises::Promise* OCEINMJMBDG; // 0x28
		::RPG::GameCore::PlayScreenTransfer* OFKGLJOAMLD; // 0x30
		::RPG::Client::Promises::Promise* FBGJLIMGKIA; // 0x38
		::RPG::Client::Promises::Promise* KALNJICBIGJ; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::Exception* LMLAIDOEMCK; // 0x50
		::GELIALJDFBL* CJHJNLGOJLA; // 0x58
		::System::Boolean OGCIFIFIAEP; // 0x60
		::System::Boolean JNPKMIGKDJP; // 0x61
		::System::Byte _padding0[0x2];
		::RPG::GameCore::ScreenTransferReason FBPGLJAFBHF; // 0x64
		// static const ::System::String* PFGNCCCMBMI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayScreenTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayScreenTransfer*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferReason HKGCEMEDAHL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_HKGCEMEDAHL_OFFSET))(this, a1);
		}

		::System::Void CCIBHCHLLCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_CCIBHCHLLCN_OFFSET))(this, a1);
		}

		::System::Void BMIHEGFLGNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_BMIHEGFLGNH_OFFSET))(this, a1);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_IJMONDLGAIP_OFFSET))(this);
		}

		::System::Void KEMLPODAFMF(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_KEMLPODAFMF_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_ABCMNBHIAKM_OFFSET))(this, a1);
		}

		::System::Void CGIMOKGHLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_CGIMOKGHLDH_OFFSET))(this);
		}

		::System::Void FBMNACFKDEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_FBMNACFKDEC_OFFSET))(this, a1);
		}

		::System::Void AHABDBEBNIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_AHABDBEBNIM_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* LCALFPHNHHD()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_LCALFPHNHHD_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* BJCLAPOBKBA()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_BJCLAPOBKBA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* FPNKLHMGNKD()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_FPNKLHMGNKD_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* BMALDMHOIML()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF_BMALDMHOIML_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __StartFullWithText_b__14_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF___STARTFULLWITHTEXT_B__14_0_OFFSET))(this);
		}

		::System::Void __PromiseFullKeepTimeout_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGFLCLJBDF___PROMISEFULLKEEPTIMEOUT_B__19_0_OFFSET))(this);
		}

	};

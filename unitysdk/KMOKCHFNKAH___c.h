#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPBMNEMLMBI;
class GJNEHIMBFMC;
class LFKNBJPPOGC;
class PMEMIDKDAFG;
class POLMJOOOBNK;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define KMOKCHFNKAH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB565270)
#define KMOKCHFNKAH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB5652B0)
#define KMOKCHFNKAH___C__ACTIVEEIDOLON_B__16_0_OFFSET UNITYSDK_OFFSET(0xB565730)
#define KMOKCHFNKAH___C__LEVELUPAVATAR_B__7_0_OFFSET UNITYSDK_OFFSET(0xB5652C0)
#define KMOKCHFNKAH___C__PROMOTEAVATAR_B__10_0_OFFSET UNITYSDK_OFFSET(0xB5654B0)
#define KMOKCHFNKAH___C__QUICKGROWAVATAR_B__11_0_OFFSET UNITYSDK_OFFSET(0xB5654C0)
#define KMOKCHFNKAH___C__UNLOCKTRACENODE_B__15_0_OFFSET UNITYSDK_OFFSET(0xB5656B0)

inline static constexpr unsigned int KMOKCHFNKAH___c_TypeDefinitionIndex = 62765;

	class KMOKCHFNKAH___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DPBMNEMLMBI*>** StaticGet___9__7_0()
		{
			return (::System::Action_1<::DPBMNEMLMBI*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D830);
		}

		static ::System::Action_1<::POLMJOOOBNK*>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::POLMJOOOBNK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D838);
		}

		static ::System::Action_1<::GJNEHIMBFMC*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::GJNEHIMBFMC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D840);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D848);
		}

		static ::System::Action_1<::PMEMIDKDAFG*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::PMEMIDKDAFG*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D850);
		}

		static ::System::Action_1<::LFKNBJPPOGC*>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::LFKNBJPPOGC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C_CTOR_OFFSET))(this);
		}

		::System::Void _LevelUpAvatar_b__7_0(::DPBMNEMLMBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPBMNEMLMBI*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C__LEVELUPAVATAR_B__7_0_OFFSET))(this, a1);
		}

		::System::Void _PromoteAvatar_b__10_0(::LFKNBJPPOGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKNBJPPOGC*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C__PROMOTEAVATAR_B__10_0_OFFSET))(this, a1);
		}

		::System::Void _QuickGrowAvatar_b__11_0(::PMEMIDKDAFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEMIDKDAFG*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C__QUICKGROWAVATAR_B__11_0_OFFSET))(this, a1);
		}

		::System::Void _UnlockTraceNode_b__15_0(::POLMJOOOBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POLMJOOOBNK*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C__UNLOCKTRACENODE_B__15_0_OFFSET))(this, a1);
		}

		::System::Void _ActiveEidolon_b__16_0(::GJNEHIMBFMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJNEHIMBFMC*))((::PBYTE)hIl2Cpp + KMOKCHFNKAH___C__ACTIVEEIDOLON_B__16_0_OFFSET))(this, a1);
		}

	};

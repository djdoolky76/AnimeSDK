#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ALBNIGBDDKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x163CDE20)
#define ALBNIGBDDKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x163CDE60)
#define ALBNIGBDDKI___C___CREATEFORDEFAULT_B__1_0_OFFSET UNITYSDK_OFFSET(0x163CDE70)
#define ALBNIGBDDKI___C___CREATEFORMEMORY_B__2_1_OFFSET UNITYSDK_OFFSET(0x163CDEC0)
#define ALBNIGBDDKI___C___CREATEFORSTORY_B__3_6_OFFSET UNITYSDK_OFFSET(0x163CDF10)
#define ALBNIGBDDKI___C___CREATEFORSTORY_B__3_7_OFFSET UNITYSDK_OFFSET(0x163CE010)

inline static constexpr unsigned int ALBNIGBDDKI___c_TypeDefinitionIndex = 84347;

	class ALBNIGBDDKI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__3_6()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A00);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A08);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A10);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A18);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>** StaticGet___9__3_7()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALBNIGBDDKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* __CreateForDefault_b__1_0(::DCKGNOHECDC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___C___CREATEFORDEFAULT_B__1_0_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* __CreateForMemory_b__2_1(::DCKGNOHECDC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___C___CREATEFORMEMORY_B__2_1_OFFSET))(this, a1);
		}

		::System::Int32 __CreateForStory_b__3_6(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___C___CREATEFORSTORY_B__3_6_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* __CreateForStory_b__3_7(::DCKGNOHECDC* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + ALBNIGBDDKI___C___CREATEFORSTORY_B__3_7_OFFSET))(this, a1);
		}

	};

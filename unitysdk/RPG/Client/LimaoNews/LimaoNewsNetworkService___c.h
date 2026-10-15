#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPMONPAABKJ;
class GHBBMIJFIAD;
class JEGNOIJMBCA;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD3BFEB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD3BFEF0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xD3BFF00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0xD3BFF10)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0xD3BFF50)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsNetworkService___c_TypeDefinitionIndex = 80325;

	class LimaoNewsNetworkService___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::JEGNOIJMBCA*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::JEGNOIJMBCA*>**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1D5F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1D5F8);
		}

		static ::System::Action_1<::EPMONPAABKJ*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::EPMONPAABKJ*>**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1D600);
		}

		static ::System::Action_1<::GHBBMIJFIAD*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::GHBBMIJFIAD*>**)UnitySDK::FromName("RPG.Client.LimaoNews", "<>c")->GetStaticField(0x1D608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C_CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLimaoNewsOfficeSurveyWithFilter_b__2_0(::JEGNOIJMBCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGNOIJMBCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _SendLimaoNewsFinishClientReplyCsReq_b__6_0(::EPMONPAABKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPMONPAABKJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET))(this, a1);
		}

		::System::Void _SendLimaoNewsTrackSurveyCsReq_b__8_0(::GHBBMIJFIAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHBBMIJFIAD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET))(this, a1);
		}

	};
}

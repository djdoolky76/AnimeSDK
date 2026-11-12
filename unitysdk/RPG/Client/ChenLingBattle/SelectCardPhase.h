#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingBattle/GamePhase.h"
class FAHNFMCOJCH;
class GEPCOHMCAAJ;
class GOCODBMFHPH;
class HLCAKAJLKGO;
namespace RPG::Client::ChenLingBattle { class HandCard; }
namespace RPG::Client::ChenLingBattle { class PreviewSnapshot; }
namespace RPG::Client::ChenLingBattle { class SelectCardPhaseInfo; }
namespace RPG::Client::ChenLingBattle { class SelectCardPreviewSnapshot; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD3BFDC0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ENTERPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD3C1410)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_EXITPREVIEWMODE_OFFSET UNITYSDK_OFFSET(0xD3C1600)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_FINISHREFRESHCARD_OFFSET UNITYSDK_OFFSET(0xD3C19E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONENTER_OFFSET UNITYSDK_OFFSET(0xD3BFDD0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONLEAVE_OFFSET UNITYSDK_OFFSET(0xD3C03E0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REFRESHCARD_OFFSET UNITYSDK_OFFSET(0xD3C0580)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REQUESTSELLHANDCARD_OFFSET UNITYSDK_OFFSET(0xD3C0F50)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_SELECTCARD_OFFSET UNITYSDK_OFFSET(0xD3C0A20)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGREFRESHCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD3C07A0)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELECTCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD3C0D40)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET UNITYSDK_OFFSET(0xD3C1180)
#define RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__SELECTCARD_B__5_0_OFFSET UNITYSDK_OFFSET(0xD3C1A40)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SelectCardPhase_TypeDefinitionIndex = 78645;

	class SelectCardPhase : public ::RPG::Client::ChenLingBattle::GamePhase
	{
	public:
		::RPG::Client::ChenLingBattle::SelectCardPreviewSnapshot* _PreviewSnapshot; // 0x18
		::System::Void _ctor(::GOCODBMFHPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOCODBMFHPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnEnter(::System::Object* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONENTER_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OnLeave()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ONLEAVE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* RefreshCard()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REFRESHCARD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingRefreshCardScRsp(::FAHNFMCOJCH* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::FAHNFMCOJCH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGREFRESHCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SelectCard(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_SELECTCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSelectCardScRsp(::HLCAKAJLKGO* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::HLCAKAJLKGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELECTCARDSCRSP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* RequestSellHandCard(::RPG::Client::ChenLingBattle::HandCard* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::ChenLingBattle::HandCard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_REQUESTSELLHANDCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnChenLingSellHandCardScRsp(::GEPCOHMCAAJ* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::GEPCOHMCAAJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__ONCHENLINGSELLHANDCARDSCRSP_OFFSET))(this, a1);
		}

		::System::Void EnterPreviewMode(::RPG::Client::ChenLingBattle::PreviewSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::PreviewSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_ENTERPREVIEWMODE_OFFSET))(this, a1);
		}

		::System::Void ExitPreviewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_EXITPREVIEWMODE_OFFSET))(this);
		}

		::System::Void FinishRefreshCard(::RPG::Client::ChenLingBattle::SelectCardPhaseInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SelectCardPhaseInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE_FINISHREFRESHCARD_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _SelectCard_b__5_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SELECTCARDPHASE__SELECTCARD_B__5_0_OFFSET))(this);
		}

	};
}

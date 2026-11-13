#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJLFDFFBOHM.h"
#include "unitysdk/IBOLNDGHCBB_State.h"
#include "unitysdk/JCEMKEPNKEH.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
class LCCJKNEADPL;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }

#define IBOLNDGHCBB_APCKFBJNDFD_OFFSET UNITYSDK_OFFSET(0x188C15C0)
#define IBOLNDGHCBB_BGAJFIKEHGK_OFFSET UNITYSDK_OFFSET(0x188C3E80)
#define IBOLNDGHCBB_BNIBHPOLPAK_OFFSET UNITYSDK_OFFSET(0x188C14A0)
#define IBOLNDGHCBB_CBFJJDACDBB_OFFSET UNITYSDK_OFFSET(0x188C4130)
#define IBOLNDGHCBB_CNPCJHEMFFN_OFFSET UNITYSDK_OFFSET(0x188C0B40)
#define IBOLNDGHCBB_CTOR_OFFSET UNITYSDK_OFFSET(0x188C09B0)
#define IBOLNDGHCBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x188C1FC0)
#define IBOLNDGHCBB_EKEGOGDHEAM_OFFSET UNITYSDK_OFFSET(0x188C2BC0)
#define IBOLNDGHCBB_ELAKDEOOEMJ_OFFSET UNITYSDK_OFFSET(0x188C28F0)
#define IBOLNDGHCBB_GAMCGGKIPOP_OFFSET UNITYSDK_OFFSET(0x188C1570)
#define IBOLNDGHCBB_HKCCPPDNCDG_OFFSET UNITYSDK_OFFSET(0x188C4270)
#define IBOLNDGHCBB_HOMPENNFBNI_OFFSET UNITYSDK_OFFSET(0x188C4310)
#define IBOLNDGHCBB_JBAHNMNILFH_OFFSET UNITYSDK_OFFSET(0x188C3FF0)
#define IBOLNDGHCBB_JFBKIEGFFEJ_OFFSET UNITYSDK_OFFSET(0x188C4050)
#define IBOLNDGHCBB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x188C2690)
#define IBOLNDGHCBB_KAOEEKIOHII_OFFSET UNITYSDK_OFFSET(0x188C2930)
#define IBOLNDGHCBB_KPHALOGKMEC_OFFSET UNITYSDK_OFFSET(0x188C2D80)
#define IBOLNDGHCBB_LCLGFIPNGGD_OFFSET UNITYSDK_OFFSET(0x188C4A80)
#define IBOLNDGHCBB_LGNIGCICKGE_OFFSET UNITYSDK_OFFSET(0x188C40A0)
#define IBOLNDGHCBB_NJIEBJEICGI_OFFSET UNITYSDK_OFFSET(0x188C3CD0)
#define IBOLNDGHCBB_NNGMDAKCNGD_OFFSET UNITYSDK_OFFSET(0x188C49F0)
#define IBOLNDGHCBB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x188C0BB0)
#define IBOLNDGHCBB_PBIIIGEJOCB_OFFSET UNITYSDK_OFFSET(0x188C2220)
#define IBOLNDGHCBB_PJPIHOEJCBP_OFFSET UNITYSDK_OFFSET(0x188C4A90)
#define IBOLNDGHCBB_PKPCCNAMHPP_OFFSET UNITYSDK_OFFSET(0x188C2F60)
#define IBOLNDGHCBB_PNHGPNFCMLO_OFFSET UNITYSDK_OFFSET(0x188C3BE0)

inline static constexpr unsigned int IBOLNDGHCBB_TypeDefinitionIndex = 62367;

	class IBOLNDGHCBB : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x10
		::Il2CppArray<::System::Byte>* MKAMMOMKFPC; // 0x18
		::System::Action_1<::RPG::GameCore::BattleResultState>* IMKEDDPCEHJ; // 0x20
		::RPG::Client::Promises::Promise* MOEMENBDMIJ; // 0x28
		::System::Boolean KMIHKEPPEGM; // 0x30
		::System::Boolean KGIOCBCDJKF; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single EFKCJMFANEB; // 0x34
		::System::Boolean DFDHDJJMAEB; // 0x38
		::System::Boolean IICHAGMGKEE; // 0x39
		::System::Boolean GOECIPOALMN; // 0x3A
		::System::Boolean BPGGGKNBILK; // 0x3B
		::System::Boolean GDIOEMJGNGA; // 0x3C
		::System::Boolean OCJLCMJCDAO; // 0x3D
		::System::Boolean HLMAHOBGPKI; // 0x3E
		::System::Boolean NBNPPJNFLMK; // 0x3F
		::IBOLNDGHCBB_State DLNIGFGLPLJ; // 0x40
		::CJLFDFFBOHM PNPFCAAPHPN; // 0x44
		static ::System::Boolean* StaticGet_CGPCAPAEFDI()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBOLNDGHCBB")->GetStaticField(0x165E0);
		}

		// static const ::System::Object CJJOJNIKPFP; // 0x0
		::System::Void _ctor(::RPG::Client::BattleGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_CTOR_OFFSET))(this, a1);
		}

		::System::Void CNPCJHEMFFN(::System::Action_1<::RPG::GameCore::BattleResultState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::GameCore::BattleResultState>*))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_CNPCJHEMFFN_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_DISPOSE_OFFSET))(this);
		}

		::System::Void PBIIIGEJOCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_PBIIIGEJOCB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void ELAKDEOOEMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_ELAKDEOOEMJ_OFFSET))(this);
		}

		::System::Void KAOEEKIOHII(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_KAOEEKIOHII_OFFSET))(this, a1, a2);
		}

		::LCCJKNEADPL* BNIBHPOLPAK()
		{
			return ((::LCCJKNEADPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_BNIBHPOLPAK_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* EKEGOGDHEAM(::CJLFDFFBOHM a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::CJLFDFFBOHM))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_EKEGOGDHEAM_OFFSET))(this, a1);
		}

		::System::Void KPHALOGKMEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_KPHALOGKMEC_OFFSET))(this);
		}

		::System::Void APCKFBJNDFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_APCKFBJNDFD_OFFSET))(this);
		}

		::System::Void PKPCCNAMHPP(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_PKPCCNAMHPP_OFFSET))(this, a1, a2);
		}

		::System::Void NJIEBJEICGI(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_NJIEBJEICGI_OFFSET))(this, a1, a2);
		}

		::System::Void PNHGPNFCMLO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_PNHGPNFCMLO_OFFSET))(this, a1);
		}

		::System::Void BGAJFIKEHGK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_BGAJFIKEHGK_OFFSET))(this, a1, a2);
		}

		::System::Void JBAHNMNILFH(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_JBAHNMNILFH_OFFSET))(this, a1, a2);
		}

		::System::Void JFBKIEGFFEJ(::System::Net::HttpStatusCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpStatusCode))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_JFBKIEGFFEJ_OFFSET))(this, a1);
		}

		::System::Void LGNIGCICKGE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_LGNIGCICKGE_OFFSET))(this);
		}

		::System::Void CBFJJDACDBB(::JCEMKEPNKEH a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCEMKEPNKEH))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_CBFJJDACDBB_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* HKCCPPDNCDG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_HKCCPPDNCDG_OFFSET))(this, a1, a2);
		}

		::System::Void HOMPENNFBNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_HOMPENNFBNI_OFFSET))(this);
		}

		::System::Void GAMCGGKIPOP(::IBOLNDGHCBB_State a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBOLNDGHCBB_State))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_GAMCGGKIPOP_OFFSET))(this, a1);
		}

		::System::Void NNGMDAKCNGD(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_NNGMDAKCNGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LCLGFIPNGGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_LCLGFIPNGGD_OFFSET))(this);
		}

		::System::String* PJPIHOEJCBP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBOLNDGHCBB_PJPIHOEJCBP_OFFSET))(this);
		}

	};

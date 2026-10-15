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

#define IBOLNDGHCBB_APCKFBJNDFD_OFFSET UNITYSDK_OFFSET(0x15E372F0)
#define IBOLNDGHCBB_BGAJFIKEHGK_OFFSET UNITYSDK_OFFSET(0x15E39B30)
#define IBOLNDGHCBB_BNIBHPOLPAK_OFFSET UNITYSDK_OFFSET(0x15E371D0)
#define IBOLNDGHCBB_CBFJJDACDBB_OFFSET UNITYSDK_OFFSET(0x15E39DE0)
#define IBOLNDGHCBB_CNPCJHEMFFN_OFFSET UNITYSDK_OFFSET(0x15E36880)
#define IBOLNDGHCBB_CTOR_OFFSET UNITYSDK_OFFSET(0x15E366F0)
#define IBOLNDGHCBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E37CE0)
#define IBOLNDGHCBB_EKEGOGDHEAM_OFFSET UNITYSDK_OFFSET(0x15E388D0)
#define IBOLNDGHCBB_ELAKDEOOEMJ_OFFSET UNITYSDK_OFFSET(0x15E38600)
#define IBOLNDGHCBB_GAMCGGKIPOP_OFFSET UNITYSDK_OFFSET(0x15E372A0)
#define IBOLNDGHCBB_HKCCPPDNCDG_OFFSET UNITYSDK_OFFSET(0x15E39F20)
#define IBOLNDGHCBB_HOMPENNFBNI_OFFSET UNITYSDK_OFFSET(0x15E39FC0)
#define IBOLNDGHCBB_JBAHNMNILFH_OFFSET UNITYSDK_OFFSET(0x15E39CA0)
#define IBOLNDGHCBB_JFBKIEGFFEJ_OFFSET UNITYSDK_OFFSET(0x15E39D00)
#define IBOLNDGHCBB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15E383A0)
#define IBOLNDGHCBB_KAOEEKIOHII_OFFSET UNITYSDK_OFFSET(0x15E38640)
#define IBOLNDGHCBB_KPHALOGKMEC_OFFSET UNITYSDK_OFFSET(0x15E38A80)
#define IBOLNDGHCBB_LCLGFIPNGGD_OFFSET UNITYSDK_OFFSET(0x15E3A730)
#define IBOLNDGHCBB_LGNIGCICKGE_OFFSET UNITYSDK_OFFSET(0x15E39D50)
#define IBOLNDGHCBB_NJIEBJEICGI_OFFSET UNITYSDK_OFFSET(0x15E39980)
#define IBOLNDGHCBB_NNGMDAKCNGD_OFFSET UNITYSDK_OFFSET(0x15E3A6A0)
#define IBOLNDGHCBB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15E368F0)
#define IBOLNDGHCBB_PBIIIGEJOCB_OFFSET UNITYSDK_OFFSET(0x15E37F40)
#define IBOLNDGHCBB_PJPIHOEJCBP_OFFSET UNITYSDK_OFFSET(0x15E3A740)
#define IBOLNDGHCBB_PKPCCNAMHPP_OFFSET UNITYSDK_OFFSET(0x15E38C60)
#define IBOLNDGHCBB_PNHGPNFCMLO_OFFSET UNITYSDK_OFFSET(0x15E39890)

inline static constexpr unsigned int IBOLNDGHCBB_TypeDefinitionIndex = 60991;

	class IBOLNDGHCBB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* MKAMMOMKFPC; // 0x10
		::System::Action_1<::RPG::GameCore::BattleResultState>* IMKEDDPCEHJ; // 0x18
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x20
		::RPG::Client::Promises::Promise* MOEMENBDMIJ; // 0x28
		::System::Boolean KGIOCBCDJKF; // 0x30
		::System::Boolean IICHAGMGKEE; // 0x31
		::System::Boolean BPGGGKNBILK; // 0x32
		::System::Boolean OCJLCMJCDAO; // 0x33
		::System::Boolean GDIOEMJGNGA; // 0x34
		::System::Boolean HLMAHOBGPKI; // 0x35
		::System::Byte _padding0[0x2];
		::IBOLNDGHCBB_State DLNIGFGLPLJ; // 0x38
		::System::Boolean GOECIPOALMN; // 0x3C
		::System::Boolean DFDHDJJMAEB; // 0x3D
		::System::Boolean KMIHKEPPEGM; // 0x3E
		::System::Boolean NBNPPJNFLMK; // 0x3F
		::CJLFDFFBOHM PNPFCAAPHPN; // 0x40
		::System::Single EFKCJMFANEB; // 0x44
		static ::System::Boolean* StaticGet_CGPCAPAEFDI()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IBOLNDGHCBB")->GetStaticField(0x15DB0);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Security/SslPolicyErrors.h"
#include "unitysdk/System/Net/HttpStatusCode.h"
#include "unitysdk/System/Object.h"
class HNFFJNEKJHA;
class IOOIEOKJKMM;
class JDGIIPJCPID;
class OEIPKOKBJCH;
namespace RPG::Client { class GameReplayModel; }
namespace RPG::Client { class ReplayCustomData; }
namespace System { class Action; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509Chain; }

#define IOOIEOKJKMM_BDMKCNMPIKH_OFFSET UNITYSDK_OFFSET(0x16519CA0)
#define IOOIEOKJKMM_BJAJFOFJKJJ_OFFSET UNITYSDK_OFFSET(0x16518500)
#define IOOIEOKJKMM_CPGGKPFCCAJ_OFFSET UNITYSDK_OFFSET(0x16519C60)
#define IOOIEOKJKMM_CTOR_OFFSET UNITYSDK_OFFSET(0x165180B0)
#define IOOIEOKJKMM_DOJENFIOMLH_OFFSET UNITYSDK_OFFSET(0x16519080)
#define IOOIEOKJKMM_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x16518040)
#define IOOIEOKJKMM_GJAKBMECLGJ_OFFSET UNITYSDK_OFFSET(0x1651A1C0)
#define IOOIEOKJKMM_HECLMFOBHKI_OFFSET UNITYSDK_OFFSET(0x165188A0)
#define IOOIEOKJKMM_HEHIMAFCDNC_OFFSET UNITYSDK_OFFSET(0x1651A230)
#define IOOIEOKJKMM_HOPPCNEDHBP_OFFSET UNITYSDK_OFFSET(0x16518D60)
#define IOOIEOKJKMM_IDLHCENCFJA_OFFSET UNITYSDK_OFFSET(0x1651A5D0)
#define IOOIEOKJKMM_IIFBCKPNLCP_OFFSET UNITYSDK_OFFSET(0x165186D0)
#define IOOIEOKJKMM_IMNBFJKAJMG_OFFSET UNITYSDK_OFFSET(0x16518DE0)
#define IOOIEOKJKMM_KAJLIAHMOGJ_OFFSET UNITYSDK_OFFSET(0x16519830)
#define IOOIEOKJKMM_MHBGCCMNJED_OFFSET UNITYSDK_OFFSET(0x165184B0)
#define IOOIEOKJKMM_MNOCBBBNAAG_OFFSET UNITYSDK_OFFSET(0x16519630)
#define IOOIEOKJKMM_NGMNGDFPHNM_OFFSET UNITYSDK_OFFSET(0x165180C0)
#define IOOIEOKJKMM_OKNIAIIGKKN_OFFSET UNITYSDK_OFFSET(0x1651A9A0)
#define IOOIEOKJKMM_OONGLJHMJOA_OFFSET UNITYSDK_OFFSET(0x16518640)

	class IOOIEOKJKMM : public ::System::Object
	{
	public:
		static ::IOOIEOKJKMM** StaticGet_EMLNOINPICJ()
		{
			return (::IOOIEOKJKMM**)UnitySDK::FromName("", "IOOIEOKJKMM")->GetStaticField(0x6D860);
		}

		// static const ::System::String* FMNFMDOCKBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_CTOR_OFFSET))(this);
		}

		static ::IOOIEOKJKMM* GGBLHEHJBDO()
		{
			return ((::IOOIEOKJKMM*(*)())((::PBYTE)hIl2Cpp + IOOIEOKJKMM_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void NGMNGDFPHNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_NGMNGDFPHNM_OFFSET))(this);
		}

		::System::Boolean IIFBCKPNLCP(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_IIFBCKPNLCP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void BJAJFOFJKJJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOOIEOKJKMM_BJAJFOFJKJJ_OFFSET))();
		}

		static ::System::String* HOPPCNEDHBP()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + IOOIEOKJKMM_HOPPCNEDHBP_OFFSET))();
		}

		static ::System::String* MHBGCCMNJED()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + IOOIEOKJKMM_MHBGCCMNJED_OFFSET))();
		}

		::System::Void IMNBFJKAJMG(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_IMNBFJKAJMG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::GameReplayModel* HECLMFOBHKI(::System::UInt32 a1, ::System::UInt32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::String* a4, ::RPG::Client::ReplayCustomData* a5)
		{
			return ((::RPG::Client::GameReplayModel*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::Byte>*, ::System::String*, ::RPG::Client::ReplayCustomData*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_HECLMFOBHKI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DOJENFIOMLH(::System::UInt32 a1, ::JDGIIPJCPID* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JDGIIPJCPID*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_DOJENFIOMLH_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* OONGLJHMJOA(::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* a1, ::System::Action* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>*, ::System::Action*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_OONGLJHMJOA_OFFSET))(this, a1, a2);
		}

		::System::String* MNOCBBBNAAG(::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GameReplayModel*>*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_MNOCBBBNAAG_OFFSET))(this, a1);
		}

		::System::Void KAJLIAHMOGJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_KAJLIAHMOGJ_OFFSET))(this, a1);
		}

		::System::Void CPGGKPFCCAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_CPGGKPFCCAJ_OFFSET))(this);
		}

		::System::Void BDMKCNMPIKH(::Il2CppArray<::System::Byte>* a1, ::OEIPKOKBJCH* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::OEIPKOKBJCH*, ::System::Action*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_BDMKCNMPIKH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GJAKBMECLGJ(::System::Object* a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::System::Security::Cryptography::X509Certificates::X509Chain* a3, ::System::Net::Security::SslPolicyErrors a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::System::Security::Cryptography::X509Certificates::X509Chain*, ::System::Net::Security::SslPolicyErrors))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_GJAKBMECLGJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HEHIMAFCDNC(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_HEHIMAFCDNC_OFFSET))(this, a1);
		}

		::System::Void IDLHCENCFJA(::System::Int32 a1, ::HNFFJNEKJHA* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HNFFJNEKJHA*, ::System::Action*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_IDLHCENCFJA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OKNIAIIGKKN(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + IOOIEOKJKMM_OKNIAIIGKKN_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJADKGEAOGE;
class GEKNAKDAMJF;
class ILDNJGBJGPF;
class JCKGBFJJFFC;
class JMPJCAPKNGI;
class KHNBFDNKLHE;
class LHAKNKHBLBI;
class MNALCKHBLKN;
class NHCHDKJLNBJ;
class OBJANKHLNGO;
class OMOEFAHFJFL;
class PEOKJEOOOJD;
class PKPICFPDHEO;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define LILFFGAGIHG_ADD_ONKICKEDOUTOFCHALLENGEMAZE_OFFSET UNITYSDK_OFFSET(0xBF715E0)
#define LILFFGAGIHG_ADD_ONSESSIONSETTLE_OFFSET UNITYSDK_OFFSET(0xBF71460)
#define LILFFGAGIHG_ADD_ONSTAGESETTLECONFIRM_OFFSET UNITYSDK_OFFSET(0xBF712E0)
#define LILFFGAGIHG_ADD_ONSTAGESETTLE_OFFSET UNITYSDK_OFFSET(0xBF71160)
#define LILFFGAGIHG_CDIDPIDJJAN_OFFSET UNITYSDK_OFFSET(0xBF721C0)
#define LILFFGAGIHG_CDOGIBOKNPH_OFFSET UNITYSDK_OFFSET(0xBF71A60)
#define LILFFGAGIHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF716A0)
#define LILFFGAGIHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF717F0)
#define LILFFGAGIHG_DOIBIFENNAB_OFFSET UNITYSDK_OFFSET(0xBF71CC0)
#define LILFFGAGIHG_EHHKGGDBLNA_OFFSET UNITYSDK_OFFSET(0xBF72950)
#define LILFFGAGIHG_ELGBCKDMKIP_OFFSET UNITYSDK_OFFSET(0xBF72370)
#define LILFFGAGIHG_EMGINMDALBI_OFFSET UNITYSDK_OFFSET(0xBF71B10)
#define LILFFGAGIHG_FEPDCFMFBFH_OFFSET UNITYSDK_OFFSET(0xBF718B0)
#define LILFFGAGIHG_HHGDGCANKIA_OFFSET UNITYSDK_OFFSET(0xBF72110)
#define LILFFGAGIHG_IGBPJIGHKMF_OFFSET UNITYSDK_OFFSET(0xBF72AB0)
#define LILFFGAGIHG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF71720)
#define LILFFGAGIHG_NDFLOOMPPHE_OFFSET UNITYSDK_OFFSET(0xBF727D0)
#define LILFFGAGIHG_NIIENMHEGHD_OFFSET UNITYSDK_OFFSET(0xBF72C60)
#define LILFFGAGIHG_OPCKNBHNBOA_OFFSET UNITYSDK_OFFSET(0xBF72520)
#define LILFFGAGIHG_REMOVE_ONKICKEDOUTOFCHALLENGEMAZE_OFFSET UNITYSDK_OFFSET(0xBF71640)
#define LILFFGAGIHG_REMOVE_ONSESSIONSETTLE_OFFSET UNITYSDK_OFFSET(0xBF71520)
#define LILFFGAGIHG_REMOVE_ONSTAGESETTLECONFIRM_OFFSET UNITYSDK_OFFSET(0xBF713A0)
#define LILFFGAGIHG_REMOVE_ONSTAGESETTLE_OFFSET UNITYSDK_OFFSET(0xBF71220)

inline static constexpr unsigned int LILFFGAGIHG_TypeDefinitionIndex = 84272;

	class LILFFGAGIHG : public ::System::Object
	{
	public:
		::ILDNJGBJGPF* PFJGDJPMAMM; // 0x10
		::CJADKGEAOGE* NLCPGHDIICP; // 0x18
		::System::Action* OnKickedOutOfChallengeMaze; // 0x20
		::OMOEFAHFJFL* MJHHLOPFDNK; // 0x28
		::System::Void _ctor(::OMOEFAHFJFL* a1, ::NHCHDKJLNBJ* a2, ::OBJANKHLNGO* a3, ::MNALCKHBLKN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::OMOEFAHFJFL*, ::NHCHDKJLNBJ*, ::OBJANKHLNGO*, ::MNALCKHBLKN*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void add_OnStageSettle(::System::Action_1<::JCKGBFJJFFC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::JCKGBFJJFFC*>*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_ADD_ONSTAGESETTLE_OFFSET))(this, a1);
		}

		::System::Void remove_OnStageSettle(::System::Action_1<::JCKGBFJJFFC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::JCKGBFJJFFC*>*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_REMOVE_ONSTAGESETTLE_OFFSET))(this, a1);
		}

		::System::Void add_OnStageSettleConfirm(::System::Action_1<::PEOKJEOOOJD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::PEOKJEOOOJD*>*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_ADD_ONSTAGESETTLECONFIRM_OFFSET))(this, a1);
		}

		::System::Void remove_OnStageSettleConfirm(::System::Action_1<::PEOKJEOOOJD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::PEOKJEOOOJD*>*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_REMOVE_ONSTAGESETTLECONFIRM_OFFSET))(this, a1);
		}

		::System::Void add_OnSessionSettle(::System::Action_1<::GEKNAKDAMJF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::GEKNAKDAMJF*>*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_ADD_ONSESSIONSETTLE_OFFSET))(this, a1);
		}

		::System::Void remove_OnSessionSettle(::System::Action_1<::GEKNAKDAMJF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::GEKNAKDAMJF*>*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_REMOVE_ONSESSIONSETTLE_OFFSET))(this, a1);
		}

		::System::Void add_OnKickedOutOfChallengeMaze(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_ADD_ONKICKEDOUTOFCHALLENGEMAZE_OFFSET))(this, a1);
		}

		::System::Void remove_OnKickedOutOfChallengeMaze(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_REMOVE_ONKICKEDOUTOFCHALLENGEMAZE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::ILDNJGBJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFFGAGIHG_DISPOSE_OFFSET))(this);
		}

		::System::Void FEPDCFMFBFH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_FEPDCFMFBFH_OFFSET))(this, a1);
		}

		::System::Void CDOGIBOKNPH(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_CDOGIBOKNPH_OFFSET))(this, a1);
		}

		::System::Void DOIBIFENNAB(::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>*, ::System::Int32))((::PBYTE)hIl2Cpp + LILFFGAGIHG_DOIBIFENNAB_OFFSET))(this, a1, a2);
		}

		::System::Void HHGDGCANKIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LILFFGAGIHG_HHGDGCANKIA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::LHAKNKHBLBI*>* CDIDPIDJJAN()
		{
			return ((::RPG::Client::Promises::IPromise_1<::LHAKNKHBLBI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFFGAGIHG_CDIDPIDJJAN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::JMPJCAPKNGI*>* ELGBCKDMKIP()
		{
			return ((::RPG::Client::Promises::IPromise_1<::JMPJCAPKNGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFFGAGIHG_ELGBCKDMKIP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* OPCKNBHNBOA()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFFGAGIHG_OPCKNBHNBOA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NDFLOOMPPHE(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LILFFGAGIHG_NDFLOOMPPHE_OFFSET))(this, a1);
		}

		::System::Void EHHKGGDBLNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILFFGAGIHG_EHHKGGDBLNA_OFFSET))(this);
		}

		::System::Void EMGINMDALBI(::ILDNJGBJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_EMGINMDALBI_OFFSET))(this, a1);
		}

		::System::Void IGBPJIGHKMF(::ILDNJGBJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_IGBPJIGHKMF_OFFSET))(this, a1);
		}

		::System::Void NIIENMHEGHD(::ILDNJGBJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + LILFFGAGIHG_NIIENMHEGHD_OFFSET))(this, a1);
		}

	};

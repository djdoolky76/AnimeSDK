#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JLHPJLGBCLD_SandboxState.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Object.h"
class ABOKKOEEGOF;
class EAIGLLEMOII;
class HGEMPHLHOPF;
class IIAPFKODINN;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class IDisposable; }
namespace System { class String; }

#define JLHPJLGBCLD_BHMGKEFBFKC_OFFSET UNITYSDK_OFFSET(0xBA759A0)
#define JLHPJLGBCLD_BHOKGPNBNOH_OFFSET UNITYSDK_OFFSET(0xBA74A10)
#define JLHPJLGBCLD_BPJPCOBPBBL_OFFSET UNITYSDK_OFFSET(0xBA74A60)
#define JLHPJLGBCLD_CFOEFBMKGNH_OFFSET UNITYSDK_OFFSET(0xBA75D00)
#define JLHPJLGBCLD_CHLLFEIICCO_OFFSET UNITYSDK_OFFSET(0xBA751F0)
#define JLHPJLGBCLD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA74450)
#define JLHPJLGBCLD_DIAJFFPGIFA_OFFSET UNITYSDK_OFFSET(0xBA74C00)
#define JLHPJLGBCLD_DKCEICFCPCC_OFFSET UNITYSDK_OFFSET(0xBA744B0)
#define JLHPJLGBCLD_FECDGIPBFOF_OFFSET UNITYSDK_OFFSET(0xBA75EC0)
#define JLHPJLGBCLD_FJOFLLCKGKP_OFFSET UNITYSDK_OFFSET(0xBA747E0)
#define JLHPJLGBCLD_GCMOKCPIGJN_OFFSET UNITYSDK_OFFSET(0xBA75330)
#define JLHPJLGBCLD_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0xBA74460)
#define JLHPJLGBCLD_KACIGDIALDD_OFFSET UNITYSDK_OFFSET(0xBA74910)
#define JLHPJLGBCLD_KAHBJFFIIIF_OFFSET UNITYSDK_OFFSET(0xBA75470)
#define JLHPJLGBCLD_LFHBACEHAEL_OFFSET UNITYSDK_OFFSET(0xBA75730)
#define JLHPJLGBCLD_MHJAIEDAOBJ_OFFSET UNITYSDK_OFFSET(0xBA761C0)
#define JLHPJLGBCLD_MKKDOBKIJAK_OFFSET UNITYSDK_OFFSET(0xBA74F50)
#define JLHPJLGBCLD_PCHAOACKKIK_OFFSET UNITYSDK_OFFSET(0xBA76160)
#define JLHPJLGBCLD_PFNPMMDPNMB_OFFSET UNITYSDK_OFFSET(0xBA76420)

inline static constexpr unsigned int JLHPJLGBCLD_TypeDefinitionIndex = 77027;

	class JLHPJLGBCLD : public ::System::Object
	{
	public:
		::HGEMPHLHOPF* HCHDDPAHNPP; // 0x10
		::ABOKKOEEGOF* ENPFDHHANFG; // 0x18
		::IIAPFKODINN* LEJLIBFDDEJ; // 0x20
		::EAIGLLEMOII* OLOAJINFPNF; // 0x28
		::RPG::Client::Promises::Promise* IOJFNAJINOE; // 0x30
		::RPG::Client::Promises::Promise* OFOAAKGGHBB; // 0x38
		::System::IDisposable* BBDIHHDKLPC; // 0x40
		::System::IDisposable* AIODDMEODNJ; // 0x48
		::JLHPJLGBCLD_SandboxState DLNIGFGLPLJ; // 0x50
		// static const ::System::String* FMCAJACMCKE; // 0x0
		::System::Void _ctor(::ABOKKOEEGOF* a1, ::HGEMPHLHOPF* a2, ::IIAPFKODINN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ABOKKOEEGOF*, ::HGEMPHLHOPF*, ::IIAPFKODINN*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_JKEONEEPIHH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DKCEICFCPCC(::System::Action* a1, ::System::Action* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_DKCEICFCPCC_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* DIAJFFPGIFA(::System::Action* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_DIAJFFPGIFA_OFFSET))(this, a1);
		}

		::System::Void MKKDOBKIJAK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_MKKDOBKIJAK_OFFSET))(this, a1);
		}

		::System::Void FJOFLLCKGKP(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_FJOFLLCKGKP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KAHBJFFIIIF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_KAHBJFFIIIF_OFFSET))(this);
		}

		::System::Void LFHBACEHAEL(::EAIGLLEMOII* a1, ::RPG::Client::LittleGameSandboxCompletionResult a2)
		{
			return ((::System::Void(*)(::PVOID, ::EAIGLLEMOII*, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_LFHBACEHAEL_OFFSET))(this, a1, a2);
		}

		::System::Void CFOEFBMKGNH(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_CFOEFBMKGNH_OFFSET))(this, a1);
		}

		::System::Void FECDGIPBFOF(::RPG::Client::Promises::Promise* a1, ::RPG::Client::LittleGameSandboxCompletionResult a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_FECDGIPBFOF_OFFSET))(this, a1, a2);
		}

		::System::Void BHMGKEFBFKC(::RPG::Client::Promises::Promise* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*, ::System::Exception*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_BHMGKEFBFKC_OFFSET))(this, a1, a2);
		}

		::System::Void MHJAIEDAOBJ(::RPG::Client::Promises::Promise* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*, ::System::Exception*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_MHJAIEDAOBJ_OFFSET))(this, a1, a2);
		}

		::System::Void BHOKGPNBNOH(::JLHPJLGBCLD_SandboxState a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHPJLGBCLD_SandboxState))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_BHOKGPNBNOH_OFFSET))(this, a1);
		}

		::System::Void PFNPMMDPNMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_PFNPMMDPNMB_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* KACIGDIALDD(::RPG::Client::Promises::IPromise* a1, ::System::Action* a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::Promises::IPromise*, ::System::Action*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_KACIGDIALDD_OFFSET))(this, a1, a2);
		}

		static ::System::Action* BPJPCOBPBBL(::System::Action* a1)
		{
			return ((::System::Action*(*)(::System::Action*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_BPJPCOBPBBL_OFFSET))(a1);
		}

		::System::Void CHLLFEIICCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_CHLLFEIICCO_OFFSET))(this);
		}

		::System::Void GCMOKCPIGJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_GCMOKCPIGJN_OFFSET))(this);
		}

		static ::System::Void PCHAOACKKIK(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + JLHPJLGBCLD_PCHAOACKKIK_OFFSET))(a1, a2);
		}

	};

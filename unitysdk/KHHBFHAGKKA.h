#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BIJKIKKNHEO;
class BOJOBHMEEIH;
class KGABIOFEDBP;
class LDCOJFNHIHL;
class LKIOKAFHPOL;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }

#define KHHBFHAGKKA_AACOPPFEMOF_OFFSET UNITYSDK_OFFSET(0xBC9D6A0)
#define KHHBFHAGKKA_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0xBC9E160)
#define KHHBFHAGKKA_BJGLHFPKEAD_OFFSET UNITYSDK_OFFSET(0xBC9DB80)
#define KHHBFHAGKKA_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0xBC9C550)
#define KHHBFHAGKKA_BOHODOFAPKP_OFFSET UNITYSDK_OFFSET(0xBC9E110)
#define KHHBFHAGKKA_CCIBHCHLLCN_OFFSET UNITYSDK_OFFSET(0xBC9D7F0)
#define KHHBFHAGKKA_CHDCCCEPKJN_OFFSET UNITYSDK_OFFSET(0xBC9C7E0)
#define KHHBFHAGKKA_COHGEENDLHE_OFFSET UNITYSDK_OFFSET(0xBC9D2F0)
#define KHHBFHAGKKA_CTOR_OFFSET UNITYSDK_OFFSET(0xBC9C4F0)
#define KHHBFHAGKKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC9C500)
#define KHHBFHAGKKA_DKENGDAJHPC_OFFSET UNITYSDK_OFFSET(0xBC9D280)
#define KHHBFHAGKKA_DMHCEHGJODH_OFFSET UNITYSDK_OFFSET(0xBC9DD80)
#define KHHBFHAGKKA_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0xBC9CC40)
#define KHHBFHAGKKA_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0xBC9D220)
#define KHHBFHAGKKA_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0xBC9D090)
#define KHHBFHAGKKA_ILCMCECJHEC_OFFSET UNITYSDK_OFFSET(0xBC9CD90)
#define KHHBFHAGKKA_JHBJMBHNEAO_OFFSET UNITYSDK_OFFSET(0xBC9DDD0)
#define KHHBFHAGKKA_JHKADPEOJBE_OFFSET UNITYSDK_OFFSET(0xBC9D930)
#define KHHBFHAGKKA_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0xBC9CFC0)
#define KHHBFHAGKKA_KHPCDPPFHOG_OFFSET UNITYSDK_OFFSET(0xBC9DA10)
#define KHHBFHAGKKA_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0xBC9C9F0)
#define KHHBFHAGKKA_LMLFKLJFJFN_OFFSET UNITYSDK_OFFSET(0xBC9D0E0)
#define KHHBFHAGKKA_LNPPCBCIOKE_OFFSET UNITYSDK_OFFSET(0xBC9DCE0)
#define KHHBFHAGKKA_MLPJEGJAFMA_OFFSET UNITYSDK_OFFSET(0xBC9CE30)
#define KHHBFHAGKKA_NGIDBHADLNO_OFFSET UNITYSDK_OFFSET(0xBC9CD30)
#define KHHBFHAGKKA_OMBKNCOOFIG_OFFSET UNITYSDK_OFFSET(0xBC9DAF0)
#define KHHBFHAGKKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC9C610)
#define KHHBFHAGKKA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC9CB90)
#define KHHBFHAGKKA_PJJKPDKLAKG_OFFSET UNITYSDK_OFFSET(0xBC9CAE0)
#define KHHBFHAGKKA_PMFCLMMLAHP_OFFSET UNITYSDK_OFFSET(0xBC9D870)
#define KHHBFHAGKKA_PNOABCGMPOA_OFFSET UNITYSDK_OFFSET(0xBC9E020)
#define KHHBFHAGKKA_TICK_OFFSET UNITYSDK_OFFSET(0xBC9CBE0)

inline static constexpr unsigned int KHHBFHAGKKA_TypeDefinitionIndex = 59193;

	class KHHBFHAGKKA : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Promises::Promise* CMBDPIAJNHC; // 0x18
		::RPG::Client::Promises::Promise* IIKEGJJHMHF; // 0x20
		::System::Exception* LMLAIDOEMCK; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KGABIOFEDBP* OFKGLJOAMLD; // 0x38
		::BOJOBHMEEIH* BBMKJGIGJPN; // 0x40
		::RPG::Client::LuaUIController* CENBMBJLIDH; // 0x48
		::System::Boolean PGJPOOHJPEO; // 0x50
		::System::Boolean CCCFELPCEGP; // 0x51
		// static const ::System::String* PFGNCCCMBMI; // 0x0
		// static const ::System::Object PEGOCHOLANJ; // 0x0
		// static const ::System::Object HHJKDCIIJLC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KGABIOFEDBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KGABIOFEDBP*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_TICK_OFFSET))(this, a1);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_IJMONDLGAIP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PJJKPDKLAKG()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_PJJKPDKLAKG_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* DKENGDAJHPC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_DKENGDAJHPC_OFFSET))(this);
		}

		::System::Boolean LMLFKLJFJFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_LMLFKLJFJFN_OFFSET))(this);
		}

		::System::Void AACOPPFEMOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_AACOPPFEMOF_OFFSET))(this);
		}

		::System::Void LMEHGELGFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_LMEHGELGFBA_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void CCIBHCHLLCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_CCIBHCHLLCN_OFFSET))(this, a1);
		}

		::System::Void PMFCLMMLAHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_PMFCLMMLAHP_OFFSET))(this, a1);
		}

		::System::Boolean CHDCCCEPKJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_CHDCCCEPKJN_OFFSET))(this);
		}

		::System::Boolean KHPCDPPFHOG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_KHPCDPPFHOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean OMBKNCOOFIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_OMBKNCOOFIG_OFFSET))(this);
		}

		::System::Void COHGEENDLHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_COHGEENDLHE_OFFSET))(this);
		}

		::System::Void NGIDBHADLNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_NGIDBHADLNO_OFFSET))(this);
		}

		::System::Void DMHCEHGJODH(::LKIOKAFHPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKIOKAFHPOL*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_DMHCEHGJODH_OFFSET))(this, a1);
		}

		::System::Void PNOABCGMPOA(::LDCOJFNHIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCOJFNHIHL*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_PNOABCGMPOA_OFFSET))(this, a1);
		}

		::System::Void BOHODOFAPKP(::BIJKIKKNHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIJKIKKNHEO*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_BOHODOFAPKP_OFFSET))(this, a1);
		}

		::System::Void JHKADPEOJBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_JHKADPEOJBE_OFFSET))(this, a1);
		}

		::System::Void JHBJMBHNEAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_JHBJMBHNEAO_OFFSET))(this);
		}

		::System::Void BJGLHFPKEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_BJGLHFPKEAD_OFFSET))(this);
		}

		::System::Void MLPJEGJAFMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_MLPJEGJAFMA_OFFSET))(this);
		}

		::System::Void LNPPCBCIOKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_LNPPCBCIOKE_OFFSET))(this);
		}

		::System::Void ILCMCECJHEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_ILCMCECJHEC_OFFSET))(this);
		}

		::System::Void KEMLPODAFMF(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_KEMLPODAFMF_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KHHBFHAGKKA_ABCMNBHIAKM_OFFSET))(this, a1);
		}

	};

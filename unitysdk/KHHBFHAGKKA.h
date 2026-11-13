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

#define KHHBFHAGKKA_AACOPPFEMOF_OFFSET UNITYSDK_OFFSET(0x19792F30)
#define KHHBFHAGKKA_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x197939F0)
#define KHHBFHAGKKA_BJGLHFPKEAD_OFFSET UNITYSDK_OFFSET(0x19793410)
#define KHHBFHAGKKA_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x19791DF0)
#define KHHBFHAGKKA_BOHODOFAPKP_OFFSET UNITYSDK_OFFSET(0x197939A0)
#define KHHBFHAGKKA_CCIBHCHLLCN_OFFSET UNITYSDK_OFFSET(0x19793080)
#define KHHBFHAGKKA_CHDCCCEPKJN_OFFSET UNITYSDK_OFFSET(0x19792090)
#define KHHBFHAGKKA_COHGEENDLHE_OFFSET UNITYSDK_OFFSET(0x19792B90)
#define KHHBFHAGKKA_CTOR_OFFSET UNITYSDK_OFFSET(0x19791D90)
#define KHHBFHAGKKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19791DA0)
#define KHHBFHAGKKA_DKENGDAJHPC_OFFSET UNITYSDK_OFFSET(0x19792B20)
#define KHHBFHAGKKA_DMHCEHGJODH_OFFSET UNITYSDK_OFFSET(0x19793610)
#define KHHBFHAGKKA_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0x197924F0)
#define KHHBFHAGKKA_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0x19792AC0)
#define KHHBFHAGKKA_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0x19792930)
#define KHHBFHAGKKA_ILCMCECJHEC_OFFSET UNITYSDK_OFFSET(0x19792640)
#define KHHBFHAGKKA_JHBJMBHNEAO_OFFSET UNITYSDK_OFFSET(0x19793660)
#define KHHBFHAGKKA_JHKADPEOJBE_OFFSET UNITYSDK_OFFSET(0x197931C0)
#define KHHBFHAGKKA_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0x19792860)
#define KHHBFHAGKKA_KHPCDPPFHOG_OFFSET UNITYSDK_OFFSET(0x197932A0)
#define KHHBFHAGKKA_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0x197922A0)
#define KHHBFHAGKKA_LMLFKLJFJFN_OFFSET UNITYSDK_OFFSET(0x19792980)
#define KHHBFHAGKKA_LNPPCBCIOKE_OFFSET UNITYSDK_OFFSET(0x19793570)
#define KHHBFHAGKKA_MLPJEGJAFMA_OFFSET UNITYSDK_OFFSET(0x197926E0)
#define KHHBFHAGKKA_NGIDBHADLNO_OFFSET UNITYSDK_OFFSET(0x197925E0)
#define KHHBFHAGKKA_OMBKNCOOFIG_OFFSET UNITYSDK_OFFSET(0x19793380)
#define KHHBFHAGKKA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19791EC0)
#define KHHBFHAGKKA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19792440)
#define KHHBFHAGKKA_PJJKPDKLAKG_OFFSET UNITYSDK_OFFSET(0x19792390)
#define KHHBFHAGKKA_PMFCLMMLAHP_OFFSET UNITYSDK_OFFSET(0x19793100)
#define KHHBFHAGKKA_PNOABCGMPOA_OFFSET UNITYSDK_OFFSET(0x197938B0)
#define KHHBFHAGKKA_TICK_OFFSET UNITYSDK_OFFSET(0x19792490)

inline static constexpr unsigned int KHHBFHAGKKA_TypeDefinitionIndex = 59193;

	class KHHBFHAGKKA : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Promises::Promise* IIKEGJJHMHF; // 0x18
		::BOJOBHMEEIH* BBMKJGIGJPN; // 0x20
		::RPG::Client::Promises::Promise* CMBDPIAJNHC; // 0x28
		::System::Exception* LMLAIDOEMCK; // 0x30
		::RPG::Client::LuaUIController* CENBMBJLIDH; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::KGABIOFEDBP* OFKGLJOAMLD; // 0x48
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

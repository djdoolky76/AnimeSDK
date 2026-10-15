#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePlayVideo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define IGBJDMBKFGJ_AACOPPFEMOF_OFFSET UNITYSDK_OFFSET(0x163F3610)
#define IGBJDMBKFGJ_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x163F4280)
#define IGBJDMBKFGJ_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x163F2760)
#define IGBJDMBKFGJ_CCIBHCHLLCN_OFFSET UNITYSDK_OFFSET(0x163F38C0)
#define IGBJDMBKFGJ_CFKNLJMCJHL_OFFSET UNITYSDK_OFFSET(0x163F33B0)
#define IGBJDMBKFGJ_CHDCCCEPKJN_OFFSET UNITYSDK_OFFSET(0x163F29D0)
#define IGBJDMBKFGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x163F26D0)
#define IGBJDMBKFGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163F26E0)
#define IGBJDMBKFGJ_EJFFNDADLJA_OFFSET UNITYSDK_OFFSET(0x163F4030)
#define IGBJDMBKFGJ_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0x163F2F60)
#define IGBJDMBKFGJ_FOJPBBELHLF_OFFSET UNITYSDK_OFFSET(0x163F3BF0)
#define IGBJDMBKFGJ_FPJFLFOFOHD_OFFSET UNITYSDK_OFFSET(0x163F40F0)
#define IGBJDMBKFGJ_GAGIHHIAGFC_OFFSET UNITYSDK_OFFSET(0x163F3760)
#define IGBJDMBKFGJ_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0x163F3350)
#define IGBJDMBKFGJ_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0x163F31C0)
#define IGBJDMBKFGJ_JCGHNHOIJAJ_OFFSET UNITYSDK_OFFSET(0x163F3420)
#define IGBJDMBKFGJ_JHKADPEOJBE_OFFSET UNITYSDK_OFFSET(0x163F3A00)
#define IGBJDMBKFGJ_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0x163F30F0)
#define IGBJDMBKFGJ_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0x163F2C30)
#define IGBJDMBKFGJ_LMLFKLJFJFN_OFFSET UNITYSDK_OFFSET(0x163F3210)
#define IGBJDMBKFGJ_MBGMBAKJEBG_OFFSET UNITYSDK_OFFSET(0x163F3CB0)
#define IGBJDMBKFGJ_OMBKNCOOFIG_OFFSET UNITYSDK_OFFSET(0x163F41F0)
#define IGBJDMBKFGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163F27D0)
#define IGBJDMBKFGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163F2E70)
#define IGBJDMBKFGJ_PJJKPDKLAKG_OFFSET UNITYSDK_OFFSET(0x163F2DC0)
#define IGBJDMBKFGJ_PMFCLMMLAHP_OFFSET UNITYSDK_OFFSET(0x163F3940)
#define IGBJDMBKFGJ_TICK_OFFSET UNITYSDK_OFFSET(0x163F2F00)

inline static constexpr unsigned int IGBJDMBKFGJ_TypeDefinitionIndex = 57956;

	class IGBJDMBKFGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::Promises::Promise* GDJNDOJGHAL; // 0x20
		::RPG::Client::Promises::Promise* CMBDPIAJNHC; // 0x28
		::System::Exception* LMLAIDOEMCK; // 0x30
		::RPG::GameCore::BattlePlayVideo* OFKGLJOAMLD; // 0x38
		::System::Boolean NJMGKPPAKPH; // 0x40
		::System::Boolean OGFMMIEJJHF; // 0x41
		// static const ::System::String* PFGNCCCMBMI; // 0x0
		// static const ::System::Object PEGOCHOLANJ; // 0x0
		// static const ::System::Object HHJKDCIIJLC; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BattlePlayVideo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BattlePlayVideo*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_TICK_OFFSET))(this, a1);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_IJMONDLGAIP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* PJJKPDKLAKG()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_PJJKPDKLAKG_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* CFKNLJMCJHL()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_CFKNLJMCJHL_OFFSET))(this);
		}

		::System::Boolean LMLFKLJFJFN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_LMLFKLJFJFN_OFFSET))(this);
		}

		::System::Void AACOPPFEMOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_AACOPPFEMOF_OFFSET))(this);
		}

		::System::Void GAGIHHIAGFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_GAGIHHIAGFC_OFFSET))(this);
		}

		::System::Void LMEHGELGFBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_LMEHGELGFBA_OFFSET))(this);
		}

		::System::Void FFAMPICKBJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_FFAMPICKBJD_OFFSET))(this);
		}

		::System::Void CCIBHCHLLCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_CCIBHCHLLCN_OFFSET))(this, a1);
		}

		::System::Void PMFCLMMLAHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_PMFCLMMLAHP_OFFSET))(this, a1);
		}

		::System::Void FOJPBBELHLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_FOJPBBELHLF_OFFSET))(this, a1);
		}

		::System::Void EJFFNDADLJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_EJFFNDADLJA_OFFSET))(this, a1);
		}

		::System::Boolean CHDCCCEPKJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_CHDCCCEPKJN_OFFSET))(this);
		}

		::System::Boolean OMBKNCOOFIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_OMBKNCOOFIG_OFFSET))(this);
		}

		::System::Void JCGHNHOIJAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_JCGHNHOIJAJ_OFFSET))(this);
		}

		::System::Void JHKADPEOJBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_JHKADPEOJBE_OFFSET))(this, a1);
		}

		::System::Void MBGMBAKJEBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_MBGMBAKJEBG_OFFSET))(this, a1);
		}

		::System::Void FPJFLFOFOHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_FPJFLFOFOHD_OFFSET))(this, a1);
		}

		::System::Void KEMLPODAFMF(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_KEMLPODAFMF_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IGBJDMBKFGJ_ABCMNBHIAKM_OFFSET))(this, a1);
		}

	};

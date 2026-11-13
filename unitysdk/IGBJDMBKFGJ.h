#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class BattlePlayVideo; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define IGBJDMBKFGJ_AACOPPFEMOF_OFFSET UNITYSDK_OFFSET(0x19F42100)
#define IGBJDMBKFGJ_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0x19F42D70)
#define IGBJDMBKFGJ_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x19F41250)
#define IGBJDMBKFGJ_CCIBHCHLLCN_OFFSET UNITYSDK_OFFSET(0x19F423B0)
#define IGBJDMBKFGJ_CFKNLJMCJHL_OFFSET UNITYSDK_OFFSET(0x19F41EA0)
#define IGBJDMBKFGJ_CHDCCCEPKJN_OFFSET UNITYSDK_OFFSET(0x19F414C0)
#define IGBJDMBKFGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19F411C0)
#define IGBJDMBKFGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F411D0)
#define IGBJDMBKFGJ_EJFFNDADLJA_OFFSET UNITYSDK_OFFSET(0x19F42B20)
#define IGBJDMBKFGJ_FFAMPICKBJD_OFFSET UNITYSDK_OFFSET(0x19F41A50)
#define IGBJDMBKFGJ_FOJPBBELHLF_OFFSET UNITYSDK_OFFSET(0x19F426E0)
#define IGBJDMBKFGJ_FPJFLFOFOHD_OFFSET UNITYSDK_OFFSET(0x19F42BE0)
#define IGBJDMBKFGJ_GAGIHHIAGFC_OFFSET UNITYSDK_OFFSET(0x19F42250)
#define IGBJDMBKFGJ_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0x19F41E40)
#define IGBJDMBKFGJ_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0x19F41CB0)
#define IGBJDMBKFGJ_JCGHNHOIJAJ_OFFSET UNITYSDK_OFFSET(0x19F41F10)
#define IGBJDMBKFGJ_JHKADPEOJBE_OFFSET UNITYSDK_OFFSET(0x19F424F0)
#define IGBJDMBKFGJ_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0x19F41BE0)
#define IGBJDMBKFGJ_LMEHGELGFBA_OFFSET UNITYSDK_OFFSET(0x19F41720)
#define IGBJDMBKFGJ_LMLFKLJFJFN_OFFSET UNITYSDK_OFFSET(0x19F41D00)
#define IGBJDMBKFGJ_MBGMBAKJEBG_OFFSET UNITYSDK_OFFSET(0x19F427A0)
#define IGBJDMBKFGJ_OMBKNCOOFIG_OFFSET UNITYSDK_OFFSET(0x19F42CE0)
#define IGBJDMBKFGJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19F412C0)
#define IGBJDMBKFGJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19F41960)
#define IGBJDMBKFGJ_PJJKPDKLAKG_OFFSET UNITYSDK_OFFSET(0x19F418B0)
#define IGBJDMBKFGJ_PMFCLMMLAHP_OFFSET UNITYSDK_OFFSET(0x19F42430)
#define IGBJDMBKFGJ_TICK_OFFSET UNITYSDK_OFFSET(0x19F419F0)

inline static constexpr unsigned int IGBJDMBKFGJ_TypeDefinitionIndex = 59194;

	class IGBJDMBKFGJ : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::Promises::Promise* CMBDPIAJNHC; // 0x18
		::RPG::Client::Promises::Promise* GDJNDOJGHAL; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Exception* LMLAIDOEMCK; // 0x30
		::RPG::GameCore::BattlePlayVideo* OFKGLJOAMLD; // 0x38
		::System::Boolean OGFMMIEJJHF; // 0x40
		::System::Boolean NJMGKPPAKPH; // 0x41
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

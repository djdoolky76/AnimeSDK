#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
class CKHENKIDNKP;
class MDBOGJINCFP;
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }

#define AMEBOBNPBFO_AOCFPKCANJK_OFFSET UNITYSDK_OFFSET(0x1557B060)
#define AMEBOBNPBFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1557A570)
#define AMEBOBNPBFO_DMFNJLGHPGB_OFFSET UNITYSDK_OFFSET(0x1557ABE0)
#define AMEBOBNPBFO_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x1557B820)
#define AMEBOBNPBFO_FJJLDJNGPNC_OFFSET UNITYSDK_OFFSET(0x1557AEC0)
#define AMEBOBNPBFO_FNMLLFAFHHK_OFFSET UNITYSDK_OFFSET(0x1557AA80)
#define AMEBOBNPBFO_FPJEGIJDNND_OFFSET UNITYSDK_OFFSET(0x1557B930)
#define AMEBOBNPBFO_HNPKPCCJJEG_OFFSET UNITYSDK_OFFSET(0x1557AE60)
#define AMEBOBNPBFO_IBFHEEIPGFL_OFFSET UNITYSDK_OFFSET(0x1557B130)
#define AMEBOBNPBFO_IOPEPDHEODB_OFFSET UNITYSDK_OFFSET(0x1557A7B0)
#define AMEBOBNPBFO_JNJCKMPHBGK_OFFSET UNITYSDK_OFFSET(0x1557A5F0)
#define AMEBOBNPBFO_KDGDAHIHIMC_OFFSET UNITYSDK_OFFSET(0x1557B540)
#define AMEBOBNPBFO_KGABIOHGKNB_OFFSET UNITYSDK_OFFSET(0x1557ACE0)
#define AMEBOBNPBFO_LDIBBHJMJEA_OFFSET UNITYSDK_OFFSET(0x1557B4F0)
#define AMEBOBNPBFO_LHMEAGDFKKH_OFFSET UNITYSDK_OFFSET(0x1557B670)
#define AMEBOBNPBFO_NGFACEJPPLI_OFFSET UNITYSDK_OFFSET(0x1557ADF0)
#define AMEBOBNPBFO_NOEPCJCKEMM_OFFSET UNITYSDK_OFFSET(0x1557AD20)
#define AMEBOBNPBFO_ODPGIOLJMCO_OFFSET UNITYSDK_OFFSET(0x1557BA70)
#define AMEBOBNPBFO_OMOHBFFJLPK_OFFSET UNITYSDK_OFFSET(0x1557AAE0)
#define AMEBOBNPBFO_PEKMFJCPEMF_OFFSET UNITYSDK_OFFSET(0x1557B3F0)

	class AMEBOBNPBFO : public ::System::Object
	{
	public:
		::MDBOGJINCFP* MLGCJCPCLJP; // 0x10
		::System::UInt32 BIMPFNCOGOA; // 0x18
		::System::UInt32 MAPPPGKCPHG; // 0x1C
		::System::Boolean JINCLONCKOD; // 0x20
		::System::Boolean LDGPPIAJCJL; // 0x21
		// static const ::System::String* EBEDJLIOGEE; // 0x0
		// static const ::System::Object NDFCIJHBCNF; // 0x0
		// static const ::System::Object IEHHPHAPFLB; // 0x0
		::System::Void _ctor(::MDBOGJINCFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDBOGJINCFP*))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean JNJCKMPHBGK(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_JNJCKMPHBGK_OFFSET))(this, a1);
		}

		::System::Boolean IOPEPDHEODB(::System::UInt32 a1, ::RPG::Client::AdventurePhase* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_IOPEPDHEODB_OFFSET))(this, a1, a2);
		}

		::System::Boolean NGFACEJPPLI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_NGFACEJPPLI_OFFSET))(this, a1);
		}

		::System::Boolean HNPKPCCJJEG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_HNPKPCCJJEG_OFFSET))(this, a1);
		}

		::CKHENKIDNKP* FJJLDJNGPNC(::System::UInt32 a1)
		{
			return ((::CKHENKIDNKP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_FJJLDJNGPNC_OFFSET))(this, a1);
		}

		::System::Void AOCFPKCANJK(::RPG::GameCore::BattleResultState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_AOCFPKCANJK_OFFSET))(this, a1);
		}

		::System::Void LDIBBHJMJEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_LDIBBHJMJEA_OFFSET))(this);
		}

		::System::Boolean KDGDAHIHIMC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_KDGDAHIHIMC_OFFSET))(this);
		}

		::System::Void PEKMFJCPEMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_PEKMFJCPEMF_OFFSET))(this, a1);
		}

		::System::Void OMOHBFFJLPK(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_OMOHBFFJLPK_OFFSET))(this, a1, a2);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void FNMLLFAFHHK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_FNMLLFAFHHK_OFFSET))(this, a1);
		}

		::System::Void NOEPCJCKEMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_NOEPCJCKEMM_OFFSET))(this);
		}

		::System::Void DMFNJLGHPGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_DMFNJLGHPGB_OFFSET))(this);
		}

		::System::Void LHMEAGDFKKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_LHMEAGDFKKH_OFFSET))(this, a1);
		}

		::System::Void FPJEGIJDNND(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_FPJEGIJDNND_OFFSET))(this, a1);
		}

		static ::System::Boolean KGABIOHGKNB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_KGABIOHGKNB_OFFSET))(a1);
		}

		static ::System::Boolean ODPGIOLJMCO(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_ODPGIOLJMCO_OFFSET))(a1);
		}

		::System::Boolean IBFHEEIPGFL(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMEBOBNPBFO_IBFHEEIPGFL_OFFSET))(this, a1, a2);
		}

	};

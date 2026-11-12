#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"
#include "unitysdk/System/Object.h"
class CKHENKIDNKP;
class MDBOGJINCFP;
namespace RPG::Client { class AdventurePhase; }
namespace System { class Object; }

#define AMEBOBNPBFO_AOCFPKCANJK_OFFSET UNITYSDK_OFFSET(0x163EA400)
#define AMEBOBNPBFO_CTOR_OFFSET UNITYSDK_OFFSET(0x163E9910)
#define AMEBOBNPBFO_DMFNJLGHPGB_OFFSET UNITYSDK_OFFSET(0x163E9F80)
#define AMEBOBNPBFO_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0x163EABC0)
#define AMEBOBNPBFO_FJJLDJNGPNC_OFFSET UNITYSDK_OFFSET(0x163EA260)
#define AMEBOBNPBFO_FNMLLFAFHHK_OFFSET UNITYSDK_OFFSET(0x163E9E20)
#define AMEBOBNPBFO_FPJEGIJDNND_OFFSET UNITYSDK_OFFSET(0x163EACD0)
#define AMEBOBNPBFO_HNPKPCCJJEG_OFFSET UNITYSDK_OFFSET(0x163EA200)
#define AMEBOBNPBFO_IBFHEEIPGFL_OFFSET UNITYSDK_OFFSET(0x163EA4D0)
#define AMEBOBNPBFO_IOPEPDHEODB_OFFSET UNITYSDK_OFFSET(0x163E9B50)
#define AMEBOBNPBFO_JNJCKMPHBGK_OFFSET UNITYSDK_OFFSET(0x163E9990)
#define AMEBOBNPBFO_KDGDAHIHIMC_OFFSET UNITYSDK_OFFSET(0x163EA8E0)
#define AMEBOBNPBFO_KGABIOHGKNB_OFFSET UNITYSDK_OFFSET(0x163EA080)
#define AMEBOBNPBFO_LDIBBHJMJEA_OFFSET UNITYSDK_OFFSET(0x163EA890)
#define AMEBOBNPBFO_LHMEAGDFKKH_OFFSET UNITYSDK_OFFSET(0x163EAA10)
#define AMEBOBNPBFO_NGFACEJPPLI_OFFSET UNITYSDK_OFFSET(0x163EA190)
#define AMEBOBNPBFO_NOEPCJCKEMM_OFFSET UNITYSDK_OFFSET(0x163EA0C0)
#define AMEBOBNPBFO_ODPGIOLJMCO_OFFSET UNITYSDK_OFFSET(0x163EAE10)
#define AMEBOBNPBFO_OMOHBFFJLPK_OFFSET UNITYSDK_OFFSET(0x163E9E80)
#define AMEBOBNPBFO_PEKMFJCPEMF_OFFSET UNITYSDK_OFFSET(0x163EA790)

inline static constexpr unsigned int AMEBOBNPBFO_TypeDefinitionIndex = 83509;

	class AMEBOBNPBFO : public ::System::Object
	{
	public:
		::MDBOGJINCFP* MLGCJCPCLJP; // 0x10
		::System::Boolean LDGPPIAJCJL; // 0x18
		::System::Boolean JINCLONCKOD; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 BIMPFNCOGOA; // 0x1C
		::System::UInt32 MAPPPGKCPHG; // 0x20
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/LNONMFIMADF.h"
#include "unitysdk/System/Object.h"

class AIKGHHJKNCE;
class CEDHMCAELMM;
class OBKNEEOLOPB;
namespace System { class String; }

#define AINNEDPGFEG_ANFGAENCGNB_OFFSET UNITYSDK_OFFSET(0x16FEDEE0)
#define AINNEDPGFEG_CJHHPKKDDNG_1_OFFSET UNITYSDK_OFFSET(0x16FEEC00)
#define AINNEDPGFEG_CJHHPKKDDNG_OFFSET UNITYSDK_OFFSET(0x16FEDE20)
#define AINNEDPGFEG_ECGNLDLEJOP_OFFSET UNITYSDK_OFFSET(0x16FEEDC0)
#define AINNEDPGFEG_GCIFCEMIMDF_OFFSET UNITYSDK_OFFSET(0x16FEDF40)
#define AINNEDPGFEG_LKNACKGELEO_1_OFFSET UNITYSDK_OFFSET(0x16FEE620)
#define AINNEDPGFEG_LKNACKGELEO_2_OFFSET UNITYSDK_OFFSET(0x16FEE050)
#define AINNEDPGFEG_LKNACKGELEO_OFFSET UNITYSDK_OFFSET(0x16FEEC90)
#define AINNEDPGFEG_LLONPGAAOPE_OFFSET UNITYSDK_OFFSET(0x16FEEE80)
#define AINNEDPGFEG_OFLALHHKODM_OFFSET UNITYSDK_OFFSET(0x16FEEFC0)
#define AINNEDPGFEG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEDD50)

inline static constexpr unsigned int AINNEDPGFEG_TypeDefinitionIndex = 54466;

class AINNEDPGFEG : public ::System::Object
{
public:
	::AIKGHHJKNCE* DKGEMJELJKG; // 0x10
	::System::String* DNJMHEBDCPF; // 0x18
	::OBKNEEOLOPB* POJCKDKLOPC; // 0x20
	::System::UInt32 PFCELCGMNPO; // 0x28
	::System::Boolean DHLMHBHAONB; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 JNNAAJLPOOC; // 0x30
	::System::UInt32 PFEEHLBKKAI; // 0x34

	::System::Void _ctor(::AIKGHHJKNCE* CENDLIKDNJA)
	{
		return ((::System::Void(*)(::PVOID, ::AIKGHHJKNCE*))((::PBYTE)hIl2Cpp + AINNEDPGFEG__CTOR_OFFSET))(this, CENDLIKDNJA);
	}

	::AKRESULT CJHHPKKDDNG(::System::String* KPIAFDELPJL, ::System::Single BFGHPIFHKAO)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AINNEDPGFEG_CJHHPKKDDNG_OFFSET))(this, KPIAFDELPJL, BFGHPIFHKAO);
	}

	::System::Void ANFGAENCGNB(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AINNEDPGFEG_ANFGAENCGNB_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::AKRESULT GCIFCEMIMDF(::System::Single BFGHPIFHKAO)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AINNEDPGFEG_GCIFCEMIMDF_OFFSET))(this, BFGHPIFHKAO);
	}

	::System::UInt32 LKNACKGELEO(::CEDHMCAELMM* HPBEEMLOFGM, ::System::Boolean CNKLEEMBING, ::System::Boolean PGCIJMFCBAE)
	{
		return ((::System::UInt32(*)(::PVOID, ::CEDHMCAELMM*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AINNEDPGFEG_LKNACKGELEO_OFFSET))(this, HPBEEMLOFGM, CNKLEEMBING, PGCIJMFCBAE);
	}

	::System::UInt32 ECGNLDLEJOP(::LNONMFIMADF NJNOJAJHPCE, ::System::Boolean PBHBMMGIFMA)
	{
		return ((::System::UInt32(*)(::PVOID, ::LNONMFIMADF, ::System::Boolean))((::PBYTE)hIl2Cpp + AINNEDPGFEG_ECGNLDLEJOP_OFFSET))(this, NJNOJAJHPCE, PBHBMMGIFMA);
	}

	::System::UInt32 LKNACKGELEO_1(::System::Int32 FKFEGMOBDOJ, ::System::Boolean PBHBMMGIFMA, ::System::Boolean CNKLEEMBING, ::System::Boolean PGCIJMFCBAE)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AINNEDPGFEG_LKNACKGELEO_1_OFFSET))(this, FKFEGMOBDOJ, PBHBMMGIFMA, CNKLEEMBING, PGCIJMFCBAE);
	}

	::System::Void LLONPGAAOPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINNEDPGFEG_LLONPGAAOPE_OFFSET))(this);
	}

	::System::UInt32 LKNACKGELEO_2(::System::String* LJIMDJELPEO, ::System::Boolean PBHBMMGIFMA, ::System::Boolean CNKLEEMBING, ::System::Boolean PGCIJMFCBAE)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AINNEDPGFEG_LKNACKGELEO_2_OFFSET))(this, LJIMDJELPEO, PBHBMMGIFMA, CNKLEEMBING, PGCIJMFCBAE);
	}

	::System::String* OFLALHHKODM(::System::Int32 FKFEGMOBDOJ)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AINNEDPGFEG_OFLALHHKODM_OFFSET))(this, FKFEGMOBDOJ);
	}

	::AKRESULT CJHHPKKDDNG_1(::System::Int32 FKFEGMOBDOJ, ::System::Single BFGHPIFHKAO)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + AINNEDPGFEG_CJHHPKKDDNG_1_OFFSET))(this, FKFEGMOBDOJ, BFGHPIFHKAO);
	}
};

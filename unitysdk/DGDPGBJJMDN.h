#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class JCOHPOCFBNO;
namespace System { class Random; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGDPGBJJMDN_BEDGKPELGOF_OFFSET UNITYSDK_OFFSET(0x13293AB0)
#define DGDPGBJJMDN_BNIKGLOFDFL_OFFSET UNITYSDK_OFFSET(0x132936E0)
#define DGDPGBJJMDN_EKBCAHCCOCF_OFFSET UNITYSDK_OFFSET(0x132936C0)
#define DGDPGBJJMDN_HGBFALMINFN_OFFSET UNITYSDK_OFFSET(0x132939B0)
#define DGDPGBJJMDN_JMNEBFMHIGB_OFFSET UNITYSDK_OFFSET(0x132936D0)
#define DGDPGBJJMDN_LJJEBKCIFDJ_OFFSET UNITYSDK_OFFSET(0x13293900)
#define DGDPGBJJMDN__CTOR_OFFSET UNITYSDK_OFFSET(0x13293630)

inline static constexpr unsigned int DGDPGBJJMDN_TypeDefinitionIndex = 47516;

class DGDPGBJJMDN : public ::System::Object
{
public:
	::JCOHPOCFBNO* FNICDIFGCHO; // 0x10
	::System::Random* AAIMPPBEKPF; // 0x18
	::System::Int32 _DBJGIIOPACK_k__BackingField; // 0x20
	::System::Int32 JKGCLPKEEDB; // 0x24

	::System::Void _ctor(::System::Int32 KEDBFHFLBHI, ::JCOHPOCFBNO* LMEJPBLDBPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::JCOHPOCFBNO*))((::PBYTE)hIl2Cpp + DGDPGBJJMDN__CTOR_OFFSET))(this, KEDBFHFLBHI, LMEJPBLDBPA);
	}

	::System::Void EKBCAHCCOCF(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGDPGBJJMDN_EKBCAHCCOCF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 JMNEBFMHIGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDPGBJJMDN_JMNEBFMHIGB_OFFSET))(this);
	}

	::System::Boolean BNIKGLOFDFL(::System::String* GACLGJLHNAJ, ::System::Int32 FAKHCNLCBCE, ::System::Collections::Generic::List_1<::System::Int32>*& CNELJPEFABK, ::System::String*& PBHEPOCGBPB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*&, ::System::String*&))((::PBYTE)hIl2Cpp + DGDPGBJJMDN_BNIKGLOFDFL_OFFSET))(this, GACLGJLHNAJ, FAKHCNLCBCE, CNELJPEFABK, PBHEPOCGBPB);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*> HGBFALMINFN()
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDPGBJJMDN_HGBFALMINFN_OFFSET))(this);
	}

	::System::Int32 LJJEBKCIFDJ(::System::Int32 NKNLILLJELC, ::System::String* PFOAPLMLCDB)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + DGDPGBJJMDN_LJJEBKCIFDJ_OFFSET))(this, NKNLILLJELC, PFOAPLMLCDB);
	}

	::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*> BEDGKPELGOF(::System::String* FDKHOKEBIKP)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGDPGBJJMDN_BEDGKPELGOF_OFFSET))(this, FDKHOKEBIKP);
	}
};

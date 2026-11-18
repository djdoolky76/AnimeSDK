#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLBEDJOGKEC.h"
#include "unitysdk/HKHEAPDDCBN.h"
#include "unitysdk/System/Object.h"

class DHBBFGNGIKE;
class KLEFIJODLCB;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNDAGIIFNPF_BBJMCLJMLBJ_OFFSET UNITYSDK_OFFSET(0x1DC86AB0)
#define CNDAGIIFNPF_IGFDCBKPGEO_OFFSET UNITYSDK_OFFSET(0x1DC86B30)
#define CNDAGIIFNPF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1DC86A20)
#define CNDAGIIFNPF__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC869A0)

inline static constexpr unsigned int CNDAGIIFNPF_TypeDefinitionIndex = 93819;

class CNDAGIIFNPF : public ::System::Object
{
public:
	::System::Action_2<::System::Int32, ::System::UInt32>* GFNEJOJAMKF; // 0x10
	::DHBBFGNGIKE* AHMFPFACACD; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* OBEDOFKNKOJ; // 0x20
	::System::UInt32 GNJBNJFGGEC; // 0x28
	::CLBEDJOGKEC IAFHBCHLBME; // 0x2C
	::System::Int32 IECAKACODNB; // 0x30
	::System::Boolean CJGKDAIMJHL; // 0x34
	::System::Byte _padding0[0x3];
	::HKHEAPDDCBN KIJKDEBDBLA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDAGIIFNPF__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDAGIIFNPF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BBJMCLJMLBJ(::System::Int32 ANNOJCFNHIO, ::System::Single DLBFEAOALML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CNDAGIIFNPF_BBJMCLJMLBJ_OFFSET))(this, ANNOJCFNHIO, DLBFEAOALML);
	}

	::System::Void IGFDCBKPGEO(::System::Single PBCAAADNEPK, ::KLEFIJODLCB* IMKCMDGFEAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::KLEFIJODLCB*))((::PBYTE)hIl2Cpp + CNDAGIIFNPF_IGFDCBKPGEO_OFFSET))(this, PBCAAADNEPK, IMKCMDGFEAJ);
	}
};

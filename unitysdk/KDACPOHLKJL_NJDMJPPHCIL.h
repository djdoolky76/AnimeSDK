#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGIPHAMJHPB.h"
#include "unitysdk/KBCEJMDPBML.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AEMCAOEICDG;
class EGPBNANFAPC;
class EHKKPCGAJHO;
class GEIHCPAOKKK;
class KDACPOHLKJL_GBBECMALJAF;
class NLNIIPDCABP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDACPOHLKJL_NJDMJPPHCIL_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x176F87F0)
#define KDACPOHLKJL_NJDMJPPHCIL_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x176F8900)
#define KDACPOHLKJL_NJDMJPPHCIL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x176F8C30)
#define KDACPOHLKJL_NJDMJPPHCIL__CTOR_OFFSET UNITYSDK_OFFSET(0x176F87E0)

inline static constexpr unsigned int KDACPOHLKJL_NJDMJPPHCIL_TypeDefinitionIndex = 65702;

class KDACPOHLKJL_NJDMJPPHCIL : public ::System::Object
{
public:
	::EHKKPCGAJHO* POBADKEDFOE; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>* HONIEKCMPGF; // 0x18
	::NLNIIPDCABP* EECFAMGFMBF; // 0x20
	::AEMCAOEICDG* OHPJHPEOFLD; // 0x28
	::EGPBNANFAPC* GEPECIELOHK; // 0x30
	::GEIHCPAOKKK* KBBAJMPBAFA; // 0x38
	::KBCEJMDPBML DJHFOGHIFEJ; // 0x40
	::KDACPOHLKJL_GBBECMALJAF* BDLKKCMONFD; // 0x58
	::Il2CppArray<::UnityEngine::RaycastHit>* PAIGGOEJLPI; // 0x60
	::System::Int32 ECGKJOIDPKN; // 0x68
	::System::Int32 CHKKAHCMDCK; // 0x6C
	::System::UInt32 BKLGNCBNEGM; // 0x70
	::LFGBJHCEJID ENJOKDKBAHO; // 0x74
	::System::Int32 KBBIFNHHIAN; // 0x90
	::System::Int32 BKCHNNCGFKD; // 0x94
	::System::Int32 IKBOBNCEFEK; // 0x98
	::IGIPHAMJHPB OHILLPBEEDH; // 0x9C
	::UnityEngine::Vector3 PHNKHKPCIEG; // 0xA0
	::System::Int32 DNPBDPLAGEO; // 0xAC
	::System::Int32 GDOBGDPJDKA; // 0xB0
	::System::Int32 GDCEOHBJPGO; // 0xB4
	::System::Int32 JLBPHEGCFMD; // 0xB8
	::System::Int32 MIBJHFLILAF; // 0xBC
	::System::Int32 CMHEHLNEDLN; // 0xC0
	::System::Boolean MICDDJGJLDF; // 0xC4
	::System::Boolean ALJCNGJLMFL; // 0xC5
	::System::Boolean EAJOAMJKADF; // 0xC6
	::System::Boolean KMFJDHNCHKK; // 0xC7
	::System::Boolean POGCDLONNOO; // 0xC8
	::System::Boolean CGALFEHFKGA; // 0xC9
	::System::Byte _padding0[0x2];
	::System::Int32 JNFNBDKEFAD; // 0xCC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NJDMJPPHCIL__CTOR_OFFSET))(this);
	}

	static ::KDACPOHLKJL_NJDMJPPHCIL* BBPCBEEHALC()
	{
		return ((::KDACPOHLKJL_NJDMJPPHCIL*(*)())((::PBYTE)hIl2Cpp + KDACPOHLKJL_NJDMJPPHCIL_BBPCBEEHALC_OFFSET))();
	}

	static ::System::Void MBKDOMFJFIG(::KDACPOHLKJL_NJDMJPPHCIL* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::KDACPOHLKJL_NJDMJPPHCIL*))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NJDMJPPHCIL_MBKDOMFJFIG_OFFSET))(AAOCANGHBDG);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDACPOHLKJL_NJDMJPPHCIL_NPOLNFDBOOD_OFFSET))(this);
	}
};

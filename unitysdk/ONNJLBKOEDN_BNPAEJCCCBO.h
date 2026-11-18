#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorTransitionInfo.h"

class DIAEPBNFKBO;
class GEIHCPAOKKK;
class NLNIIPDCABP;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define ONNJLBKOEDN_BNPAEJCCCBO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x18458390)
#define ONNJLBKOEDN_BNPAEJCCCBO_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x18458350)
#define ONNJLBKOEDN_BNPAEJCCCBO_DIOOOLLLPPO_OFFSET UNITYSDK_OFFSET(0x18458060)
#define ONNJLBKOEDN_BNPAEJCCCBO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x184580E0)
#define ONNJLBKOEDN_BNPAEJCCCBO__CTOR_OFFSET UNITYSDK_OFFSET(0x18458050)

inline static constexpr unsigned int ONNJLBKOEDN_BNPAEJCCCBO_TypeDefinitionIndex = 55548;

class ONNJLBKOEDN_BNPAEJCCCBO : public ::System::Object
{
public:
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x10
	::DIAEPBNFKBO* DLFOBFANLOF; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* HPJFMIMAEKG; // 0x20
	::NLNIIPDCABP* FNFNDIBMPDE; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorTransitionInfo>* DAHLCGGOKNC; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* BLEKABCKLPA; // 0x38
	::GEIHCPAOKKK* OHPJHPEOFLD; // 0x40
	::System::Collections::Generic::List_1<::System::Object*>* KJPPAODKOLG; // 0x48
	::System::Int32 ABOLAPGOFMP; // 0x50
	::System::Boolean HBFLPMHBJDJ; // 0x54
	::System::Boolean OBHKOGCJEGF; // 0x55
	::System::Byte _padding0[0x2];
	::System::UInt32 BKLGNCBNEGM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BNPAEJCCCBO__CTOR_OFFSET))(this);
	}

	::System::Void DIOOOLLLPPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BNPAEJCCCBO_DIOOOLLLPPO_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BNPAEJCCCBO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BNPAEJCCCBO_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLBKOEDN_BNPAEJCCCBO_BBOMJDBNHIC_OFFSET))(this);
	}
};

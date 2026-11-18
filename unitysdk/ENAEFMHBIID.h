#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEEECOBDGOA.h"
#include "unitysdk/System/Object.h"

class DLDGOPHECJB;
class HMLPPDMAJNE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENAEFMHBIID_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0xF9E3CA0)
#define ENAEFMHBIID__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E3C10)

inline static constexpr unsigned int ENAEFMHBIID_TypeDefinitionIndex = 64750;

class ENAEFMHBIID : public ::System::Object
{
public:
	::DLDGOPHECJB* NOFNOPOPCFE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PEEECOBDGOA>* DPGBJNBCHMC; // 0x18
	::HMLPPDMAJNE* NJGLDPHOCKH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAEFMHBIID__CTOR_OFFSET))(this);
	}

	::System::Void HNFAPPAHNKF(::System::UInt32 HNAKEOHALGB, ::PEEECOBDGOA OHCLMKIPAHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::PEEECOBDGOA))((::PBYTE)hIl2Cpp + ENAEFMHBIID_HNFAPPAHNKF_OFFSET))(this, HNAKEOHALGB, OHCLMKIPAHD);
	}
};

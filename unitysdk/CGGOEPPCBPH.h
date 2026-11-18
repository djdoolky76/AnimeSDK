#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/CGGOEPPCBPH_AAOCKBECPFG.h"

class EAIOHODECAO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CGGOEPPCBPH_CAMEBLKHABL_OFFSET UNITYSDK_OFFSET(0x1FF964F0)
#define CGGOEPPCBPH_DJOMCCOEHAD_OFFSET UNITYSDK_OFFSET(0x1FF96980)
#define CGGOEPPCBPH_EMGCIOPIPFP_OFFSET UNITYSDK_OFFSET(0x1FF96710)
#define CGGOEPPCBPH_GAIPJMADDID_OFFSET UNITYSDK_OFFSET(0x1FF96450)
#define CGGOEPPCBPH_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1FF96210)
#define CGGOEPPCBPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FF961C0)
#define CGGOEPPCBPH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1FF96630)
#define CGGOEPPCBPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF96330)

inline static constexpr unsigned int CGGOEPPCBPH_TypeDefinitionIndex = 96520;

class CGGOEPPCBPH : public ::MHOBPPAJKIL
{
public:
	::System::Collections::Generic::Queue_1<::System::Object*>* IDJPEIKBFFD; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* HFNCJAEFDDB; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Queue_1<::System::Object*>*>* MHAMLOMNKJG; // 0x28
	::System::Single HDKFMIAEAGP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGOEPPCBPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void GAIPJMADDID(::System::UInt32 BKLGNCBNEGM, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_GAIPJMADDID_OFFSET))(this, BKLGNCBNEGM, MDPPNMIPDMP);
	}

	::System::Boolean CAMEBLKHABL(::System::UInt32 BKLGNCBNEGM, ::CGGOEPPCBPH_AAOCKBECPFG& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CGGOEPPCBPH_AAOCKBECPFG&))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_CAMEBLKHABL_OFFSET))(this, BKLGNCBNEGM, HMMMOCJAEOA);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void EMGCIOPIPFP(::System::UInt32 BKLGNCBNEGM, ::CGGOEPPCBPH_AAOCKBECPFG HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CGGOEPPCBPH_AAOCKBECPFG))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_EMGCIOPIPFP_OFFSET))(this, BKLGNCBNEGM, HMMMOCJAEOA);
	}

	::System::Void DJOMCCOEHAD(::System::UInt32 KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGGOEPPCBPH_DJOMCCOEHAD_OFFSET))(this, KECKGDFIALJ);
	}
};

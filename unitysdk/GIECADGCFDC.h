#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIECADGCFDC_DGCJHBEEDKG.h"
#include "unitysdk/JJEJBPGJPJN.h"

class ACPKEJJNHHB;
class GLGHAEENMJP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class LJHFMILANJA_1;

#define GIECADGCFDC_DFMJAECKHAE_OFFSET UNITYSDK_OFFSET(0x11DADFB0)
#define GIECADGCFDC_JBMFHAPBOOD_OFFSET UNITYSDK_OFFSET(0x11DADA90)
#define GIECADGCFDC_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x11DAD8E0)
#define GIECADGCFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x11DAD9C0)

inline static constexpr unsigned int GIECADGCFDC_TypeDefinitionIndex = 89151;

class GIECADGCFDC : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* MACOKHKOFHF; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* APKIKLPPHEA; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DJJAJJGPCMG; // 0x98
	::LJHFMILANJA_1<::GLGHAEENMJP*>* JHECBMCJNGJ; // 0xA0
	::LJHFMILANJA_1<::System::Int64>* AICHFKIBENF; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECADGCFDC__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECADGCFDC_ONCREATEPROPERTY_OFFSET))(this);
	}

	::GIECADGCFDC_DGCJHBEEDKG JBMFHAPBOOD()
	{
		return ((::GIECADGCFDC_DGCJHBEEDKG(*)(::PVOID))((::PBYTE)hIl2Cpp + GIECADGCFDC_JBMFHAPBOOD_OFFSET))(this);
	}

	::System::Void DFMJAECKHAE(::ACPKEJJNHHB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::ACPKEJJNHHB*))((::PBYTE)hIl2Cpp + GIECADGCFDC_DFMJAECKHAE_OFFSET))(this, LJBPECKCCEA);
	}
};

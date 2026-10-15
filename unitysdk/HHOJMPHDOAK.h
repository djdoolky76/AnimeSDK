#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOICBDOCNJ;
class HHOJMPHDOAK;
class IIPAHEHJJJL;
class JBACCAGFHON;
class PJENKHDODKA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHOJMPHDOAK_BCALPBJANHN_OFFSET UNITYSDK_OFFSET(0x15CC90E0)
#define HHOJMPHDOAK_BMAOKABNLPF_OFFSET UNITYSDK_OFFSET(0x15CC9570)
#define HHOJMPHDOAK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15CC8530)
#define HHOJMPHDOAK_CEECPCGDALK_OFFSET UNITYSDK_OFFSET(0x15CC9230)
#define HHOJMPHDOAK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CC8670)
#define HHOJMPHDOAK_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15CC8730)
#define HHOJMPHDOAK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CC8C50)
#define HHOJMPHDOAK_ENJDIDGIPGG_OFFSET UNITYSDK_OFFSET(0x15CC91A0)
#define HHOJMPHDOAK_FFHHNGLCMKB_OFFSET UNITYSDK_OFFSET(0x15CC8840)
#define HHOJMPHDOAK_KKKBENPGCFD_OFFSET UNITYSDK_OFFSET(0x15CC94C0)
#define HHOJMPHDOAK_MMCCJPLOPMP_OFFSET UNITYSDK_OFFSET(0x15CC9410)
#define HHOJMPHDOAK_OHDIBPKEHHI_OFFSET UNITYSDK_OFFSET(0x15CC8950)

inline static constexpr unsigned int HHOJMPHDOAK_TypeDefinitionIndex = 78094;

	class HHOJMPHDOAK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* IELOLAOIOIE; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_CTOR_OFFSET))(this, a1);
		}

		static ::HHOJMPHDOAK* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::HHOJMPHDOAK*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void FFHHNGLCMKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_FFHHNGLCMKB_OFFSET))(this);
		}

		::System::Void OHDIBPKEHHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_OHDIBPKEHHI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_DISPOSE_OFFSET))(this);
		}

		::System::Void BCALPBJANHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_BCALPBJANHN_OFFSET))(this, a1);
		}

		::System::Void ENJDIDGIPGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_ENJDIDGIPGG_OFFSET))(this);
		}

		::System::Void CEECPCGDALK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_CEECPCGDALK_OFFSET))(this);
		}

		::System::Void MMCCJPLOPMP(::PJENKHDODKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJENKHDODKA*))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_MMCCJPLOPMP_OFFSET))(this, a1);
		}

		::System::Void KKKBENPGCFD(::FLOICBDOCNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLOICBDOCNJ*))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_KKKBENPGCFD_OFFSET))(this, a1);
		}

		::System::Void BMAOKABNLPF(::IIPAHEHJJJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIPAHEHJJJL*))((::PBYTE)hIl2Cpp + HHOJMPHDOAK_BMAOKABNLPF_OFFSET))(this, a1);
		}

	};

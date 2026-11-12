#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLOICBDOCNJ;
class HHOJMPHDOAK;
class IIPAHEHJJJL;
class JBACCAGFHON;
class PJENKHDODKA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HHOJMPHDOAK_BCALPBJANHN_OFFSET UNITYSDK_OFFSET(0x16C23450)
#define HHOJMPHDOAK_BMAOKABNLPF_OFFSET UNITYSDK_OFFSET(0x16C238E0)
#define HHOJMPHDOAK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16C22900)
#define HHOJMPHDOAK_CEECPCGDALK_OFFSET UNITYSDK_OFFSET(0x16C235A0)
#define HHOJMPHDOAK_CTOR_OFFSET UNITYSDK_OFFSET(0x16C22A20)
#define HHOJMPHDOAK_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x16C22AC0)
#define HHOJMPHDOAK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C22FD0)
#define HHOJMPHDOAK_ENJDIDGIPGG_OFFSET UNITYSDK_OFFSET(0x16C23510)
#define HHOJMPHDOAK_FFHHNGLCMKB_OFFSET UNITYSDK_OFFSET(0x16C22BD0)
#define HHOJMPHDOAK_KKKBENPGCFD_OFFSET UNITYSDK_OFFSET(0x16C23830)
#define HHOJMPHDOAK_MMCCJPLOPMP_OFFSET UNITYSDK_OFFSET(0x16C23780)
#define HHOJMPHDOAK_OHDIBPKEHHI_OFFSET UNITYSDK_OFFSET(0x16C22CE0)

inline static constexpr unsigned int HHOJMPHDOAK_TypeDefinitionIndex = 80830;

	class HHOJMPHDOAK : public ::System::Object
	{
	public:
		::JBACCAGFHON* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* IELOLAOIOIE; // 0x18
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

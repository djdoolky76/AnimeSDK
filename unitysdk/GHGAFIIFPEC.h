#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJPKLDCIKGL;
class FNHHCDAKILF;
class GPLMLPKBGGE;
class HPNACKEGJIF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GHGAFIIFPEC_AMAIAJLMDIH_OFFSET UNITYSDK_OFFSET(0x1C556580)
#define GHGAFIIFPEC_BLPMILFCFBG_OFFSET UNITYSDK_OFFSET(0x1C556410)
#define GHGAFIIFPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C555E80)
#define GHGAFIIFPEC_DHBELBCPNBP_OFFSET UNITYSDK_OFFSET(0x1C5561B0)
#define GHGAFIIFPEC_HMEHKBCAONE_OFFSET UNITYSDK_OFFSET(0x1C556170)
#define GHGAFIIFPEC_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0x1C555F10)
#define GHGAFIIFPEC_NPALABKHMLL_OFFSET UNITYSDK_OFFSET(0x1C556AA0)
#define GHGAFIIFPEC_PGBIPGAOKFG_OFFSET UNITYSDK_OFFSET(0x1C556470)

inline static constexpr unsigned int GHGAFIIFPEC_TypeDefinitionIndex = 41865;

	class GHGAFIIFPEC : public ::System::Object
	{
	public:
		::HPNACKEGJIF* LIOJKFIGGIJ; // 0x10
		::FNHHCDAKILF* JIFFPCDGGID; // 0x18
		::AJPKLDCIKGL* BFNJCCIHKBI; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AJPKLDCIKGL*>* CCECMIKFAME; // 0x28
		::System::Void _ctor(::HPNACKEGJIF* a1, ::FNHHCDAKILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPNACKEGJIF*, ::FNHHCDAKILF*))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_CTOR_OFFSET))(this, a1, a2);
		}

		::AJPKLDCIKGL* KEBEIGGJIPA(::System::UInt32 a1)
		{
			return ((::AJPKLDCIKGL*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_KEBEIGGJIPA_OFFSET))(this, a1);
		}

		::AJPKLDCIKGL* HMEHKBCAONE()
		{
			return ((::AJPKLDCIKGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_HMEHKBCAONE_OFFSET))(this);
		}

		::System::UInt32 DHBELBCPNBP(::AJPKLDCIKGL* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::AJPKLDCIKGL*))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_DHBELBCPNBP_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* BLPMILFCFBG()
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_BLPMILFCFBG_OFFSET))(this);
		}

		::System::Void PGBIPGAOKFG(::GPLMLPKBGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_PGBIPGAOKFG_OFFSET))(this, a1);
		}

		::System::Void AMAIAJLMDIH(::System::Collections::Generic::IEnumerable_1<::GPLMLPKBGGE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GPLMLPKBGGE*>*))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_AMAIAJLMDIH_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* NPALABKHMLL(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHGAFIIFPEC_NPALABKHMLL_OFFSET))(this, a1);
		}

	};

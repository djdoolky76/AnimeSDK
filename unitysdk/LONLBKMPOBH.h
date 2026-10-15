#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IELMGLNMLFN.h"
class AIDNGNILOAF;
class DMGLFMNEJGL;
namespace System { class IFormatProvider; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Text::RegularExpressions { class Regex; }

#define LONLBKMPOBH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB80F2D0)
#define LONLBKMPOBH_CLKIPNEJNGF_OFFSET UNITYSDK_OFFSET(0xB80F130)
#define LONLBKMPOBH_CTOR_OFFSET UNITYSDK_OFFSET(0xB80F250)
#define LONLBKMPOBH_HJGFJHKLPNF_OFFSET UNITYSDK_OFFSET(0xB80F1E0)
#define LONLBKMPOBH_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0xB80ED20)
#define LONLBKMPOBH_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0xB80ECB0)

inline static constexpr unsigned int LONLBKMPOBH_TypeDefinitionIndex = 73378;

	class LONLBKMPOBH : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* NBGGLAANOJH; // 0x10
		static ::System::Text::RegularExpressions::Regex** StaticGet_HLHJINEJLOA()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("", "LONLBKMPOBH")->GetStaticField(0x6D7D0);
		}

		// static const ::System::String* HNKDAMMJLJG; // 0x0
		// static const ::System::String* IKEMNGNFBEI; // 0x0
		// static const ::System::String* GHGDKIILONO; // 0x0
		// static const ::System::String* BHMDCKHCLMH; // 0x0
		// static const ::System::String* FENHOHLCKMI; // 0x0
		// static const ::System::String* MPDPBKBBLFI; // 0x0
		// static const ::System::String* CNCNDMKFHHB; // 0x0
		// static const ::System::String* OCLALHDJBGN; // 0x0
		// static const ::System::String* EFPFNNDEMPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLBKMPOBH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LONLBKMPOBH_CCTOR_OFFSET))();
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLBKMPOBH_MLMGEFIOION_OFFSET))(this);
		}

		::System::String* JBGIFBGMLMF(::System::String* a1, ::IELMGLNMLFN a2, ::DMGLFMNEJGL* a3, ::AIDNGNILOAF* a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::IELMGLNMLFN, ::DMGLFMNEJGL*, ::AIDNGNILOAF*))((::PBYTE)hIl2Cpp + LONLBKMPOBH_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* CLKIPNEJNGF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LONLBKMPOBH_CLKIPNEJNGF_OFFSET))(this, a1, a2);
		}

		::System::IFormatProvider* HJGFJHKLPNF()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + LONLBKMPOBH_HJGFJHKLPNF_OFFSET))(this);
		}

	};

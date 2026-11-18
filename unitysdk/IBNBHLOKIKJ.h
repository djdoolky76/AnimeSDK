#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNLMGNFIOKO.h"
#include "unitysdk/System/ValueType.h"

class EHKDCNKAPIF;
class HAFLGNENJDI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IBNBHLOKIKJ_KMDCNHNELAM_OFFSET UNITYSDK_OFFSET(0x15E9DD10)
#define IBNBHLOKIKJ_KNCHBAGMEDF_OFFSET UNITYSDK_OFFSET(0x15E9DEC0)

inline static constexpr unsigned int IBNBHLOKIKJ_TypeDefinitionIndex = 51287;

struct alignas(8) IBNBHLOKIKJ
{
	::System::Boolean FFCPIEDHBDP; // 0x10
	::System::Byte _padding0[0x3];
	::LNLMGNFIOKO GEIMIPECEDG; // 0x14
	::System::String* IAGEKCFNPHM; // 0x18

	/*
	static ::IBNBHLOKIKJ KMDCNHNELAM(::HAFLGNENJDI* OALCOHFBEAB, ::LNLMGNFIOKO LFDNAFIMEBI, ::System::Double PELELFHAEHP, ::System::Double APGOOHAFAFL)
	{
		return ((::IBNBHLOKIKJ(*)(::HAFLGNENJDI*, ::LNLMGNFIOKO, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + IBNBHLOKIKJ_KMDCNHNELAM_OFFSET))(OALCOHFBEAB, LFDNAFIMEBI, PELELFHAEHP, APGOOHAFAFL);
	}
	*/

	static ::System::Boolean KNCHBAGMEDF(::System::Collections::Generic::Dictionary_2<::LNLMGNFIOKO, ::EHKDCNKAPIF*>* AKAFJOOOPFD, ::LNLMGNFIOKO LFDNAFIMEBI, ::System::String*& OFAMJILHKGF, ::System::Int32& KNEHCHHABMI)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::LNLMGNFIOKO, ::EHKDCNKAPIF*>*, ::LNLMGNFIOKO, ::System::String*&, ::System::Int32&))((::PBYTE)hIl2Cpp + IBNBHLOKIKJ_KNCHBAGMEDF_OFFSET))(AKAFJOOOPFD, LFDNAFIMEBI, OFAMJILHKGF, KNEHCHHABMI);
	}
};

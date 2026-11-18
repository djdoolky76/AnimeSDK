#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KCIHKKOICHL_NJALHEDJOGB.h"

namespace BehaviorDesigner::Runtime { class ExternalBehavior; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class AutoResetEvent; }

#define KCIHKKOICHL_BIIBFJFABAM_AFPPPODAPLI_OFFSET UNITYSDK_OFFSET(0x14FCD9D0)
#define KCIHKKOICHL_BIIBFJFABAM_AKEPDHLBGLL_OFFSET UNITYSDK_OFFSET(0x14FCF010)
#define KCIHKKOICHL_BIIBFJFABAM_BDJJCBEMAOF_OFFSET UNITYSDK_OFFSET(0x14FCF1D0)
#define KCIHKKOICHL_BIIBFJFABAM_CBKJEDEHIMP_OFFSET UNITYSDK_OFFSET(0x14FCD840)
#define KCIHKKOICHL_BIIBFJFABAM_CFKKBOEDBBA_OFFSET UNITYSDK_OFFSET(0x14FCEC20)
#define KCIHKKOICHL_BIIBFJFABAM_DDKGIFIEPFL_OFFSET UNITYSDK_OFFSET(0x14FCEB80)
#define KCIHKKOICHL_BIIBFJFABAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FCDDE0)
#define KCIHKKOICHL_BIIBFJFABAM_EIIDFPMOLLI_OFFSET UNITYSDK_OFFSET(0x14FCDB20)
#define KCIHKKOICHL_BIIBFJFABAM_IEKKPOMBEJE_OFFSET UNITYSDK_OFFSET(0x14FCD710)
#define KCIHKKOICHL_BIIBFJFABAM_KMDLAACKPDF_OFFSET UNITYSDK_OFFSET(0x14FCE590)
#define KCIHKKOICHL_BIIBFJFABAM_LDPLGIPAPAA_OFFSET UNITYSDK_OFFSET(0x14FCEB90)
#define KCIHKKOICHL_BIIBFJFABAM_OAKJFJCEJEA_OFFSET UNITYSDK_OFFSET(0x14FCDD40)
#define KCIHKKOICHL_BIIBFJFABAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FCE580)
#define KCIHKKOICHL_BIIBFJFABAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14FCE3C0)

inline static constexpr unsigned int KCIHKKOICHL_BIIBFJFABAM_TypeDefinitionIndex = 61184;

class KCIHKKOICHL_BIIBFJFABAM : public ::System::Object
{
public:
	static ::KCIHKKOICHL_BIIBFJFABAM** StaticGet_ECMMKCJLBMD()
	{
		return (::KCIHKKOICHL_BIIBFJFABAM**)Il2CppClass::FromTypeDefinitionIndex(KCIHKKOICHL_BIIBFJFABAM_TypeDefinitionIndex)->GetStaticField(0x3B780);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::AssetRequestHandle>* DCFMFNLJFKG; // 0x10
	::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Object*>* NCHOLEODMAM; // 0x18
	::System::Collections::Concurrent::ConcurrentQueue_1<::System::Object*>* JLHCKPCOGFL; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>* PCDLHMIEMOD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* NMHFLBGOPLD; // 0x30
	::System::Boolean MCEEIIJADNI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_DISPOSE_OFFSET))(this);
	}

	::System::Void KMDLAACKPDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_KMDLAACKPDF_OFFSET))(this);
	}

	static ::KCIHKKOICHL_BIIBFJFABAM* DDKGIFIEPFL()
	{
		return ((::KCIHKKOICHL_BIIBFJFABAM*(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_DDKGIFIEPFL_OFFSET))();
	}

	static ::KCIHKKOICHL_BIIBFJFABAM* CBKJEDEHIMP()
	{
		return ((::KCIHKKOICHL_BIIBFJFABAM*(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_CBKJEDEHIMP_OFFSET))();
	}

	static ::System::Void AFPPPODAPLI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_AFPPPODAPLI_OFFSET))();
	}

	::System::Void OAKJFJCEJEA(::System::String* CJBJONJDOLI, ::System::Threading::AutoResetEvent* GNKPIJJJNOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Threading::AutoResetEvent*))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_OAKJFJCEJEA_OFFSET))(this, CJBJONJDOLI, GNKPIJJJNOB);
	}

	static ::KCIHKKOICHL_BIIBFJFABAM* LDPLGIPAPAA()
	{
		return ((::KCIHKKOICHL_BIIBFJFABAM*(*)())((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_LDPLGIPAPAA_OFFSET))();
	}

	::System::Void IEKKPOMBEJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_IEKKPOMBEJE_OFFSET))(this);
	}

	::System::Void AKEPDHLBGLL(::KCIHKKOICHL_NJALHEDJOGB JKEMDHLDJDP)
	{
		return ((::System::Void(*)(::PVOID, ::KCIHKKOICHL_NJALHEDJOGB))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_AKEPDHLBGLL_OFFSET))(this, JKEMDHLDJDP);
	}

	::BehaviorDesigner::Runtime::ExternalBehavior* EIIDFPMOLLI(::System::String* CJBJONJDOLI)
	{
		return ((::BehaviorDesigner::Runtime::ExternalBehavior*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_EIIDFPMOLLI_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void CFKKBOEDBBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_CFKKBOEDBBA_OFFSET))(this);
	}

	::System::Void BDJJCBEMAOF(::KCIHKKOICHL_NJALHEDJOGB HEJIBNEHLIG)
	{
		return ((::System::Void(*)(::PVOID, ::KCIHKKOICHL_NJALHEDJOGB))((::PBYTE)hIl2Cpp + KCIHKKOICHL_BIIBFJFABAM_BDJJCBEMAOF_OFFSET))(this, HEJIBNEHLIG);
	}
};

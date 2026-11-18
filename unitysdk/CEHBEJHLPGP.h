#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CEHBEJHLPGP_GHFBCEJMLIE_OFFSET UNITYSDK_OFFSET(0x139A6BC0)
#define CEHBEJHLPGP_OCPMIEDENCN_OFFSET UNITYSDK_OFFSET(0x139A6D00)
#define CEHBEJHLPGP_PJDKEBDGICL_OFFSET UNITYSDK_OFFSET(0x139A6E30)
#define CEHBEJHLPGP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x139A69B0)
#define CEHBEJHLPGP__CTOR_OFFSET UNITYSDK_OFFSET(0x139A67C0)

inline static constexpr unsigned int CEHBEJHLPGP_TypeDefinitionIndex = 90985;

class CEHBEJHLPGP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PNCEKAJCCKO; // 0x10
	::System::Int32 KMMGKJPAOMF; // 0x18

	::System::Void _ctor(::System::Int32 KMMGKJPAOMF, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* HBDDKFHGNBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + CEHBEJHLPGP__CTOR_OFFSET))(this, KMMGKJPAOMF, HBDDKFHGNBK);
	}

	::System::Void _ctor_1(::System::Int32 KMMGKJPAOMF, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>* LKLLGKBGBHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*))((::PBYTE)hIl2Cpp + CEHBEJHLPGP__CTOR_1_OFFSET))(this, KMMGKJPAOMF, LKLLGKBGBHI);
	}

	::AJJMHOGKDNF GHFBCEJMLIE(::System::String* LBMFGIGCNMB)
	{
		return ((::AJJMHOGKDNF(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CEHBEJHLPGP_GHFBCEJMLIE_OFFSET))(this, LBMFGIGCNMB);
	}

	::System::Collections::Generic::IReadOnlyList_1<::AJJMHOGKDNF>* OCPMIEDENCN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::AJJMHOGKDNF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEHBEJHLPGP_OCPMIEDENCN_OFFSET))(this);
	}

	::AJJMHOGKDNF PJDKEBDGICL(::System::Int32 HFMHOELKCAJ)
	{
		return ((::AJJMHOGKDNF(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CEHBEJHLPGP_PJDKEBDGICL_OFFSET))(this, HFMHOELKCAJ);
	}
};

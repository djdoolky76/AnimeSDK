#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AJJMHOGKDNF.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEMCGIIKAHM_GHFBCEJMLIE_OFFSET UNITYSDK_OFFSET(0x13E410D0)
#define DEMCGIIKAHM_OCPMIEDENCN_OFFSET UNITYSDK_OFFSET(0x13E41200)
#define DEMCGIIKAHM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13E40ED0)
#define DEMCGIIKAHM__CTOR_OFFSET UNITYSDK_OFFSET(0x13E40CE0)

inline static constexpr unsigned int DEMCGIIKAHM_TypeDefinitionIndex = 76220;

class DEMCGIIKAHM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PNCEKAJCCKO; // 0x10

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* HBDDKFHGNBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + DEMCGIIKAHM__CTOR_OFFSET))(this, HBDDKFHGNBK);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>* LKLLGKBGBHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*))((::PBYTE)hIl2Cpp + DEMCGIIKAHM__CTOR_1_OFFSET))(this, LKLLGKBGBHI);
	}

	::AJJMHOGKDNF GHFBCEJMLIE(::System::String* LBMFGIGCNMB)
	{
		return ((::AJJMHOGKDNF(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEMCGIIKAHM_GHFBCEJMLIE_OFFSET))(this, LBMFGIGCNMB);
	}

	::System::Collections::Generic::IReadOnlyList_1<::AJJMHOGKDNF>* OCPMIEDENCN()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::AJJMHOGKDNF>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEMCGIIKAHM_OCPMIEDENCN_OFFSET))(this);
	}
};

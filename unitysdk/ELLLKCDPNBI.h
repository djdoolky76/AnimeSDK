#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline { class LockActorStencilData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELLLKCDPNBI_HMENDFLGJHC_OFFSET UNITYSDK_OFFSET(0x199B13C0)

inline static constexpr unsigned int ELLLKCDPNBI_TypeDefinitionIndex = 49216;

	class ELLLKCDPNBI : public ::System::Object
	{
	public:
		// static const ::System::Object NDKEGAADDHI; // 0x0
		// static const ::System::Object FNDBEKDFIPJ; // 0x0
		// static const ::System::Object EPMNFGAIFIH; // 0x0
		static ::System::Collections::Generic::List_1<::System::Object*>* HMENDFLGJHC(::System::Collections::Generic::IReadOnlyList_1<::RPGTools::Timeline::LockActorStencilData*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPGTools::Timeline::LockActorStencilData*>*))((::PBYTE)hIl2Cpp + ELLLKCDPNBI_HMENDFLGJHC_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKEGIIJENMI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GOFOGINDKEF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15B2EC30)
#define GOFOGINDKEF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2EEF0)
#define GOFOGINDKEF_JBJPNCIBBKP_OFFSET UNITYSDK_OFFSET(0x15B2E760)
#define GOFOGINDKEF_LKLNHGLLCNI_OFFSET UNITYSDK_OFFSET(0x15B2E700)

inline static constexpr unsigned int GOFOGINDKEF_TypeDefinitionIndex = 80138;

	class GOFOGINDKEF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* PAKDIPDDBEH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFOGINDKEF_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* LKLNHGLLCNI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFOGINDKEF_LKLNHGLLCNI_OFFSET))(this);
		}

		::BKEGIIJENMI* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::BKEGIIJENMI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOFOGINDKEF_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* JBJPNCIBBKP()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFOGINDKEF_JBJPNCIBBKP_OFFSET))(this);
		}

	};

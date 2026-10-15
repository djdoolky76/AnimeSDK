#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BCGKEELAOEA;
class KHDJLEELKHD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define INFGFDMJBKK_ANAHFGMKJMB_OFFSET UNITYSDK_OFFSET(0x164EC1E0)
#define INFGFDMJBKK_CTOR_OFFSET UNITYSDK_OFFSET(0x164EBB00)
#define INFGFDMJBKK_KILEPBKMIHE_OFFSET UNITYSDK_OFFSET(0x164EBB90)

inline static constexpr unsigned int INFGFDMJBKK_TypeDefinitionIndex = 62789;

	class INFGFDMJBKK : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::BCGKEELAOEA*>* KBEMHKFOKOF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHDJLEELKHD*>* IEHKMMAEDMH; // 0x18
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHDJLEELKHD*>* a1, ::System::Collections::Generic::IReadOnlyList_1<::BCGKEELAOEA*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHDJLEELKHD*>*, ::System::Collections::Generic::IReadOnlyList_1<::BCGKEELAOEA*>*))((::PBYTE)hIl2Cpp + INFGFDMJBKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 KILEPBKMIHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INFGFDMJBKK_KILEPBKMIHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* ANAHFGMKJMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INFGFDMJBKK_ANAHFGMKJMB_OFFSET))(this);
		}

	};

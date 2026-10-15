#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class BCGKEELAOEA;
class KHNFFHCLLIF;
class OEFFFNEOGMC;
class PAIFNKMCPGB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MEJIFBJMJOF_ANAHFGMKJMB_OFFSET UNITYSDK_OFFSET(0xB8D9C40)
#define MEJIFBJMJOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB8D9110)
#define MEJIFBJMJOF_GET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB8D90F0)
#define MEJIFBJMJOF_KILEPBKMIHE_OFFSET UNITYSDK_OFFSET(0xB8D95F0)
#define MEJIFBJMJOF_LMHNAJPLMFI_OFFSET UNITYSDK_OFFSET(0xB8D9560)
#define MEJIFBJMJOF_PFBKHFIPJEC_OFFSET UNITYSDK_OFFSET(0xB8D9440)
#define MEJIFBJMJOF_SET_SKILLROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0xB8D9100)

inline static constexpr unsigned int MEJIFBJMJOF_TypeDefinitionIndex = 51939;

	class MEJIFBJMJOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::BCGKEELAOEA*>* KBEMHKFOKOF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KHNFFHCLLIF*>* IEHKMMAEDMH; // 0x18
		::OEFFFNEOGMC* MPKAFBADCAI; // 0x20
		::PAIFNKMCPGB* _SkillRowDataProvider_k__BackingField; // 0x28
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::OEFFFNEOGMC* a2, ::System::Collections::Generic::IReadOnlyList_1<::BCGKEELAOEA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::OEFFFNEOGMC*, ::System::Collections::Generic::IReadOnlyList_1<::BCGKEELAOEA*>*))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::PAIFNKMCPGB* get_SkillRowDataProvider()
		{
			return ((::PAIFNKMCPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_GET_SKILLROWDATAPROVIDER_OFFSET))(this);
		}

		::System::Void set_SkillRowDataProvider(::PAIFNKMCPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAIFNKMCPGB*))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_SET_SKILLROWDATAPROVIDER_OFFSET))(this, a1);
		}

		::System::Boolean LMHNAJPLMFI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_LMHNAJPLMFI_OFFSET))(this, a1);
		}

		::System::UInt32 KILEPBKMIHE(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_KILEPBKMIHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>* ANAHFGMKJMB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_ANAHFGMKJMB_OFFSET))(this);
		}

		::System::Void PFBKHFIPJEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MEJIFBJMJOF_PFBKHFIPJEC_OFFSET))(this, a1);
		}

	};

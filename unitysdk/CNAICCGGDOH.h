#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNAICCGGDOH;
class GOFFDNPBHIK;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CNAICCGGDOH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDA3F870)
#define CNAICCGGDOH_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3F900)
#define CNAICCGGDOH_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xDA3F910)
#define CNAICCGGDOH_GET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xDA3F930)
#define CNAICCGGDOH_MMFIOKJJMJO_OFFSET UNITYSDK_OFFSET(0xDA3F300)
#define CNAICCGGDOH_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xDA3F920)
#define CNAICCGGDOH_SET_AVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xDA3F940)

inline static constexpr unsigned int CNAICCGGDOH_TypeDefinitionIndex = 66756;

	class CNAICCGGDOH : public ::System::Object
	{
	public:
		::System::UInt32 _AvatarLevel_k__BackingField; // 0x10
		::System::UInt32 _AvatarId_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAICCGGDOH_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::CNAICCGGDOH*>* MMFIOKJJMJO(::System::Collections::Generic::IEnumerable_1<::GOFFDNPBHIK*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::CNAICCGGDOH*>*(*)(::System::Collections::Generic::IEnumerable_1<::GOFFDNPBHIK*>*))((::PBYTE)hIl2Cpp + CNAICCGGDOH_MMFIOKJJMJO_OFFSET))(a1);
		}

		static ::CNAICCGGDOH* BPLPBPMEODA(::GOFFDNPBHIK* a1)
		{
			return ((::CNAICCGGDOH*(*)(::GOFFDNPBHIK*))((::PBYTE)hIl2Cpp + CNAICCGGDOH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAICCGGDOH_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNAICCGGDOH_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNAICCGGDOH_GET_AVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_AvatarLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNAICCGGDOH_SET_AVATARLEVEL_OFFSET))(this, a1);
		}

	};

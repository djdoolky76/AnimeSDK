#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NEOFADECOGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6EE00)
#define NEOFADECOGH_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0xBB6EC20)
#define NEOFADECOGH_FKHMPOKCFOJ_OFFSET UNITYSDK_OFFSET(0xBB6E200)
#define NEOFADECOGH_FLAAIBEJDOI_OFFSET UNITYSDK_OFFSET(0xBB6E610)
#define NEOFADECOGH_GGKNGCOPLKH_OFFSET UNITYSDK_OFFSET(0xBB6ECE0)
#define NEOFADECOGH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB6E250)
#define NEOFADECOGH_NAJDKFDDPCC_OFFSET UNITYSDK_OFFSET(0xBB6ED70)

inline static constexpr unsigned int NEOFADECOGH_TypeDefinitionIndex = 49288;

	class NEOFADECOGH
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* ALKHDILAGKC; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* BAAMMJNKAKI; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* KMOANAPHMPG; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* JPAHBNOGAEI; // 0x28
		::System::Int32 BJOKJMLJMKE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFADECOGH_CTOR_OFFSET))(this);
		}

		::System::Int32 FKHMPOKCFOJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFADECOGH_FKHMPOKCFOJ_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFADECOGH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Int32 FLAAIBEJDOI(::System::Single a1, ::System::Action_1<::System::Int32>* a2, ::System::String* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + NEOFADECOGH_FLAAIBEJDOI_OFFSET))(this, a1, a2, a3);
		}

		::System::String* DBIELBAPKIK(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEOFADECOGH_DBIELBAPKIK_OFFSET))(this, a1);
		}

		::System::Void GGKNGCOPLKH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEOFADECOGH_GGKNGCOPLKH_OFFSET))(this, a1);
		}

		::System::Void NAJDKFDDPCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOFADECOGH_NAJDKFDDPCC_OFFSET))(this);
		}

	};

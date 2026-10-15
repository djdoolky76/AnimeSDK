#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BJMFOPNJPHE_ALMKGIMGBIE_OFFSET UNITYSDK_OFFSET(0xB7A1CC0)
#define BJMFOPNJPHE_AODMMBIELEP_OFFSET UNITYSDK_OFFSET(0xB7A1EB0)
#define BJMFOPNJPHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1FE0)
#define BJMFOPNJPHE_GET_HIDESKILLIDS_OFFSET UNITYSDK_OFFSET(0xB7A1FC0)
#define BJMFOPNJPHE_SET_HIDESKILLIDS_OFFSET UNITYSDK_OFFSET(0xB7A1FD0)

inline static constexpr unsigned int BJMFOPNJPHE_TypeDefinitionIndex = 56935;

	class BJMFOPNJPHE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _HideSkillIDs_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMFOPNJPHE_CTOR_OFFSET))(this);
		}

		::System::Void ALMKGIMGBIE(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BJMFOPNJPHE_ALMKGIMGBIE_OFFSET))(this, a1, a2);
		}

		::System::Void AODMMBIELEP(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + BJMFOPNJPHE_AODMMBIELEP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_HideSkillIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJMFOPNJPHE_GET_HIDESKILLIDS_OFFSET))(this);
		}

		::System::Void set_HideSkillIDs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + BJMFOPNJPHE_SET_HIDESKILLIDS_OFFSET))(this, a1);
		}

	};

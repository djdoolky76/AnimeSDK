#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHBPGKONLGI_CTOR_OFFSET UNITYSDK_OFFSET(0xEBC18C0)
#define DHBPGKONLGI_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xEBC18A0)
#define DHBPGKONLGI_GET_RARITYLIST_OFFSET UNITYSDK_OFFSET(0xEBC18B0)

inline static constexpr unsigned int DHBPGKONLGI_TypeDefinitionIndex = 75420;

	class DHBPGKONLGI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RarityList_k__BackingField; // 0x10
		::System::UInt32 _EntityRuntimeId_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DHBPGKONLGI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_EntityRuntimeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBPGKONLGI_GET_ENTITYRUNTIMEID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RarityList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHBPGKONLGI_GET_RARITYLIST_OFFSET))(this);
		}

	};

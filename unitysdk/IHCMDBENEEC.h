#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHCMDBENEEC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHCMDBENEEC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1640C980)
#define IHCMDBENEEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1640C9F0)
#define IHCMDBENEEC_GET_UNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x1640C960)
#define IHCMDBENEEC_SET_UNLOCKCHIP_OFFSET UNITYSDK_OFFSET(0x1640C970)

inline static constexpr unsigned int IHCMDBENEEC_TypeDefinitionIndex = 80185;

	class IHCMDBENEEC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockChip_k__BackingField; // 0x10
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IHCMDBENEEC_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockChip()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCMDBENEEC_GET_UNLOCKCHIP_OFFSET))(this);
		}

		::System::Void set_UnlockChip(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IHCMDBENEEC_SET_UNLOCKCHIP_OFFSET))(this, a1);
		}

		static ::IHCMDBENEEC* BPLPBPMEODA(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::IHCMDBENEEC*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IHCMDBENEEC_BPLPBPMEODA_OFFSET))(a1);
		}

	};

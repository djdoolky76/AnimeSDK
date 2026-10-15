#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define AHELKINLMHM_OPEJCELOFKG_CLEAR_OFFSET UNITYSDK_OFFSET(0xEB7FCF0)
#define AHELKINLMHM_OPEJCELOFKG_CTOR_OFFSET UNITYSDK_OFFSET(0xEB7FE00)
#define AHELKINLMHM_OPEJCELOFKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB7FD80)
#define AHELKINLMHM_OPEJCELOFKG_GET_PLACEDAVATARBASEIDS_OFFSET UNITYSDK_OFFSET(0xEB7FDF0)

inline static constexpr unsigned int AHELKINLMHM_OPEJCELOFKG_TypeDefinitionIndex = 67544;

	class AHELKINLMHM_OPEJCELOFKG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PlacedAvatarBaseIDs_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHELKINLMHM_OPEJCELOFKG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHELKINLMHM_OPEJCELOFKG_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHELKINLMHM_OPEJCELOFKG_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PlacedAvatarBaseIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHELKINLMHM_OPEJCELOFKG_GET_PLACEDAVATARBASEIDS_OFFSET))(this);
		}

	};

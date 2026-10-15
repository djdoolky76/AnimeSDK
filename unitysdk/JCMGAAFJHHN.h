#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftConditionType.h"
#include "unitysdk/System/Object.h"
class MBBPMEANHCL;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JCMGAAFJHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x165983C0)
#define JCMGAAFJHHN_GET_CACHEKEY_OFFSET UNITYSDK_OFFSET(0x16598380)
#define JCMGAAFJHHN_GET_ID_OFFSET UNITYSDK_OFFSET(0x16598390)
#define JCMGAAFJHHN_GET_PARAMLIST_OFFSET UNITYSDK_OFFSET(0x165983B0)
#define JCMGAAFJHHN_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x165983A0)

inline static constexpr unsigned int JCMGAAFJHHN_TypeDefinitionIndex = 80095;

	class JCMGAAFJHHN : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* _ParamList_k__BackingField; // 0x10
		::System::Int32 _CacheKey_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x1C
		::RPG::Client::MechCraft::MechCraftConditionType _Type_k__BackingField; // 0x20
		::System::Void _ctor(::MBBPMEANHCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBPMEANHCL*))((::PBYTE)hIl2Cpp + JCMGAAFJHHN_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CacheKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMGAAFJHHN_GET_CACHEKEY_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMGAAFJHHN_GET_ID_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftConditionType get_Type()
		{
			return ((::RPG::Client::MechCraft::MechCraftConditionType(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMGAAFJHHN_GET_TYPE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_ParamList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMGAAFJHHN_GET_PARAMLIST_OFFSET))(this);
		}

	};

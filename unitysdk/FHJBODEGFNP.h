#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define FHJBODEGFNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15780550)
#define FHJBODEGFNP_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x15780530)
#define FHJBODEGFNP_GET_ISNEWBESTRECORD_OFFSET UNITYSDK_OFFSET(0x15780540)
#define FHJBODEGFNP_KHNFOMHIKGK_OFFSET UNITYSDK_OFFSET(0x15780560)

inline static constexpr unsigned int FHJBODEGFNP_TypeDefinitionIndex = 81453;

	class FHJBODEGFNP : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* HDNGGBAIMPP; // 0x10
		::System::Boolean _IsNewBestRecord_k__BackingField; // 0x18
		::System::Boolean _HasReward_k__BackingField; // 0x19
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + FHJBODEGFNP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJBODEGFNP_GET_HASREWARD_OFFSET))(this);
		}

		::System::Boolean get_IsNewBestRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHJBODEGFNP_GET_ISNEWBESTRECORD_OFFSET))(this);
		}

		::System::Int32 KHNFOMHIKGK(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FHJBODEGFNP_KHNFOMHIKGK_OFFSET))(this, a1, a2);
		}

	};

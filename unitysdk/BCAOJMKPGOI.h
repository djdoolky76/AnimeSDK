#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Code/Manager/ECustomLateUpdateType.h"
#include "unitysdk/System/Object.h"
class EDFANOKAAPJ;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCAOJMKPGOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15E94110)
#define BCAOJMKPGOI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x15E94930)
#define BCAOJMKPGOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E94820)
#define BCAOJMKPGOI_KELLMBGNIJE_OFFSET UNITYSDK_OFFSET(0x15E94B30)
#define BCAOJMKPGOI_MMAEFKBHOOH_OFFSET UNITYSDK_OFFSET(0x15E94BE0)

inline static constexpr unsigned int BCAOJMKPGOI_TypeDefinitionIndex = 50057;

	class BCAOJMKPGOI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::HashSet_1<::EDFANOKAAPJ*>*>* IDJPMKDPMKJ; // 0x10
		::System::Collections::Generic::List_1<::EDFANOKAAPJ*>* ECIKLDGMMNJ; // 0x18
		::System::Boolean IKCCLIAIGCL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAOJMKPGOI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAOJMKPGOI_DISPOSE_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BCAOJMKPGOI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void KELLMBGNIJE(::Code::Manager::ECustomLateUpdateType a1, ::EDFANOKAAPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Manager::ECustomLateUpdateType, ::EDFANOKAAPJ*))((::PBYTE)hIl2Cpp + BCAOJMKPGOI_KELLMBGNIJE_OFFSET))(this, a1, a2);
		}

		::System::Void MMAEFKBHOOH(::Code::Manager::ECustomLateUpdateType a1, ::EDFANOKAAPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Code::Manager::ECustomLateUpdateType, ::EDFANOKAAPJ*))((::PBYTE)hIl2Cpp + BCAOJMKPGOI_MMAEFKBHOOH_OFFSET))(this, a1, a2);
		}

	};

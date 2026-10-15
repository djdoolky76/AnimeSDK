#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/Nullable_1.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPCPIMINKPL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90B810)
#define KPCPIMINKPL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C90B7A0)
#define KPCPIMINKPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90B740)
#define KPCPIMINKPL_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x1C90B870)

inline static constexpr unsigned int KPCPIMINKPL_TypeDefinitionIndex = 43006;

	class KPCPIMINKPL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* OCBIAPBAFOK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCPIMINKPL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + KPCPIMINKPL_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCPIMINKPL_CLEAR_OFFSET))(this);
		}

		::System::Boolean LCJMKJPECAP(::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>))((::PBYTE)hIl2Cpp + KPCPIMINKPL_LCJMKJPECAP_OFFSET))(this, a1);
		}

	};

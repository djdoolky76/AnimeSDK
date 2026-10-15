#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJAAEGOFFH;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define PLHOHFBLKJO_CNOODGAIJKL_OFFSET UNITYSDK_OFFSET(0x1C54FAC0)
#define PLHOHFBLKJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54F9B0)
#define PLHOHFBLKJO_GET_COUNTER_OFFSET UNITYSDK_OFFSET(0x1C54F9A0)
#define PLHOHFBLKJO_PCHKEMNEBCP_OFFSET UNITYSDK_OFFSET(0x1C5415F0)

inline static constexpr unsigned int PLHOHFBLKJO_TypeDefinitionIndex = 41802;

	class PLHOHFBLKJO : public ::System::Object
	{
	public:
		::R3::ReactiveProperty_1<::System::Boolean>* EGAPGJMOCDD; // 0x10
		::KLJAAEGOFFH* _Counter_k__BackingField; // 0x18
		::System::Int32 PEBAJGKDIMJ; // 0x20
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PLHOHFBLKJO_CTOR_OFFSET))(this, a1);
		}

		::KLJAAEGOFFH* get_Counter()
		{
			return ((::KLJAAEGOFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHOHFBLKJO_GET_COUNTER_OFFSET))(this);
		}

		::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* PCHKEMNEBCP()
		{
			return ((::R3::ReadOnlyReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHOHFBLKJO_PCHKEMNEBCP_OFFSET))(this);
		}

		::System::Void CNOODGAIJKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHOHFBLKJO_CNOODGAIJKL_OFFSET))(this);
		}

	};

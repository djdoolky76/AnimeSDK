#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMNOLJMLIFH_AMFONDKCDEN_OFFSET UNITYSDK_OFFSET(0xC3289D0)
#define PMNOLJMLIFH_CIJMOJJPBBN_OFFSET UNITYSDK_OFFSET(0xC328AA0)
#define PMNOLJMLIFH_CTOR_OFFSET UNITYSDK_OFFSET(0xC328B60)
#define PMNOLJMLIFH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC328A40)

inline static constexpr unsigned int PMNOLJMLIFH_TypeDefinitionIndex = 66718;

	class PMNOLJMLIFH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* OFKCFPAPCJP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNOLJMLIFH_CTOR_OFFSET))(this);
		}

		::System::Void AMFONDKCDEN(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + PMNOLJMLIFH_AMFONDKCDEN_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNOLJMLIFH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean CIJMOJJPBBN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMNOLJMLIFH_CIJMOJJPBBN_OFFSET))(this, a1);
		}

	};

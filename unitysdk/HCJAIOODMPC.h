#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDPFMFINJCO.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCJAIOODMPC_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C1FD40)
#define HCJAIOODMPC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C1FE10)
#define HCJAIOODMPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C1FDA0)

inline static constexpr unsigned int HCJAIOODMPC_TypeDefinitionIndex = 67557;

	class HCJAIOODMPC : public ::FDPFMFINJCO
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* CDOHINJOMIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJAIOODMPC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJAIOODMPC_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCJAIOODMPC_DISPOSE_OFFSET))(this);
		}

	};

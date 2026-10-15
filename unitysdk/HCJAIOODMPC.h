#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDPFMFINJCO.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCJAIOODMPC_CLEAR_OFFSET UNITYSDK_OFFSET(0x15C13000)
#define HCJAIOODMPC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C130D0)
#define HCJAIOODMPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C13060)

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

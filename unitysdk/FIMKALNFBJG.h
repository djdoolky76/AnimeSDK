#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FIMKALNFBJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C20AD20)

inline static constexpr unsigned int FIMKALNFBJG_TypeDefinitionIndex = 44723;

	class FIMKALNFBJG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FODNCKGIPIH; // 0x10
		::System::UInt32 MBBOHOKGBLM; // 0x18
		::System::UInt32 LFOIKMFLNKJ; // 0x1C
		::System::UInt32 NHGOPBABGMA; // 0x20
		::System::UInt32 BIAOGIGAAGA; // 0x24
		::System::UInt32 HJKGOKOGCPO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIMKALNFBJG_CTOR_OFFSET))(this);
		}

	};

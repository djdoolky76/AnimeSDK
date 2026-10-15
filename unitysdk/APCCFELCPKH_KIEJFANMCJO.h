#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APCCFELCPKH_KIEJFANMCJO_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA3C40)

inline static constexpr unsigned int APCCFELCPKH_KIEJFANMCJO_TypeDefinitionIndex = 60239;

	class APCCFELCPKH_KIEJFANMCJO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* EEBEGPJMGPD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_KIEJFANMCJO_CTOR_OFFSET))(this);
		}

	};

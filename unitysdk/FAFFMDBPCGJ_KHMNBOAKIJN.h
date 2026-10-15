#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FiveDimRenderingItem;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAFFMDBPCGJ_KHMNBOAKIJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1566E090)

inline static constexpr unsigned int FAFFMDBPCGJ_KHMNBOAKIJN_TypeDefinitionIndex = 76727;

	class FAFFMDBPCGJ_KHMNBOAKIJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FiveDimRenderingItem*>* PGHEGHLPIDH; // 0x10
		::System::Single AIDNPNEBLII; // 0x18
		::System::Boolean ICEEGGIDIJA; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 GAEMLFENHAG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_KHMNBOAKIJN_CTOR_OFFSET))(this);
		}

	};

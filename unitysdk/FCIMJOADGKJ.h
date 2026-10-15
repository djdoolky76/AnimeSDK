#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEENIKOBFFM;

#define FCIMJOADGKJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA38060)
#define FCIMJOADGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA380E0)

inline static constexpr unsigned int FCIMJOADGKJ_TypeDefinitionIndex = 42992;

	class FCIMJOADGKJ : public ::System::Object
	{
	public:
		::EEENIKOBFFM* DBCMEECFEBC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIMJOADGKJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIMJOADGKJ_CLEAR_OFFSET))(this);
		}

	};

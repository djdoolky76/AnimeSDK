#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEENIKOBFFM;

#define FCIMJOADGKJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC29DC0)
#define FCIMJOADGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC29E40)

inline static constexpr unsigned int FCIMJOADGKJ_TypeDefinitionIndex = 43973;

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

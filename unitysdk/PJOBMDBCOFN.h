#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Version; }

#define PJOBMDBCOFN_CTOR_OFFSET UNITYSDK_OFFSET(0xC29E2F0)

inline static constexpr unsigned int PJOBMDBCOFN_TypeDefinitionIndex = 82246;

	class PJOBMDBCOFN : public ::System::Object
	{
	public:
		::System::Version* EHEPCDFLBMH; // 0x10
		::System::Int32 NOIEMNLMACN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOBMDBCOFN_CTOR_OFFSET))(this);
		}

	};

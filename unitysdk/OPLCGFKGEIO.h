#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOAKMDKBOJJ;

#define OPLCGFKGEIO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFA8A10)
#define OPLCGFKGEIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA8DF0)

inline static constexpr unsigned int OPLCGFKGEIO_TypeDefinitionIndex = 54294;

	class OPLCGFKGEIO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPLCGFKGEIO_CTOR_OFFSET))(this);
		}

		static ::FOAKMDKBOJJ* BPLPBPMEODA()
		{
			return ((::FOAKMDKBOJJ*(*)())((::PBYTE)hIl2Cpp + OPLCGFKGEIO_BPLPBPMEODA_OFFSET))();
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class MethodInfo; }

#define SQLITE_FASTCOLUMNSETTER_GETFASTSETTERMETHODINFOUNSAFE_OFFSET UNITYSDK_OFFSET(0x1ECEFC80)
#define SQLITE_FASTCOLUMNSETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECEFE30)

namespace SQLite
{
	inline static constexpr unsigned int FastColumnSetter_TypeDefinitionIndex = 37070;

	class FastColumnSetter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::MethodInfo* GetFastSetterMethodInfoUnsafe(::System::Type* mappedType)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_FASTCOLUMNSETTER_GETFASTSETTERMETHODINFOUNSAFE_OFFSET))(mappedType);
		}
	};
}

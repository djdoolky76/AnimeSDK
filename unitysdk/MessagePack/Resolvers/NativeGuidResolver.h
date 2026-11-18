#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER_GETFORMATTERHELPER_OFFSET UNITYSDK_OFFSET(0x1EF1DE60)
#define MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF1DF60)
#define MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF1DE50)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int NativeGuidResolver_TypeDefinitionIndex = 29952;

	class NativeGuidResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::NativeGuidResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::NativeGuidResolver**)Il2CppClass::FromTypeDefinitionIndex(NativeGuidResolver_TypeDefinitionIndex)->GetStaticField(0x271A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatterHelper(::System::Type* t)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_NATIVEGUIDRESOLVER_GETFORMATTERHELPER_OFFSET))(t);
		}
	};
}

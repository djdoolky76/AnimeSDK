#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/IDGenerator_Impl.h"

#define FOUNDATION_IDGENERATOR_GETINTERNALCOUNTER_OFFSET UNITYSDK_OFFSET(0x1E5FAC60)
#define FOUNDATION_IDGENERATOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E5FADE0)

namespace Foundation
{
	inline static constexpr unsigned int IDGenerator_TypeDefinitionIndex = 9035;

	class IDGenerator : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__threadID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(IDGenerator_TypeDefinitionIndex)->GetStaticField(0x3D10);
		}
		static ::System::Nullable_1<::System::Object*>* StaticGet__impl()
		{
			return (::System::Nullable_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(IDGenerator_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::Foundation::IDGenerator_Impl GetInternalCounter()
		{
			return ((::Foundation::IDGenerator_Impl(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IDGENERATOR_GETINTERNALCOUNTER_OFFSET))();
		}

		static ::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + FOUNDATION_IDGENERATOR_INVOKE_OFFSET))();
		}
	};
}

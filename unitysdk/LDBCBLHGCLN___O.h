#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class ConstructorInfo; }

inline static constexpr unsigned int LDBCBLHGCLN___O_TypeDefinitionIndex = 44220;

	class LDBCBLHGCLN___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::Reflection::ConstructorInfo*>** StaticGet__0____CreateConstructor()
		{
			return (::System::Func_2<::System::Type*, ::System::Reflection::ConstructorInfo*>**)UnitySDK::FromName("", "<>O")->GetStaticField(0x49A00);
		}

	};

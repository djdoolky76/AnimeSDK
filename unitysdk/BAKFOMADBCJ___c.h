#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAKFOMADBCJ;
namespace System { class Object; }

#define BAKFOMADBCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78CEC0)
#define BAKFOMADBCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78CF00)
#define BAKFOMADBCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E78CF10)

inline static constexpr unsigned int BAKFOMADBCJ___c_TypeDefinitionIndex = 34855;

	class BAKFOMADBCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAKFOMADBCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ___C_CTOR_OFFSET))(this);
		}

		::BAKFOMADBCJ* __cctor_b__23_0()
		{
			return ((::BAKFOMADBCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAKFOMADBCJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

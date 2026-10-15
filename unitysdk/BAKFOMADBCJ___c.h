#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAKFOMADBCJ;
namespace System { class Object; }

#define BAKFOMADBCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BA4C0)
#define BAKFOMADBCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BA500)
#define BAKFOMADBCJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7BA510)

inline static constexpr unsigned int BAKFOMADBCJ___c_TypeDefinitionIndex = 34855;

	class BAKFOMADBCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45E30);
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

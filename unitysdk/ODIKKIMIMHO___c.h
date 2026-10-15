#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODIKKIMIMHO;
namespace System { class Object; }

#define ODIKKIMIMHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E9D0)
#define ODIKKIMIMHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1EA10)
#define ODIKKIMIMHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE1EA20)

inline static constexpr unsigned int ODIKKIMIMHO___c_TypeDefinitionIndex = 34528;

	class ODIKKIMIMHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODIKKIMIMHO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO___C_CTOR_OFFSET))(this);
		}

		::ODIKKIMIMHO* __cctor_b__23_0()
		{
			return ((::ODIKKIMIMHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODIKKIMIMHO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

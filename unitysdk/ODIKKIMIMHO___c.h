#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODIKKIMIMHO;
namespace System { class Object; }

#define ODIKKIMIMHO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0BEE30)
#define ODIKKIMIMHO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0BEE70)
#define ODIKKIMIMHO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0BEE80)

inline static constexpr unsigned int ODIKKIMIMHO___c_TypeDefinitionIndex = 35456;

	class ODIKKIMIMHO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE4D0);
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

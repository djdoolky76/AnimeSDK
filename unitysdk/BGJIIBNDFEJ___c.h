#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGJIIBNDFEJ;
namespace System { class Object; }

#define BGJIIBNDFEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7A1A0)
#define BGJIIBNDFEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7A1E0)
#define BGJIIBNDFEJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA7A1F0)

inline static constexpr unsigned int BGJIIBNDFEJ___c_TypeDefinitionIndex = 27279;

	class BGJIIBNDFEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGJIIBNDFEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJIIBNDFEJ___C_CTOR_OFFSET))(this);
		}

		::BGJIIBNDFEJ* __cctor_b__23_0()
		{
			return ((::BGJIIBNDFEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGJIIBNDFEJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

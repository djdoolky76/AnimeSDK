#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFKEBOHGDKF;
namespace System { class Object; }

#define DFKEBOHGDKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFB8890)
#define DFKEBOHGDKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB88C0)
#define DFKEBOHGDKF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FFB88D0)

inline static constexpr unsigned int DFKEBOHGDKF___c_TypeDefinitionIndex = 29422;

	class DFKEBOHGDKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKEBOHGDKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF___C_CTOR_OFFSET))(this);
		}

		::DFKEBOHGDKF* __cctor_b__18_0()
		{
			return ((::DFKEBOHGDKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKEBOHGDKF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

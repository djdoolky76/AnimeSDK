#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPPLEPMEEHJ;
namespace System { class Object; }

#define FPPLEPMEEHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E3BF0)
#define FPPLEPMEEHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E3C30)
#define FPPLEPMEEHJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3E3C40)

inline static constexpr unsigned int FPPLEPMEEHJ___c_TypeDefinitionIndex = 27640;

	class FPPLEPMEEHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPPLEPMEEHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ___C_CTOR_OFFSET))(this);
		}

		::FPPLEPMEEHJ* __cctor_b__33_0()
		{
			return ((::FPPLEPMEEHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPPLEPMEEHJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

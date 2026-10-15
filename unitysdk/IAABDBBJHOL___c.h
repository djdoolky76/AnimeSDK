#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAABDBBJHOL;
namespace System { class Object; }

#define IAABDBBJHOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D4B80)
#define IAABDBBJHOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D4BC0)
#define IAABDBBJHOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5D4BD0)

inline static constexpr unsigned int IAABDBBJHOL___c_TypeDefinitionIndex = 29551;

	class IAABDBBJHOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAABDBBJHOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAABDBBJHOL___C_CTOR_OFFSET))(this);
		}

		::IAABDBBJHOL* __cctor_b__33_0()
		{
			return ((::IAABDBBJHOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAABDBBJHOL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

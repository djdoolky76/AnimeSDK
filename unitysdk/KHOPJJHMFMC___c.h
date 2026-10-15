#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHOPJJHMFMC;
namespace System { class Object; }

#define KHOPJJHMFMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E822AD0)
#define KHOPJJHMFMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E822B10)
#define KHOPJJHMFMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E822B20)

inline static constexpr unsigned int KHOPJJHMFMC___c_TypeDefinitionIndex = 31204;

	class KHOPJJHMFMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOPJJHMFMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC___C_CTOR_OFFSET))(this);
		}

		::KHOPJJHMFMC* __cctor_b__23_0()
		{
			return ((::KHOPJJHMFMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

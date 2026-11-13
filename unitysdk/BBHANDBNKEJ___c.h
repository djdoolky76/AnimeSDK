#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBHANDBNKEJ;
namespace System { class Object; }

#define BBHANDBNKEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA70CF0)
#define BBHANDBNKEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA70D20)
#define BBHANDBNKEJ___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1FA70D30)

inline static constexpr unsigned int BBHANDBNKEJ___c_TypeDefinitionIndex = 28046;

	class BBHANDBNKEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBHANDBNKEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHANDBNKEJ___C_CTOR_OFFSET))(this);
		}

		::BBHANDBNKEJ* __cctor_b__108_0()
		{
			return ((::BBHANDBNKEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBHANDBNKEJ___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};

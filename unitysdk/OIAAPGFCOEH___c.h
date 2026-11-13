#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIAAPGFCOEH;
namespace System { class Object; }

#define OIAAPGFCOEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE9F70)
#define OIAAPGFCOEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE9FB0)
#define OIAAPGFCOEH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FCE9FC0)

inline static constexpr unsigned int OIAAPGFCOEH___c_TypeDefinitionIndex = 27422;

	class OIAAPGFCOEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIAAPGFCOEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH___C_CTOR_OFFSET))(this);
		}

		::OIAAPGFCOEH* __cctor_b__33_0()
		{
			return ((::OIAAPGFCOEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

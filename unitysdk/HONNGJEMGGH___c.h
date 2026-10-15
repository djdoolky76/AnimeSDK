#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HONNGJEMGGH;
namespace System { class Object; }

#define HONNGJEMGGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C52D0)
#define HONNGJEMGGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5310)
#define HONNGJEMGGH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5C5320)

inline static constexpr unsigned int HONNGJEMGGH___c_TypeDefinitionIndex = 29367;

	class HONNGJEMGGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HONNGJEMGGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH___C_CTOR_OFFSET))(this);
		}

		::HONNGJEMGGH* __cctor_b__43_0()
		{
			return ((::HONNGJEMGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

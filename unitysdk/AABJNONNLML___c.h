#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AABJNONNLML;
namespace System { class Object; }

#define AABJNONNLML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD88F40)
#define AABJNONNLML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD88F80)
#define AABJNONNLML___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DD88F90)

inline static constexpr unsigned int AABJNONNLML___c_TypeDefinitionIndex = 27241;

	class AABJNONNLML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E2B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AABJNONNLML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML___C_CTOR_OFFSET))(this);
		}

		::AABJNONNLML* __cctor_b__38_0()
		{
			return ((::AABJNONNLML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABJNONNLML___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

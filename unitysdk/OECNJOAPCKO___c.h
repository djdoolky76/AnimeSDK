#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OECNJOAPCKO;
namespace System { class Object; }

#define OECNJOAPCKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6ED0)
#define OECNJOAPCKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6F00)
#define OECNJOAPCKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDF6F10)

inline static constexpr unsigned int OECNJOAPCKO___c_TypeDefinitionIndex = 33145;

	class OECNJOAPCKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OECNJOAPCKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO___C_CTOR_OFFSET))(this);
		}

		::OECNJOAPCKO* __cctor_b__28_0()
		{
			return ((::OECNJOAPCKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OECNJOAPCKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

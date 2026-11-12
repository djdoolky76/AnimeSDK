#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPJHIIDAGN;
namespace System { class Object; }

#define CLPJHIIDAGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3F6AD0)
#define CLPJHIIDAGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F6B10)
#define CLPJHIIDAGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F3F6B20)

inline static constexpr unsigned int CLPJHIIDAGN___c_TypeDefinitionIndex = 33660;

	class CLPJHIIDAGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPJHIIDAGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN___C_CTOR_OFFSET))(this);
		}

		::CLPJHIIDAGN* __cctor_b__28_0()
		{
			return ((::CLPJHIIDAGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPJHIIDAGN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

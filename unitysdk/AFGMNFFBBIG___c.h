#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFGMNFFBBIG;
namespace System { class Object; }

#define AFGMNFFBBIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5EAF10)
#define AFGMNFFBBIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5EAF40)
#define AFGMNFFBBIG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F5EAF50)

inline static constexpr unsigned int AFGMNFFBBIG___c_TypeDefinitionIndex = 25959;

	class AFGMNFFBBIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFGMNFFBBIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGMNFFBBIG___C_CTOR_OFFSET))(this);
		}

		::AFGMNFFBBIG* __cctor_b__43_0()
		{
			return ((::AFGMNFFBBIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFGMNFFBBIG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

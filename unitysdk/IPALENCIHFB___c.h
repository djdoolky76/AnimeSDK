#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPALENCIHFB;
namespace System { class Object; }

#define IPALENCIHFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F686FA0)
#define IPALENCIHFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F686FE0)
#define IPALENCIHFB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F686FF0)

inline static constexpr unsigned int IPALENCIHFB___c_TypeDefinitionIndex = 27330;

	class IPALENCIHFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPALENCIHFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB___C_CTOR_OFFSET))(this);
		}

		::IPALENCIHFB* __cctor_b__43_0()
		{
			return ((::IPALENCIHFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPALENCIHFB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

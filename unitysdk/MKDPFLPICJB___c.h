#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDPFLPICJB;
namespace System { class Object; }

#define MKDPFLPICJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA55FE0)
#define MKDPFLPICJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56010)
#define MKDPFLPICJB___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EA56020)

inline static constexpr unsigned int MKDPFLPICJB___c_TypeDefinitionIndex = 34739;

	class MKDPFLPICJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDPFLPICJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPFLPICJB___C_CTOR_OFFSET))(this);
		}

		::MKDPFLPICJB* __cctor_b__48_0()
		{
			return ((::MKDPFLPICJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDPFLPICJB___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};

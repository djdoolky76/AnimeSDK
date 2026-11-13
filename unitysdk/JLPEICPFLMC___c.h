#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLPEICPFLMC;
namespace System { class Object; }

#define JLPEICPFLMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE7FA50)
#define JLPEICPFLMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE7FA90)
#define JLPEICPFLMC___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x1FE7FAA0)

inline static constexpr unsigned int JLPEICPFLMC___c_TypeDefinitionIndex = 27565;

	class JLPEICPFLMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPEICPFLMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPEICPFLMC___C_CTOR_OFFSET))(this);
		}

		::JLPEICPFLMC* __cctor_b__74_0()
		{
			return ((::JLPEICPFLMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPEICPFLMC___C___CCTOR_B__74_0_OFFSET))(this);
		}

	};

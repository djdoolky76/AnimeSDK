#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBGGLDILCLK;
namespace System { class Object; }

#define JBGGLDILCLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7DC0)
#define JBGGLDILCLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7DF0)
#define JBGGLDILCLK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6C7E00)

inline static constexpr unsigned int JBGGLDILCLK___c_TypeDefinitionIndex = 34745;

	class JBGGLDILCLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x592D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBGGLDILCLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK___C_CTOR_OFFSET))(this);
		}

		::JBGGLDILCLK* __cctor_b__28_0()
		{
			return ((::JBGGLDILCLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBGGLDILCLK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

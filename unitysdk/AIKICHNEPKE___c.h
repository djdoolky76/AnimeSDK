#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIKICHNEPKE;
namespace System { class Object; }

#define AIKICHNEPKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2050B5E0)
#define AIKICHNEPKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2050B620)
#define AIKICHNEPKE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2050B630)

inline static constexpr unsigned int AIKICHNEPKE___c_TypeDefinitionIndex = 29052;

	class AIKICHNEPKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30FF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIKICHNEPKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE___C_CTOR_OFFSET))(this);
		}

		::AIKICHNEPKE* __cctor_b__23_0()
		{
			return ((::AIKICHNEPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIKICHNEPKE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICNPODONHGN;
namespace System { class Object; }

#define ICNPODONHGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F942350)
#define ICNPODONHGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F942390)
#define ICNPODONHGN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9423A0)

inline static constexpr unsigned int ICNPODONHGN___c_TypeDefinitionIndex = 34427;

	class ICNPODONHGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICNPODONHGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN___C_CTOR_OFFSET))(this);
		}

		::ICNPODONHGN* __cctor_b__28_0()
		{
			return ((::ICNPODONHGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNPODONHGN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

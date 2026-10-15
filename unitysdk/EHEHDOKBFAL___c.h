#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHEHDOKBFAL;
namespace System { class Object; }

#define EHEHDOKBFAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E29E510)
#define EHEHDOKBFAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E550)
#define EHEHDOKBFAL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E29E560)

inline static constexpr unsigned int EHEHDOKBFAL___c_TypeDefinitionIndex = 25145;

	class EHEHDOKBFAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x483C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHEHDOKBFAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEHDOKBFAL___C_CTOR_OFFSET))(this);
		}

		::EHEHDOKBFAL* __cctor_b__38_0()
		{
			return ((::EHEHDOKBFAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHEHDOKBFAL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

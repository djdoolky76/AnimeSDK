#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHAJJBBEHBE;
namespace System { class Object; }

#define GHAJJBBEHBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E453D10)
#define GHAJJBBEHBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E453D50)
#define GHAJJBBEHBE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E453D60)

inline static constexpr unsigned int GHAJJBBEHBE___c_TypeDefinitionIndex = 32465;

	class GHAJJBBEHBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHAJJBBEHBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE___C_CTOR_OFFSET))(this);
		}

		::GHAJJBBEHBE* __cctor_b__33_0()
		{
			return ((::GHAJJBBEHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJJBBEHBE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPONDAHEKJN;
namespace System { class Object; }

#define GPONDAHEKJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC700)
#define GPONDAHEKJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FC730)
#define GPONDAHEKJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4FC740)

inline static constexpr unsigned int GPONDAHEKJN___c_TypeDefinitionIndex = 32059;

	class GPONDAHEKJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPONDAHEKJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN___C_CTOR_OFFSET))(this);
		}

		::GPONDAHEKJN* __cctor_b__28_0()
		{
			return ((::GPONDAHEKJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPONDAHEKJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

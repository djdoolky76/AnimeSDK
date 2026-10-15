#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACFNGBKOIDN;
namespace System { class Object; }

#define ACFNGBKOIDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDADCD0)
#define ACFNGBKOIDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDADD10)
#define ACFNGBKOIDN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DDADD20)

inline static constexpr unsigned int ACFNGBKOIDN___c_TypeDefinitionIndex = 33859;

	class ACFNGBKOIDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x324E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACFNGBKOIDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN___C_CTOR_OFFSET))(this);
		}

		::ACFNGBKOIDN* __cctor_b__33_0()
		{
			return ((::ACFNGBKOIDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFNGBKOIDN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

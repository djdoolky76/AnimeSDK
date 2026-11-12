#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPCLIOIHCKI;
namespace System { class Object; }

#define CPCLIOIHCKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F413AD0)
#define CPCLIOIHCKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F413B10)
#define CPCLIOIHCKI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F413B20)

inline static constexpr unsigned int CPCLIOIHCKI___c_TypeDefinitionIndex = 26698;

	class CPCLIOIHCKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPCLIOIHCKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI___C_CTOR_OFFSET))(this);
		}

		::CPCLIOIHCKI* __cctor_b__33_0()
		{
			return ((::CPCLIOIHCKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCLIOIHCKI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

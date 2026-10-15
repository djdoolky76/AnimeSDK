#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBOAECKDKNN;
namespace System { class Object; }

#define EBOAECKDKNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E245FD0)
#define EBOAECKDKNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E246000)
#define EBOAECKDKNN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E246010)

inline static constexpr unsigned int EBOAECKDKNN___c_TypeDefinitionIndex = 26503;

	class EBOAECKDKNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOAECKDKNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN___C_CTOR_OFFSET))(this);
		}

		::EBOAECKDKNN* __cctor_b__28_0()
		{
			return ((::EBOAECKDKNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

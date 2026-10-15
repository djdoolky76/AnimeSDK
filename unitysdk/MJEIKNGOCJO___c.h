#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJEIKNGOCJO;
namespace System { class Object; }

#define MJEIKNGOCJO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA19F60)
#define MJEIKNGOCJO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA19FA0)
#define MJEIKNGOCJO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA19FB0)

inline static constexpr unsigned int MJEIKNGOCJO___c_TypeDefinitionIndex = 30844;

	class MJEIKNGOCJO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJEIKNGOCJO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEIKNGOCJO___C_CTOR_OFFSET))(this);
		}

		::MJEIKNGOCJO* __cctor_b__33_0()
		{
			return ((::MJEIKNGOCJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJEIKNGOCJO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

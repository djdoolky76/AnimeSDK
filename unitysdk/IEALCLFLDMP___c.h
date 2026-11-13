#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEALCLFLDMP;
namespace System { class Object; }

#define IEALCLFLDMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20282BB0)
#define IEALCLFLDMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20282BF0)
#define IEALCLFLDMP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20282C00)

inline static constexpr unsigned int IEALCLFLDMP___c_TypeDefinitionIndex = 35314;

	class IEALCLFLDMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEALCLFLDMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP___C_CTOR_OFFSET))(this);
		}

		::IEALCLFLDMP* __cctor_b__33_0()
		{
			return ((::IEALCLFLDMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEALCLFLDMP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

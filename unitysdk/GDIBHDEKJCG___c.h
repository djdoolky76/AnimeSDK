#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDIBHDEKJCG;
namespace System { class Object; }

#define GDIBHDEKJCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41E0D0)
#define GDIBHDEKJCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41E110)
#define GDIBHDEKJCG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E41E120)

inline static constexpr unsigned int GDIBHDEKJCG___c_TypeDefinitionIndex = 25233;

	class GDIBHDEKJCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIBHDEKJCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG___C_CTOR_OFFSET))(this);
		}

		::GDIBHDEKJCG* __cctor_b__18_0()
		{
			return ((::GDIBHDEKJCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

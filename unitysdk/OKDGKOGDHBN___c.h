#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKDGKOGDHBN;
namespace System { class Object; }

#define OKDGKOGDHBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE92510)
#define OKDGKOGDHBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE92550)
#define OKDGKOGDHBN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE92560)

inline static constexpr unsigned int OKDGKOGDHBN___c_TypeDefinitionIndex = 27848;

	class OKDGKOGDHBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKDGKOGDHBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN___C_CTOR_OFFSET))(this);
		}

		::OKDGKOGDHBN* __cctor_b__18_0()
		{
			return ((::OKDGKOGDHBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKDGKOGDHBN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

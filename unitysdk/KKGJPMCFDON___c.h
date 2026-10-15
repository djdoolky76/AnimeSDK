#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKGJPMCFDON;
namespace System { class Object; }

#define KKGJPMCFDON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E878C20)
#define KKGJPMCFDON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E878C60)
#define KKGJPMCFDON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E878C70)

inline static constexpr unsigned int KKGJPMCFDON___c_TypeDefinitionIndex = 30064;

	class KKGJPMCFDON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKGJPMCFDON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON___C_CTOR_OFFSET))(this);
		}

		::KKGJPMCFDON* __cctor_b__23_0()
		{
			return ((::KKGJPMCFDON*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

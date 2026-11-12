#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGBGDAFPGID;
namespace System { class Object; }

#define GGBGDAFPGID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F766250)
#define GGBGDAFPGID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F766290)
#define GGBGDAFPGID___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7662A0)

inline static constexpr unsigned int GGBGDAFPGID___c_TypeDefinitionIndex = 31087;

	class GGBGDAFPGID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGBGDAFPGID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID___C_CTOR_OFFSET))(this);
		}

		::GGBGDAFPGID* __cctor_b__33_0()
		{
			return ((::GGBGDAFPGID*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGBGDAFPGID___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

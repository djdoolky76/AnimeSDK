#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DONHOEBBNNG;
namespace System { class Object; }

#define DONHOEBBNNG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D80C0)
#define DONHOEBBNNG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D80F0)
#define DONHOEBBNNG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E1D8100)

inline static constexpr unsigned int DONHOEBBNNG___c_TypeDefinitionIndex = 30244;

	class DONHOEBBNNG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x382D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DONHOEBBNNG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG___C_CTOR_OFFSET))(this);
		}

		::DONHOEBBNNG* __cctor_b__18_0()
		{
			return ((::DONHOEBBNNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DONHOEBBNNG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

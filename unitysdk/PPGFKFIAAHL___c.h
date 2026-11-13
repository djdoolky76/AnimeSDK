#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPGFKFIAAHL;
namespace System { class Object; }

#define PPGFKFIAAHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCD0810)
#define PPGFKFIAAHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCD0850)
#define PPGFKFIAAHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FCD0860)

inline static constexpr unsigned int PPGFKFIAAHL___c_TypeDefinitionIndex = 29064;

	class PPGFKFIAAHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x522D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGFKFIAAHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL___C_CTOR_OFFSET))(this);
		}

		::PPGFKFIAAHL* __cctor_b__28_0()
		{
			return ((::PPGFKFIAAHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGFKFIAAHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

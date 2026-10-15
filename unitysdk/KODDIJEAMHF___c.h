#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KODDIJEAMHF;
namespace System { class Object; }

#define KODDIJEAMHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E882410)
#define KODDIJEAMHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E882450)
#define KODDIJEAMHF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E882460)

inline static constexpr unsigned int KODDIJEAMHF___c_TypeDefinitionIndex = 34691;

	class KODDIJEAMHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KODDIJEAMHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KODDIJEAMHF___C_CTOR_OFFSET))(this);
		}

		::KODDIJEAMHF* __cctor_b__28_0()
		{
			return ((::KODDIJEAMHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KODDIJEAMHF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

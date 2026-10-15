#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLMODPLLMNF;
namespace System { class Object; }

#define FLMODPLLMNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AD3E0)
#define FLMODPLLMNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AD420)
#define FLMODPLLMNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3AD430)

inline static constexpr unsigned int FLMODPLLMNF___c_TypeDefinitionIndex = 32105;

	class FLMODPLLMNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C6A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLMODPLLMNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF___C_CTOR_OFFSET))(this);
		}

		::FLMODPLLMNF* __cctor_b__28_0()
		{
			return ((::FLMODPLLMNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLMODPLLMNF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

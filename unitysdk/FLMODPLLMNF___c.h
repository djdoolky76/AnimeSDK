#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLMODPLLMNF;
namespace System { class Object; }

#define FLMODPLLMNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C5C10)
#define FLMODPLLMNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C5C50)
#define FLMODPLLMNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6C5C60)

inline static constexpr unsigned int FLMODPLLMNF___c_TypeDefinitionIndex = 33018;

	class FLMODPLLMNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B310);
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

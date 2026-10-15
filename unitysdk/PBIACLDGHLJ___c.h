#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBIACLDGHLJ;
namespace System { class Object; }

#define PBIACLDGHLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF67E0)
#define PBIACLDGHLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF6820)
#define PBIACLDGHLJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEF6830)

inline static constexpr unsigned int PBIACLDGHLJ___c_TypeDefinitionIndex = 35017;

	class PBIACLDGHLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBIACLDGHLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ___C_CTOR_OFFSET))(this);
		}

		::PBIACLDGHLJ* __cctor_b__28_0()
		{
			return ((::PBIACLDGHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIACLDGHLJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

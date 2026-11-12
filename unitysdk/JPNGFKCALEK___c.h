#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPNGFKCALEK;
namespace System { class Object; }

#define JPNGFKCALEK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAEEF10)
#define JPNGFKCALEK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEEF50)
#define JPNGFKCALEK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FAEEF60)

inline static constexpr unsigned int JPNGFKCALEK___c_TypeDefinitionIndex = 35462;

	class JPNGFKCALEK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPNGFKCALEK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK___C_CTOR_OFFSET))(this);
		}

		::JPNGFKCALEK* __cctor_b__28_0()
		{
			return ((::JPNGFKCALEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPNGFKCALEK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

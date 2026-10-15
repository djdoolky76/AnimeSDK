#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GECCJHDOCKH;
namespace System { class Object; }

#define GECCJHDOCKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E424740)
#define GECCJHDOCKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E424780)
#define GECCJHDOCKH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E424790)

inline static constexpr unsigned int GECCJHDOCKH___c_TypeDefinitionIndex = 25607;

	class GECCJHDOCKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GECCJHDOCKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH___C_CTOR_OFFSET))(this);
		}

		::GECCJHDOCKH* __cctor_b__28_0()
		{
			return ((::GECCJHDOCKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GECCJHDOCKH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

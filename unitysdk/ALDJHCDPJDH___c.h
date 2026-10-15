#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALDJHCDPJDH;
namespace System { class Object; }

#define ALDJHCDPJDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A9A60)
#define ALDJHCDPJDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A9AA0)
#define ALDJHCDPJDH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3A9AB0)

inline static constexpr unsigned int ALDJHCDPJDH___c_TypeDefinitionIndex = 27400;

	class ALDJHCDPJDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDJHCDPJDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH___C_CTOR_OFFSET))(this);
		}

		::ALDJHCDPJDH* __cctor_b__28_0()
		{
			return ((::ALDJHCDPJDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDJHCDPJDH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

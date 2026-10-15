#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNEJIPGHCK;
namespace System { class Object; }

#define ONNEJIPGHCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA1FE0)
#define ONNEJIPGHCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA2010)
#define ONNEJIPGHCK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEA2020)

inline static constexpr unsigned int ONNEJIPGHCK___c_TypeDefinitionIndex = 33929;

	class ONNEJIPGHCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNEJIPGHCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK___C_CTOR_OFFSET))(this);
		}

		::ONNEJIPGHCK* __cctor_b__23_0()
		{
			return ((::ONNEJIPGHCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

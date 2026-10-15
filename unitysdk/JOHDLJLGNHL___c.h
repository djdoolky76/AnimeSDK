#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOHDLJLGNHL;
namespace System { class Object; }

#define JOHDLJLGNHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E775C40)
#define JOHDLJLGNHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E775C80)
#define JOHDLJLGNHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E775C90)

inline static constexpr unsigned int JOHDLJLGNHL___c_TypeDefinitionIndex = 35104;

	class JOHDLJLGNHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOHDLJLGNHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL___C_CTOR_OFFSET))(this);
		}

		::JOHDLJLGNHL* __cctor_b__28_0()
		{
			return ((::JOHDLJLGNHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOHDLJLGNHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

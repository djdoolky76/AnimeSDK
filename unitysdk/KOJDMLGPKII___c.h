#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOJDMLGPKII;
namespace System { class Object; }

#define KOJDMLGPKII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8856C0)
#define KOJDMLGPKII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E885700)
#define KOJDMLGPKII___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E885710)

inline static constexpr unsigned int KOJDMLGPKII___c_TypeDefinitionIndex = 27966;

	class KOJDMLGPKII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x217C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOJDMLGPKII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII___C_CTOR_OFFSET))(this);
		}

		::KOJDMLGPKII* __cctor_b__28_0()
		{
			return ((::KOJDMLGPKII*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJDMLGPKII___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

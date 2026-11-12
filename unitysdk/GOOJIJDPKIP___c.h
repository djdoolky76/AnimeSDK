#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOOJIJDPKIP;
namespace System { class Object; }

#define GOOJIJDPKIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8078F0)
#define GOOJIJDPKIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F807930)
#define GOOJIJDPKIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F807940)

inline static constexpr unsigned int GOOJIJDPKIP___c_TypeDefinitionIndex = 28677;

	class GOOJIJDPKIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOJIJDPKIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP___C_CTOR_OFFSET))(this);
		}

		::GOOJIJDPKIP* __cctor_b__23_0()
		{
			return ((::GOOJIJDPKIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOJIJDPKIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMCCBANNPKB;
namespace System { class Object; }

#define NMCCBANNPKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E270)
#define NMCCBANNPKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E2B0)
#define NMCCBANNPKB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB6E2C0)

inline static constexpr unsigned int NMCCBANNPKB___c_TypeDefinitionIndex = 32199;

	class NMCCBANNPKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BEA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMCCBANNPKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB___C_CTOR_OFFSET))(this);
		}

		::NMCCBANNPKB* __cctor_b__28_0()
		{
			return ((::NMCCBANNPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCCBANNPKB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

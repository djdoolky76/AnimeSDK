#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGPNJKENONA;
namespace System { class Object; }

#define BGPNJKENONA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF1F70)
#define BGPNJKENONA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF1FB0)
#define BGPNJKENONA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDF1FC0)

inline static constexpr unsigned int BGPNJKENONA___c_TypeDefinitionIndex = 26076;

	class BGPNJKENONA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGPNJKENONA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA___C_CTOR_OFFSET))(this);
		}

		::BGPNJKENONA* __cctor_b__18_0()
		{
			return ((::BGPNJKENONA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPNJKENONA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

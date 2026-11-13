#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKCONCOKNAN;
namespace System { class Object; }

#define IKCONCOKNAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20063E30)
#define IKCONCOKNAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20063E60)
#define IKCONCOKNAN___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x20063E70)

inline static constexpr unsigned int IKCONCOKNAN___c_TypeDefinitionIndex = 27827;

	class IKCONCOKNAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKCONCOKNAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN___C_CTOR_OFFSET))(this);
		}

		::IKCONCOKNAN* __cctor_b__43_0()
		{
			return ((::IKCONCOKNAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKCONCOKNAN___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

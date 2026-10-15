#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NACEGIAMJMG;
namespace System { class Object; }

#define NACEGIAMJMG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABE9C0)
#define NACEGIAMJMG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABEA00)
#define NACEGIAMJMG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EABEA10)

inline static constexpr unsigned int NACEGIAMJMG___c_TypeDefinitionIndex = 27932;

	class NACEGIAMJMG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NACEGIAMJMG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG___C_CTOR_OFFSET))(this);
		}

		::NACEGIAMJMG* __cctor_b__28_0()
		{
			return ((::NACEGIAMJMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NACEGIAMJMG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

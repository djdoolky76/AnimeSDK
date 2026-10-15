#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNAOBAFFOM;
namespace System { class Object; }

#define OMNAOBAFFOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC250)
#define OMNAOBAFFOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBC290)
#define OMNAOBAFFOM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DEBC2A0)

inline static constexpr unsigned int OMNAOBAFFOM___c_TypeDefinitionIndex = 27352;

	class OMNAOBAFFOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNAOBAFFOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM___C_CTOR_OFFSET))(this);
		}

		::OMNAOBAFFOM* __cctor_b__18_0()
		{
			return ((::OMNAOBAFFOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNAOBAFFOM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAEGLNJINGN;
namespace System { class Object; }

#define LAEGLNJINGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89E670)
#define LAEGLNJINGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89E6B0)
#define LAEGLNJINGN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E89E6C0)

inline static constexpr unsigned int LAEGLNJINGN___c_TypeDefinitionIndex = 28530;

	class LAEGLNJINGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x249A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAEGLNJINGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEGLNJINGN___C_CTOR_OFFSET))(this);
		}

		::LAEGLNJINGN* __cctor_b__38_0()
		{
			return ((::LAEGLNJINGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEGLNJINGN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

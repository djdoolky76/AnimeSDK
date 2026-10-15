#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOMEGNGJKJK;
namespace System { class Object; }

#define JOMEGNGJKJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA670)
#define JOMEGNGJKJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA6A0)
#define JOMEGNGJKJK___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E7AA6B0)

inline static constexpr unsigned int JOMEGNGJKJK___c_TypeDefinitionIndex = 26233;

	class JOMEGNGJKJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D3D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOMEGNGJKJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMEGNGJKJK___C_CTOR_OFFSET))(this);
		}

		::JOMEGNGJKJK* __cctor_b__53_0()
		{
			return ((::JOMEGNGJKJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOMEGNGJKJK___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};

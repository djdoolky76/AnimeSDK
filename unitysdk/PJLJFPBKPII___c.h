#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJLJFPBKPII;
namespace System { class Object; }

#define PJLJFPBKPII___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F22F770)
#define PJLJFPBKPII___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22F7A0)
#define PJLJFPBKPII___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F22F7B0)

inline static constexpr unsigned int PJLJFPBKPII___c_TypeDefinitionIndex = 30997;

	class PJLJFPBKPII___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AC40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJLJFPBKPII___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII___C_CTOR_OFFSET))(this);
		}

		::PJLJFPBKPII* __cctor_b__28_0()
		{
			return ((::PJLJFPBKPII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJLJFPBKPII___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

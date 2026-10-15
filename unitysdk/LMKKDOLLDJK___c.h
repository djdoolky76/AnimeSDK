#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMKKDOLLDJK;
namespace System { class Object; }

#define LMKKDOLLDJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E97C290)
#define LMKKDOLLDJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E97C2D0)
#define LMKKDOLLDJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E97C2E0)

inline static constexpr unsigned int LMKKDOLLDJK___c_TypeDefinitionIndex = 29402;

	class LMKKDOLLDJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMKKDOLLDJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKKDOLLDJK___C_CTOR_OFFSET))(this);
		}

		::LMKKDOLLDJK* __cctor_b__28_0()
		{
			return ((::LMKKDOLLDJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMKKDOLLDJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

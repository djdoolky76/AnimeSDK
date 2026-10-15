#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKLIDIDKFHC;
namespace System { class Object; }

#define EKLIDIDKFHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2984C0)
#define EKLIDIDKFHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E298500)
#define EKLIDIDKFHC___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E298510)

inline static constexpr unsigned int EKLIDIDKFHC___c_TypeDefinitionIndex = 26415;

	class EKLIDIDKFHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKLIDIDKFHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC___C_CTOR_OFFSET))(this);
		}

		::EKLIDIDKFHC* __cctor_b__43_0()
		{
			return ((::EKLIDIDKFHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLIDIDKFHC___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

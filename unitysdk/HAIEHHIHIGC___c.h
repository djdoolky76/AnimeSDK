#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAIEHHIHIGC;
namespace System { class Object; }

#define HAIEHHIHIGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F819EF0)
#define HAIEHHIHIGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F819F30)
#define HAIEHHIHIGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F819F40)

inline static constexpr unsigned int HAIEHHIHIGC___c_TypeDefinitionIndex = 26533;

	class HAIEHHIHIGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAIEHHIHIGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC___C_CTOR_OFFSET))(this);
		}

		::HAIEHHIHIGC* __cctor_b__28_0()
		{
			return ((::HAIEHHIHIGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIEHHIHIGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

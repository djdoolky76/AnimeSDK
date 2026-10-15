#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGJGEEEKNNC;
namespace System { class Object; }

#define KGJGEEEKNNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80B7F0)
#define KGJGEEEKNNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80B830)
#define KGJGEEEKNNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E80B840)

inline static constexpr unsigned int KGJGEEEKNNC___c_TypeDefinitionIndex = 28316;

	class KGJGEEEKNNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x154E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGJGEEEKNNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC___C_CTOR_OFFSET))(this);
		}

		::KGJGEEEKNNC* __cctor_b__23_0()
		{
			return ((::KGJGEEEKNNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGEEEKNNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

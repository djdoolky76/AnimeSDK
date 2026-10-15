#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFLOHLLMOJK;
namespace System { class Object; }

#define JFLOHLLMOJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E703830)
#define JFLOHLLMOJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E703870)
#define JFLOHLLMOJK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E703880)

inline static constexpr unsigned int JFLOHLLMOJK___c_TypeDefinitionIndex = 28314;

	class JFLOHLLMOJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFLOHLLMOJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK___C_CTOR_OFFSET))(this);
		}

		::JFLOHLLMOJK* __cctor_b__28_0()
		{
			return ((::JFLOHLLMOJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFLOHLLMOJK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

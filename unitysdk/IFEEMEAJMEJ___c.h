#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFEEMEAJMEJ;
namespace System { class Object; }

#define IFEEMEAJMEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E617F00)
#define IFEEMEAJMEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E617F30)
#define IFEEMEAJMEJ___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E617F40)

inline static constexpr unsigned int IFEEMEAJMEJ___c_TypeDefinitionIndex = 25921;

	class IFEEMEAJMEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFEEMEAJMEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ___C_CTOR_OFFSET))(this);
		}

		::IFEEMEAJMEJ* __cctor_b__36_0()
		{
			return ((::IFEEMEAJMEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEEMEAJMEJ___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEHGBKOBEF;
namespace System { class Object; }

#define AGEHGBKOBEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12A590)
#define AGEHGBKOBEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12A5C0)
#define AGEHGBKOBEF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E12A5D0)

inline static constexpr unsigned int AGEHGBKOBEF___c_TypeDefinitionIndex = 32657;

	class AGEHGBKOBEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGEHGBKOBEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF___C_CTOR_OFFSET))(this);
		}

		::AGEHGBKOBEF* __cctor_b__28_0()
		{
			return ((::AGEHGBKOBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGEHGBKOBEF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

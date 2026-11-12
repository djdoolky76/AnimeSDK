#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEMIDPFEJFL;
namespace System { class Object; }

#define NEMIDPFEJFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3F9C0)
#define NEMIDPFEJFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3FA00)
#define NEMIDPFEJFL___C___CCTOR_B__65_0_OFFSET UNITYSDK_OFFSET(0x1FE3FA10)

inline static constexpr unsigned int NEMIDPFEJFL___c_TypeDefinitionIndex = 31957;

	class NEMIDPFEJFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEMIDPFEJFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMIDPFEJFL___C_CTOR_OFFSET))(this);
		}

		::NEMIDPFEJFL* __cctor_b__65_0()
		{
			return ((::NEMIDPFEJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMIDPFEJFL___C___CCTOR_B__65_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEIKFFFGONB;
namespace System { class Object; }

#define JEIKFFFGONB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F11D0)
#define JEIKFFFGONB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F1200)
#define JEIKFFFGONB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6F1210)

inline static constexpr unsigned int JEIKFFFGONB___c_TypeDefinitionIndex = 33224;

	class JEIKFFFGONB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIKFFFGONB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB___C_CTOR_OFFSET))(this);
		}

		::JEIKFFFGONB* __cctor_b__28_0()
		{
			return ((::JEIKFFFGONB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIKFFFGONB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

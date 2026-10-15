#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAMPBNNKEOK;
namespace System { class Object; }

#define AAMPBNNKEOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD93B10)
#define AAMPBNNKEOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD93B50)
#define AAMPBNNKEOK___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DD93B60)

inline static constexpr unsigned int AAMPBNNKEOK___c_TypeDefinitionIndex = 30209;

	class AAMPBNNKEOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAMPBNNKEOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMPBNNKEOK___C_CTOR_OFFSET))(this);
		}

		::AAMPBNNKEOK* __cctor_b__43_0()
		{
			return ((::AAMPBNNKEOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAMPBNNKEOK___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEIAEAEGEBJ;
namespace System { class Object; }

#define JEIAEAEGEBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20610CC0)
#define JEIAEAEGEBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20610D00)
#define JEIAEAEGEBJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20610D10)

inline static constexpr unsigned int JEIAEAEGEBJ___c_TypeDefinitionIndex = 33180;

	class JEIAEAEGEBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEIAEAEGEBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ___C_CTOR_OFFSET))(this);
		}

		::JEIAEAEGEBJ* __cctor_b__38_0()
		{
			return ((::JEIAEAEGEBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIAEAEGEBJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

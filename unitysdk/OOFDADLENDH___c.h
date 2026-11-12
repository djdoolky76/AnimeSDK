#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOFDADLENDH;
namespace System { class Object; }

#define OOFDADLENDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A0C40)
#define OOFDADLENDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A0C80)
#define OOFDADLENDH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F1A0C90)

inline static constexpr unsigned int OOFDADLENDH___c_TypeDefinitionIndex = 34929;

	class OOFDADLENDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27F30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOFDADLENDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH___C_CTOR_OFFSET))(this);
		}

		::OOFDADLENDH* __cctor_b__18_0()
		{
			return ((::OOFDADLENDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOFDADLENDH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHJICBCHMO;
namespace System { class Object; }

#define JLHJICBCHMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74C720)
#define JLHJICBCHMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74C760)
#define JLHJICBCHMO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E74C770)

inline static constexpr unsigned int JLHJICBCHMO___c_TypeDefinitionIndex = 32869;

	class JLHJICBCHMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHJICBCHMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO___C_CTOR_OFFSET))(this);
		}

		::JLHJICBCHMO* __cctor_b__28_0()
		{
			return ((::JLHJICBCHMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHJICBCHMO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

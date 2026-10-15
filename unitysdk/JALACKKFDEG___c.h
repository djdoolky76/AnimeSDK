#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JALACKKFDEG;
namespace System { class Object; }

#define JALACKKFDEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F0B70)
#define JALACKKFDEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F0BB0)
#define JALACKKFDEG___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E6F0BC0)

inline static constexpr unsigned int JALACKKFDEG___c_TypeDefinitionIndex = 27944;

	class JALACKKFDEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JALACKKFDEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JALACKKFDEG___C_CTOR_OFFSET))(this);
		}

		::JALACKKFDEG* __cctor_b__58_0()
		{
			return ((::JALACKKFDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JALACKKFDEG___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};

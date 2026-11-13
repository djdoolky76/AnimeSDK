#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGCBEKKJCJN;
namespace System { class Object; }

#define GGCBEKKJCJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20264160)
#define GGCBEKKJCJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202641A0)
#define GGCBEKKJCJN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202641B0)

inline static constexpr unsigned int GGCBEKKJCJN___c_TypeDefinitionIndex = 27467;

	class GGCBEKKJCJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGCBEKKJCJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN___C_CTOR_OFFSET))(this);
		}

		::GGCBEKKJCJN* __cctor_b__23_0()
		{
			return ((::GGCBEKKJCJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGCBEKKJCJN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

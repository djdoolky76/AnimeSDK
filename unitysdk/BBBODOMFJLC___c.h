#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBBODOMFJLC;
namespace System { class Object; }

#define BBBODOMFJLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA79C70)
#define BBBODOMFJLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA79CB0)
#define BBBODOMFJLC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FA79CC0)

inline static constexpr unsigned int BBBODOMFJLC___c_TypeDefinitionIndex = 26607;

	class BBBODOMFJLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBBODOMFJLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBODOMFJLC___C_CTOR_OFFSET))(this);
		}

		::BBBODOMFJLC* __cctor_b__18_0()
		{
			return ((::BBBODOMFJLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBODOMFJLC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

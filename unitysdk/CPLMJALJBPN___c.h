#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPLMJALJBPN;
namespace System { class Object; }

#define CPLMJALJBPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E116A30)
#define CPLMJALJBPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E116A70)
#define CPLMJALJBPN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E116A80)

inline static constexpr unsigned int CPLMJALJBPN___c_TypeDefinitionIndex = 34152;

	class CPLMJALJBPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPLMJALJBPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN___C_CTOR_OFFSET))(this);
		}

		::CPLMJALJBPN* __cctor_b__18_0()
		{
			return ((::CPLMJALJBPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPLMJALJBPN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

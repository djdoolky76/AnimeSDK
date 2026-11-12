#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INIMLGAKMFB;
namespace System { class Object; }

#define INIMLGAKMFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9CC1F0)
#define INIMLGAKMFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9CC230)
#define INIMLGAKMFB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9CC240)

inline static constexpr unsigned int INIMLGAKMFB___c_TypeDefinitionIndex = 31699;

	class INIMLGAKMFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INIMLGAKMFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB___C_CTOR_OFFSET))(this);
		}

		::INIMLGAKMFB* __cctor_b__23_0()
		{
			return ((::INIMLGAKMFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIMLGAKMFB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

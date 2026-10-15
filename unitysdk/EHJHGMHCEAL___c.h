#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHJHGMHCEAL;
namespace System { class Object; }

#define EHJHGMHCEAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2734B0)
#define EHJHGMHCEAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2734F0)
#define EHJHGMHCEAL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E273500)

inline static constexpr unsigned int EHJHGMHCEAL___c_TypeDefinitionIndex = 32281;

	class EHJHGMHCEAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHJHGMHCEAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJHGMHCEAL___C_CTOR_OFFSET))(this);
		}

		::EHJHGMHCEAL* __cctor_b__18_0()
		{
			return ((::EHJHGMHCEAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJHGMHCEAL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

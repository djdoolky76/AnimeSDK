#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNOLJDOPBDG;
namespace System { class Object; }

#define KNOLJDOPBDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87C2A0)
#define KNOLJDOPBDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87C2E0)
#define KNOLJDOPBDG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E87C2F0)

inline static constexpr unsigned int KNOLJDOPBDG___c_TypeDefinitionIndex = 33414;

	class KNOLJDOPBDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOLJDOPBDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG___C_CTOR_OFFSET))(this);
		}

		::KNOLJDOPBDG* __cctor_b__33_0()
		{
			return ((::KNOLJDOPBDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOLJDOPBDG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

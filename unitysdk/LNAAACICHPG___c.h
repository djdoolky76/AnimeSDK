#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNAAACICHPG;
namespace System { class Object; }

#define LNAAACICHPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0020)
#define LNAAACICHPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0060)
#define LNAAACICHPG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9B0070)

inline static constexpr unsigned int LNAAACICHPG___c_TypeDefinitionIndex = 26632;

	class LNAAACICHPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E5A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNAAACICHPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG___C_CTOR_OFFSET))(this);
		}

		::LNAAACICHPG* __cctor_b__33_0()
		{
			return ((::LNAAACICHPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNAAACICHPG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

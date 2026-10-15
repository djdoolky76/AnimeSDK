#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFGMCNFHHBE;
namespace System { class Object; }

#define NFGMCNFHHBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB020D0)
#define NFGMCNFHHBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB02110)
#define NFGMCNFHHBE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB02120)

inline static constexpr unsigned int NFGMCNFHHBE___c_TypeDefinitionIndex = 34677;

	class NFGMCNFHHBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFGMCNFHHBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE___C_CTOR_OFFSET))(this);
		}

		::NFGMCNFHHBE* __cctor_b__28_0()
		{
			return ((::NFGMCNFHHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGMCNFHHBE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNFGDEAIHNL;
namespace System { class Object; }

#define LNFGDEAIHNL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B3B90)
#define LNFGDEAIHNL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B3BC0)
#define LNFGDEAIHNL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9B3BD0)

inline static constexpr unsigned int LNFGDEAIHNL___c_TypeDefinitionIndex = 26531;

	class LNFGDEAIHNL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x500F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNFGDEAIHNL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL___C_CTOR_OFFSET))(this);
		}

		::LNFGDEAIHNL* __cctor_b__18_0()
		{
			return ((::LNFGDEAIHNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFGDEAIHNL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

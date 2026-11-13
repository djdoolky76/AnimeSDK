#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAKCFDPNFM;
namespace System { class Object; }

#define BFAKCFDPNFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA02DB0)
#define BFAKCFDPNFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA02DF0)
#define BFAKCFDPNFM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA02E00)

inline static constexpr unsigned int BFAKCFDPNFM___c_TypeDefinitionIndex = 32702;

	class BFAKCFDPNFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAKCFDPNFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM___C_CTOR_OFFSET))(this);
		}

		::BFAKCFDPNFM* __cctor_b__28_0()
		{
			return ((::BFAKCFDPNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAKCFDPNFM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

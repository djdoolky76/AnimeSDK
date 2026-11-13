#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPMFDKPNHDA;
namespace System { class Object; }

#define DPMFDKPNHDA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F776FB0)
#define DPMFDKPNHDA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F776FF0)
#define DPMFDKPNHDA___C___CCTOR_B__24_0_OFFSET UNITYSDK_OFFSET(0x1F777000)

inline static constexpr unsigned int DPMFDKPNHDA___c_TypeDefinitionIndex = 30615;

	class DPMFDKPNHDA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C1E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPMFDKPNHDA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA___C_CTOR_OFFSET))(this);
		}

		::DPMFDKPNHDA* __cctor_b__24_0()
		{
			return ((::DPMFDKPNHDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMFDKPNHDA___C___CCTOR_B__24_0_OFFSET))(this);
		}

	};

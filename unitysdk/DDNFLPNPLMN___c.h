#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNFLPNPLMN;
namespace System { class Object; }

#define DDNFLPNPLMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4641F0)
#define DDNFLPNPLMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F464220)
#define DDNFLPNPLMN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F464230)

inline static constexpr unsigned int DDNFLPNPLMN___c_TypeDefinitionIndex = 34846;

	class DDNFLPNPLMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDNFLPNPLMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN___C_CTOR_OFFSET))(this);
		}

		::DDNFLPNPLMN* __cctor_b__28_0()
		{
			return ((::DDNFLPNPLMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDNFLPNPLMN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

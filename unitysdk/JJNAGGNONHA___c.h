#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJNAGGNONHA;
namespace System { class Object; }

#define JJNAGGNONHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E735470)
#define JJNAGGNONHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7354B0)
#define JJNAGGNONHA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E7354C0)

inline static constexpr unsigned int JJNAGGNONHA___c_TypeDefinitionIndex = 34693;

	class JJNAGGNONHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJNAGGNONHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA___C_CTOR_OFFSET))(this);
		}

		::JJNAGGNONHA* __cctor_b__18_0()
		{
			return ((::JJNAGGNONHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNAGGNONHA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

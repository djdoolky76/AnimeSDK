#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKJACADHCCC;
namespace System { class Object; }

#define CKJACADHCCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3BE7C0)
#define CKJACADHCCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BE800)
#define CKJACADHCCC___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F3BE810)

inline static constexpr unsigned int CKJACADHCCC___c_TypeDefinitionIndex = 26810;

	class CKJACADHCCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x14A90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKJACADHCCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC___C_CTOR_OFFSET))(this);
		}

		::CKJACADHCCC* __cctor_b__18_0()
		{
			return ((::CKJACADHCCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJACADHCCC___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

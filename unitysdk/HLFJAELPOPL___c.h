#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLFJAELPOPL;
namespace System { class Object; }

#define HLFJAELPOPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5904A0)
#define HLFJAELPOPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5904D0)
#define HLFJAELPOPL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5904E0)

inline static constexpr unsigned int HLFJAELPOPL___c_TypeDefinitionIndex = 26603;

	class HLFJAELPOPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFJAELPOPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL___C_CTOR_OFFSET))(this);
		}

		::HLFJAELPOPL* __cctor_b__18_0()
		{
			return ((::HLFJAELPOPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFJAELPOPL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

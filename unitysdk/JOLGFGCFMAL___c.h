#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLGFGCFMAL;
namespace System { class Object; }

#define JOLGFGCFMAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2000F990)
#define JOLGFGCFMAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2000F9D0)
#define JOLGFGCFMAL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2000F9E0)

inline static constexpr unsigned int JOLGFGCFMAL___c_TypeDefinitionIndex = 29011;

	class JOLGFGCFMAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x680E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOLGFGCFMAL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGFGCFMAL___C_CTOR_OFFSET))(this);
		}

		::JOLGFGCFMAL* __cctor_b__23_0()
		{
			return ((::JOLGFGCFMAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOLGFGCFMAL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

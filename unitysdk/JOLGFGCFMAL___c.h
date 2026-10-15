#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLGFGCFMAL;
namespace System { class Object; }

#define JOLGFGCFMAL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E779280)
#define JOLGFGCFMAL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7792C0)
#define JOLGFGCFMAL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7792D0)

inline static constexpr unsigned int JOLGFGCFMAL___c_TypeDefinitionIndex = 28421;

	class JOLGFGCFMAL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68C50);
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

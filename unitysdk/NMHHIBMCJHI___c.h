#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHHIBMCJHI;
namespace System { class Object; }

#define NMHHIBMCJHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB76EB0)
#define NMHHIBMCJHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB76EE0)
#define NMHHIBMCJHI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1EB76EF0)

inline static constexpr unsigned int NMHHIBMCJHI___c_TypeDefinitionIndex = 31435;

	class NMHHIBMCJHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6C3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHHIBMCJHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI___C_CTOR_OFFSET))(this);
		}

		::NMHHIBMCJHI* __cctor_b__48_0()
		{
			return ((::NMHHIBMCJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};

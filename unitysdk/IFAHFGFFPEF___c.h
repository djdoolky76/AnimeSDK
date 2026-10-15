#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFAHFGFFPEF;
namespace System { class Object; }

#define IFAHFGFFPEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E642640)
#define IFAHFGFFPEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E642670)
#define IFAHFGFFPEF___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E642680)

inline static constexpr unsigned int IFAHFGFFPEF___c_TypeDefinitionIndex = 26981;

	class IFAHFGFFPEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFAHFGFFPEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF___C_CTOR_OFFSET))(this);
		}

		::IFAHFGFFPEF* __cctor_b__48_0()
		{
			return ((::IFAHFGFFPEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAHFGFFPEF___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};

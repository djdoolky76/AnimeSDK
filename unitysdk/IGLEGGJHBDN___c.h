#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLEGGJHBDN;
namespace System { class Object; }

#define IGLEGGJHBDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6210)
#define IGLEGGJHBDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E6240)
#define IGLEGGJHBDN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F7E6250)

inline static constexpr unsigned int IGLEGGJHBDN___c_TypeDefinitionIndex = 28438;

	class IGLEGGJHBDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x463F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLEGGJHBDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLEGGJHBDN___C_CTOR_OFFSET))(this);
		}

		::IGLEGGJHBDN* __cctor_b__38_0()
		{
			return ((::IGLEGGJHBDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLEGGJHBDN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

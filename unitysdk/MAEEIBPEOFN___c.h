#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAEEIBPEOFN;
namespace System { class Object; }

#define MAEEIBPEOFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AA120)
#define MAEEIBPEOFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AA150)
#define MAEEIBPEOFN___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1E9AA160)

inline static constexpr unsigned int MAEEIBPEOFN___c_TypeDefinitionIndex = 33275;

	class MAEEIBPEOFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x457F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAEEIBPEOFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEEIBPEOFN___C_CTOR_OFFSET))(this);
		}

		::MAEEIBPEOFN* __cctor_b__32_0()
		{
			return ((::MAEEIBPEOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAEEIBPEOFN___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};

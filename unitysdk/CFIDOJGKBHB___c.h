#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIDOJGKBHB;
namespace System { class Object; }

#define CFIDOJGKBHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0767E0)
#define CFIDOJGKBHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E076820)
#define CFIDOJGKBHB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E076830)

inline static constexpr unsigned int CFIDOJGKBHB___c_TypeDefinitionIndex = 29555;

	class CFIDOJGKBHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFIDOJGKBHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB___C_CTOR_OFFSET))(this);
		}

		::CFIDOJGKBHB* __cctor_b__18_0()
		{
			return ((::CFIDOJGKBHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDOJGKBHB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

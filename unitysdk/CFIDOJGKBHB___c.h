#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFIDOJGKBHB;
namespace System { class Object; }

#define CFIDOJGKBHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD188B0)
#define CFIDOJGKBHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD188F0)
#define CFIDOJGKBHB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FD18900)

inline static constexpr unsigned int CFIDOJGKBHB___c_TypeDefinitionIndex = 30335;

	class CFIDOJGKBHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x9E50);
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

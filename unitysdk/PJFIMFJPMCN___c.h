#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJFIMFJPMCN;
namespace System { class Object; }

#define PJFIMFJPMCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF4B6B0)
#define PJFIMFJPMCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF4B6E0)
#define PJFIMFJPMCN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF4B6F0)

inline static constexpr unsigned int PJFIMFJPMCN___c_TypeDefinitionIndex = 34659;

	class PJFIMFJPMCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJFIMFJPMCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN___C_CTOR_OFFSET))(this);
		}

		::PJFIMFJPMCN* __cctor_b__28_0()
		{
			return ((::PJFIMFJPMCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJFIMFJPMCN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

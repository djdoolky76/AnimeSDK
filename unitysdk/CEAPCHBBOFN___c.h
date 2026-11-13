#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEAPCHBBOFN;
namespace System { class Object; }

#define CEAPCHBBOFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204C5360)
#define CEAPCHBBOFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204C53A0)
#define CEAPCHBBOFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204C53B0)

inline static constexpr unsigned int CEAPCHBBOFN___c_TypeDefinitionIndex = 27216;

	class CEAPCHBBOFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x628A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEAPCHBBOFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN___C_CTOR_OFFSET))(this);
		}

		::CEAPCHBBOFN* __cctor_b__28_0()
		{
			return ((::CEAPCHBBOFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEAPCHBBOFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

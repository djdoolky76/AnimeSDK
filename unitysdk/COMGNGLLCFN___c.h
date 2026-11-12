#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COMGNGLLCFN;
namespace System { class Object; }

#define COMGNGLLCFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F40E0A0)
#define COMGNGLLCFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F40E0D0)
#define COMGNGLLCFN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F40E0E0)

inline static constexpr unsigned int COMGNGLLCFN___c_TypeDefinitionIndex = 25895;

	class COMGNGLLCFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C3A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COMGNGLLCFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COMGNGLLCFN___C_CTOR_OFFSET))(this);
		}

		::COMGNGLLCFN* __cctor_b__33_0()
		{
			return ((::COMGNGLLCFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + COMGNGLLCFN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

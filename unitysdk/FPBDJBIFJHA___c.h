#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPBDJBIFJHA;
namespace System { class Object; }

#define FPBDJBIFJHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E402F40)
#define FPBDJBIFJHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E402F80)
#define FPBDJBIFJHA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E402F90)

inline static constexpr unsigned int FPBDJBIFJHA___c_TypeDefinitionIndex = 30888;

	class FPBDJBIFJHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x665E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBDJBIFJHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA___C_CTOR_OFFSET))(this);
		}

		::FPBDJBIFJHA* __cctor_b__18_0()
		{
			return ((::FPBDJBIFJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDJBIFJHA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

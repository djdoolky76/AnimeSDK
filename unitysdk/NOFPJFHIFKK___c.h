#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOFPJFHIFKK;
namespace System { class Object; }

#define NOFPJFHIFKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB89AA0)
#define NOFPJFHIFKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB89AE0)
#define NOFPJFHIFKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB89AF0)

inline static constexpr unsigned int NOFPJFHIFKK___c_TypeDefinitionIndex = 26927;

	class NOFPJFHIFKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFPJFHIFKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK___C_CTOR_OFFSET))(this);
		}

		::NOFPJFHIFKK* __cctor_b__28_0()
		{
			return ((::NOFPJFHIFKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

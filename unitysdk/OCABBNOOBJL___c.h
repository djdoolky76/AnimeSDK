#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCABBNOOBJL;
namespace System { class Object; }

#define OCABBNOOBJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDA6620)
#define OCABBNOOBJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDA6660)
#define OCABBNOOBJL___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FDA6670)

inline static constexpr unsigned int OCABBNOOBJL___c_TypeDefinitionIndex = 30601;

	class OCABBNOOBJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCABBNOOBJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCABBNOOBJL___C_CTOR_OFFSET))(this);
		}

		::OCABBNOOBJL* __cctor_b__18_0()
		{
			return ((::OCABBNOOBJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCABBNOOBJL___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOECPBNAOK;
namespace System { class Object; }

#define HMOECPBNAOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A8570)
#define HMOECPBNAOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A85A0)
#define HMOECPBNAOK___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E5A85B0)

inline static constexpr unsigned int HMOECPBNAOK___c_TypeDefinitionIndex = 33721;

	class HMOECPBNAOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMOECPBNAOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOECPBNAOK___C_CTOR_OFFSET))(this);
		}

		::HMOECPBNAOK* __cctor_b__53_0()
		{
			return ((::HMOECPBNAOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOECPBNAOK___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};

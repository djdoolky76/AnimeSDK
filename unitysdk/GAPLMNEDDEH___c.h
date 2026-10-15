#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define GAPLMNEDDEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15944E60)
#define GAPLMNEDDEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15944E90)
#define GAPLMNEDDEH___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x15944EA0)
#define GAPLMNEDDEH___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0x15945140)

inline static constexpr unsigned int GAPLMNEDDEH___c_TypeDefinitionIndex = 49769;

	class GAPLMNEDDEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAPLMNEDDEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAPLMNEDDEH___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__2_0(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GAPLMNEDDEH___C___CCTOR_B__2_0_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__2_1(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GAPLMNEDDEH___C___CCTOR_B__2_1_OFFSET))(this, a1);
		}

	};

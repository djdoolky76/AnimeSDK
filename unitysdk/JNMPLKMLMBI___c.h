#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define JNMPLKMLMBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBAB9550)
#define JNMPLKMLMBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBAB9580)
#define JNMPLKMLMBI___C___CCTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0xBAB9590)
#define JNMPLKMLMBI___C___CCTOR_B__2_1_OFFSET UNITYSDK_OFFSET(0xBAB9790)

inline static constexpr unsigned int JNMPLKMLMBI___c_TypeDefinitionIndex = 50819;

	class JNMPLKMLMBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNMPLKMLMBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNMPLKMLMBI___C_CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__2_0(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + JNMPLKMLMBI___C___CCTOR_B__2_0_OFFSET))(this, a1);
		}

		::System::Void __cctor_b__2_1(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + JNMPLKMLMBI___C___CCTOR_B__2_1_OFFSET))(this, a1);
		}

	};

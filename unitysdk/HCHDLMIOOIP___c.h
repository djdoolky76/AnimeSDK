#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCHDLMIOOIP;
namespace System { class Object; }

#define HCHDLMIOOIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F836150)
#define HCHDLMIOOIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F836190)
#define HCHDLMIOOIP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F8361A0)

inline static constexpr unsigned int HCHDLMIOOIP___c_TypeDefinitionIndex = 25593;

	class HCHDLMIOOIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHDLMIOOIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP___C_CTOR_OFFSET))(this);
		}

		::HCHDLMIOOIP* __cctor_b__53_0()
		{
			return ((::HCHDLMIOOIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHDLMIOOIP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};

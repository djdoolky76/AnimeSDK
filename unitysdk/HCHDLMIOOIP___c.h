#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCHDLMIOOIP;
namespace System { class Object; }

#define HCHDLMIOOIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E511960)
#define HCHDLMIOOIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5119A0)
#define HCHDLMIOOIP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E5119B0)

inline static constexpr unsigned int HCHDLMIOOIP___c_TypeDefinitionIndex = 25115;

	class HCHDLMIOOIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD10);
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

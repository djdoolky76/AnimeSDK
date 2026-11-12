#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJJNNBKCJKF;
namespace System { class Object; }

#define GJJNNBKCJKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F79CC50)
#define GJJNNBKCJKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F79CC90)
#define GJJNNBKCJKF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F79CCA0)

inline static constexpr unsigned int GJJNNBKCJKF___c_TypeDefinitionIndex = 28371;

	class GJJNNBKCJKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x135D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJJNNBKCJKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF___C_CTOR_OFFSET))(this);
		}

		::GJJNNBKCJKF* __cctor_b__28_0()
		{
			return ((::GJJNNBKCJKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

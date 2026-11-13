#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKIKMLCGLFK;
namespace System { class Object; }

#define CKIKMLCGLFK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20597E40)
#define CKIKMLCGLFK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20597E80)
#define CKIKMLCGLFK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20597E90)

inline static constexpr unsigned int CKIKMLCGLFK___c_TypeDefinitionIndex = 30456;

	class CKIKMLCGLFK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKIKMLCGLFK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK___C_CTOR_OFFSET))(this);
		}

		::CKIKMLCGLFK* __cctor_b__23_0()
		{
			return ((::CKIKMLCGLFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKIKMLCGLFK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

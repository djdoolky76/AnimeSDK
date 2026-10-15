#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBILBBMINBI;
namespace System { class Object; }

#define PBILBBMINBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECA4D0)
#define PBILBBMINBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DECA510)
#define PBILBBMINBI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DECA520)

inline static constexpr unsigned int PBILBBMINBI___c_TypeDefinitionIndex = 27372;

	class PBILBBMINBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBILBBMINBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI___C_CTOR_OFFSET))(this);
		}

		::PBILBBMINBI* __cctor_b__23_0()
		{
			return ((::PBILBBMINBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBILBBMINBI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

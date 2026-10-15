#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJAPHPOABA;
namespace System { class Object; }

#define MDJAPHPOABA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA03D30)
#define MDJAPHPOABA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA03D70)
#define MDJAPHPOABA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA03D80)

inline static constexpr unsigned int MDJAPHPOABA___c_TypeDefinitionIndex = 34787;

	class MDJAPHPOABA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x499A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDJAPHPOABA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA___C_CTOR_OFFSET))(this);
		}

		::MDJAPHPOABA* __cctor_b__28_0()
		{
			return ((::MDJAPHPOABA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJAPHPOABA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

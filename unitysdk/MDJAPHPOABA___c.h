#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDJAPHPOABA;
namespace System { class Object; }

#define MDJAPHPOABA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D6670)
#define MDJAPHPOABA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D66B0)
#define MDJAPHPOABA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9D66C0)

inline static constexpr unsigned int MDJAPHPOABA___c_TypeDefinitionIndex = 34787;

	class MDJAPHPOABA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C530);
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

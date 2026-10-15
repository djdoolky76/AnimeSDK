#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHEOAGDIHCC;
namespace System { class Object; }

#define KHEOAGDIHCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8420D0)
#define KHEOAGDIHCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E842110)
#define KHEOAGDIHCC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E842120)

inline static constexpr unsigned int KHEOAGDIHCC___c_TypeDefinitionIndex = 28073;

	class KHEOAGDIHCC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHEOAGDIHCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC___C_CTOR_OFFSET))(this);
		}

		::KHEOAGDIHCC* __cctor_b__23_0()
		{
			return ((::KHEOAGDIHCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHEOAGDIHCC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

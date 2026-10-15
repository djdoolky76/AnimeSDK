#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDKMOFFMGEL;
namespace System { class Object; }

#define LDKMOFFMGEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8CE990)
#define LDKMOFFMGEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8CE9C0)
#define LDKMOFFMGEL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8CE9D0)

inline static constexpr unsigned int LDKMOFFMGEL___c_TypeDefinitionIndex = 33070;

	class LDKMOFFMGEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDKMOFFMGEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL___C_CTOR_OFFSET))(this);
		}

		::LDKMOFFMGEL* __cctor_b__33_0()
		{
			return ((::LDKMOFFMGEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDKMOFFMGEL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

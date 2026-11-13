#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCLIICJBLIP;
namespace System { class Object; }

#define MCLIICJBLIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD45060)
#define MCLIICJBLIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD450A0)
#define MCLIICJBLIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD450B0)

inline static constexpr unsigned int MCLIICJBLIP___c_TypeDefinitionIndex = 32818;

	class MCLIICJBLIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCLIICJBLIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLIICJBLIP___C_CTOR_OFFSET))(this);
		}

		::MCLIICJBLIP* __cctor_b__23_0()
		{
			return ((::MCLIICJBLIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLIICJBLIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

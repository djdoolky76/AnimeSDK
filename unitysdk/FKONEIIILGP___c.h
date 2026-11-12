#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKONEIIILGP;
namespace System { class Object; }

#define FKONEIIILGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B9D40)
#define FKONEIIILGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B9D70)
#define FKONEIIILGP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F6B9D80)

inline static constexpr unsigned int FKONEIIILGP___c_TypeDefinitionIndex = 32223;

	class FKONEIIILGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKONEIIILGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKONEIIILGP___C_CTOR_OFFSET))(this);
		}

		::FKONEIIILGP* __cctor_b__18_0()
		{
			return ((::FKONEIIILGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKONEIIILGP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

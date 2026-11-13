#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPKKIAJKHJ;
namespace System { class Object; }

#define NCPKKIAJKHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F83E0)
#define NCPKKIAJKHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202F8420)
#define NCPKKIAJKHJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202F8430)

inline static constexpr unsigned int NCPKKIAJKHJ___c_TypeDefinitionIndex = 29976;

	class NCPKKIAJKHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPKKIAJKHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ___C_CTOR_OFFSET))(this);
		}

		::NCPKKIAJKHJ* __cctor_b__23_0()
		{
			return ((::NCPKKIAJKHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPKKIAJKHJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

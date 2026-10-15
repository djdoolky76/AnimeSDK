#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGBKJLOFLLN;
namespace System { class Object; }

#define PGBKJLOFLLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2CE50)
#define PGBKJLOFLLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2CE90)
#define PGBKJLOFLLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DF2CEA0)

inline static constexpr unsigned int PGBKJLOFLLN___c_TypeDefinitionIndex = 26807;

	class PGBKJLOFLLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGBKJLOFLLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN___C_CTOR_OFFSET))(this);
		}

		::PGBKJLOFLLN* __cctor_b__23_0()
		{
			return ((::PGBKJLOFLLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBKJLOFLLN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

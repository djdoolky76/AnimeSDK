#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGBKJLOFLLN;
namespace System { class Object; }

#define PGBKJLOFLLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1FA370)
#define PGBKJLOFLLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1FA3B0)
#define PGBKJLOFLLN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F1FA3C0)

inline static constexpr unsigned int PGBKJLOFLLN___c_TypeDefinitionIndex = 27338;

	class PGBKJLOFLLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33740);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGBFGLJFLLP;
namespace System { class Object; }

#define PGBFGLJFLLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F9B80)
#define PGBFGLJFLLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F9BC0)
#define PGBFGLJFLLP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F1F9BD0)

inline static constexpr unsigned int PGBFGLJFLLP___c_TypeDefinitionIndex = 27943;

	class PGBFGLJFLLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGBFGLJFLLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP___C_CTOR_OFFSET))(this);
		}

		::PGBFGLJFLLP* __cctor_b__18_0()
		{
			return ((::PGBFGLJFLLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGBFGLJFLLP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};

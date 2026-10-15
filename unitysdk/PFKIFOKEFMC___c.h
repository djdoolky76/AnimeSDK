#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFKIFOKEFMC;
namespace System { class Object; }

#define PFKIFOKEFMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF83B0)
#define PFKIFOKEFMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF83F0)
#define PFKIFOKEFMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEF8400)

inline static constexpr unsigned int PFKIFOKEFMC___c_TypeDefinitionIndex = 25210;

	class PFKIFOKEFMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKIFOKEFMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC___C_CTOR_OFFSET))(this);
		}

		::PFKIFOKEFMC* __cctor_b__23_0()
		{
			return ((::PFKIFOKEFMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFKIFOKEFMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

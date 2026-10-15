#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define LDMBNFAMCOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB63DEA0)
#define LDMBNFAMCOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB63DEE0)
#define LDMBNFAMCOI___C__GETBOSSENEMY_B__5_0_OFFSET UNITYSDK_OFFSET(0xB63DEF0)

inline static constexpr unsigned int LDMBNFAMCOI___c_TypeDefinitionIndex = 81002;

	class LDMBNFAMCOI___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::ECNEEKNHIOE*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::ECNEEKNHIOE*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B40);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBossEnemy_b__5_0(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + LDMBNFAMCOI___C__GETBOSSENEMY_B__5_0_OFFSET))(this, a1);
		}

	};

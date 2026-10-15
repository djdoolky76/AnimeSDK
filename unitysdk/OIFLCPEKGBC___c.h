#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDEFMHBFDKL;
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define OIFLCPEKGBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE8E3A0)
#define OIFLCPEKGBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE8E3D0)
#define OIFLCPEKGBC___C__GET_ISINASYNCINITIALIZE_B__36_0_OFFSET UNITYSDK_OFFSET(0xBE8E3E0)
#define OIFLCPEKGBC___C__UNREGISTERTSCIRIRENDERERS_B__155_0_OFFSET UNITYSDK_OFFSET(0xBE8E400)
#define OIFLCPEKGBC___C__UNREGISTERTSCIRIRENDERERS_B__155_1_OFFSET UNITYSDK_OFFSET(0xBE8E490)

inline static constexpr unsigned int OIFLCPEKGBC___c_TypeDefinitionIndex = 70222;

	class OIFLCPEKGBC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664B0);
		}

		static ::System::Predicate_1<::IDEFMHBFDKL*>** StaticGet___9__155_1()
		{
			return (::System::Predicate_1<::IDEFMHBFDKL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664B8);
		}

		static ::System::Predicate_1<::IDEFMHBFDKL*>** StaticGet___9__155_0()
		{
			return (::System::Predicate_1<::IDEFMHBFDKL*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x664C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIFLCPEKGBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsInAsyncInitialize_b__36_0(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC___C__GET_ISINASYNCINITIALIZE_B__36_0_OFFSET))(this, a1);
		}

		::System::Boolean _UnregisterTscIRIRenderers_b__155_0(::IDEFMHBFDKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDEFMHBFDKL*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC___C__UNREGISTERTSCIRIRENDERERS_B__155_0_OFFSET))(this, a1);
		}

		::System::Boolean _UnregisterTscIRIRenderers_b__155_1(::IDEFMHBFDKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDEFMHBFDKL*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC___C__UNREGISTERTSCIRIRENDERERS_B__155_1_OFFSET))(this, a1);
		}

	};

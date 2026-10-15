#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EDMIEACDAKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1332C720)
#define EDMIEACDAKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1332C760)
#define EDMIEACDAKH___C___TRYCREATEFORBOSS_B__4_0_OFFSET UNITYSDK_OFFSET(0x1332C970)
#define EDMIEACDAKH___C___TRYCREATEFORMEMORY_B__1_0_OFFSET UNITYSDK_OFFSET(0x1332C770)
#define EDMIEACDAKH___C___TRYCREATEFORSTORY_B__2_0_OFFSET UNITYSDK_OFFSET(0x1332C870)

inline static constexpr unsigned int EDMIEACDAKH___c_TypeDefinitionIndex = 81572;

	class EDMIEACDAKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FFA0);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FFA8);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FFB0);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDMIEACDAKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMIEACDAKH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __TryCreateForMemory_b__1_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + EDMIEACDAKH___C___TRYCREATEFORMEMORY_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 __TryCreateForStory_b__2_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + EDMIEACDAKH___C___TRYCREATEFORSTORY_B__2_0_OFFSET))(this, a1);
		}

		::System::Int32 __TryCreateForBoss_b__4_0(::DCKGNOHECDC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DCKGNOHECDC*))((::PBYTE)hIl2Cpp + EDMIEACDAKH___C___TRYCREATEFORBOSS_B__4_0_OFFSET))(this, a1);
		}

	};

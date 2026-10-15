#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCKGNOHECDC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EDMIEACDAKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x133279B0)
#define EDMIEACDAKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x133279F0)
#define EDMIEACDAKH___C___TRYCREATEFORBOSS_B__4_0_OFFSET UNITYSDK_OFFSET(0x13327C00)
#define EDMIEACDAKH___C___TRYCREATEFORMEMORY_B__1_0_OFFSET UNITYSDK_OFFSET(0x13327A00)
#define EDMIEACDAKH___C___TRYCREATEFORSTORY_B__2_0_OFFSET UNITYSDK_OFFSET(0x13327B00)

inline static constexpr unsigned int EDMIEACDAKH___c_TypeDefinitionIndex = 81571;

	class EDMIEACDAKH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FE30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FE38);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FE40);
		}

		static ::System::Func_2<::DCKGNOHECDC*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::DCKGNOHECDC*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FE48);
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

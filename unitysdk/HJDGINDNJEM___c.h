#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HJDGINDNJEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D00500)
#define HJDGINDNJEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D00530)
#define HJDGINDNJEM___C__FROMHTTP_B__2_0_OFFSET UNITYSDK_OFFSET(0x15D00550)
#define HJDGINDNJEM___C__FROMSERVERARCHIVE_B__1_0_OFFSET UNITYSDK_OFFSET(0x15D00540)

inline static constexpr unsigned int HJDGINDNJEM___c_TypeDefinitionIndex = 67523;

	class HJDGINDNJEM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EBD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EBD8);
		}

		static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDGINDNJEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDGINDNJEM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _FromServerArchive_b__1_0(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDGINDNJEM___C__FROMSERVERARCHIVE_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 _FromHttp_b__2_0(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDGINDNJEM___C__FROMHTTP_B__2_0_OFFSET))(this, a1);
		}

	};

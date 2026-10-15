#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNNGDLLACML;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define ELIONMBBJGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15524DD0)
#define ELIONMBBJGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15524E10)
#define ELIONMBBJGD___C__GETFIGHTSORDERED_B__4_0_OFFSET UNITYSDK_OFFSET(0x15524E20)
#define ELIONMBBJGD___C__GETFIGHTSORDERED_B__4_1_OFFSET UNITYSDK_OFFSET(0x15524E30)

	class ELIONMBBJGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48E50);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BNNGDLLACML*>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::BNNGDLLACML*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48E58);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELIONMBBJGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIONMBBJGD___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetFightsOrdered_b__4_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + ELIONMBBJGD___C__GETFIGHTSORDERED_B__4_0_OFFSET))(this, a1);
		}

		::BNNGDLLACML* _GetFightsOrdered_b__4_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::BNNGDLLACML*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + ELIONMBBJGD___C__GETFIGHTSORDERED_B__4_1_OFFSET))(this, a1);
		}

	};

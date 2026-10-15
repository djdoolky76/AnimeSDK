#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOPPGLAGDDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA379A0)
#define MOPPGLAGDDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA379E0)
#define MOPPGLAGDDD___C__CREATEITEM_B__1_0_OFFSET UNITYSDK_OFFSET(0xBA379F0)
#define MOPPGLAGDDD___C__CREATEITEM_B__1_1_OFFSET UNITYSDK_OFFSET(0xBA37A90)
#define MOPPGLAGDDD___C__CREATEITEM_B__1_2_OFFSET UNITYSDK_OFFSET(0xBA37B30)
#define MOPPGLAGDDD___C__CREATEITEM_B__1_3_OFFSET UNITYSDK_OFFSET(0xBA37BD0)

inline static constexpr unsigned int MOPPGLAGDDD___c_TypeDefinitionIndex = 65567;

	class MOPPGLAGDDD___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::String*>** StaticGet___9__1_3()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B10);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B18);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B28);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__1_2()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOPPGLAGDDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPPGLAGDDD___C_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPPGLAGDDD___C__CREATEITEM_B__1_0_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPPGLAGDDD___C__CREATEITEM_B__1_1_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPPGLAGDDD___C__CREATEITEM_B__1_2_OFFSET))(this);
		}

		::System::String* _CreateItem_b__1_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOPPGLAGDDD___C__CREATEITEM_B__1_3_OFFSET))(this);
		}

	};

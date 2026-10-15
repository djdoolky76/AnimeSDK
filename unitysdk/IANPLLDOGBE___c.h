#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define IANPLLDOGBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15E15370)
#define IANPLLDOGBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15E153A0)
#define IANPLLDOGBE___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15E153B0)
#define IANPLLDOGBE___C__ONTASKBEGIN_B__1_1_OFFSET UNITYSDK_OFFSET(0x15E154D0)

inline static constexpr unsigned int IANPLLDOGBE___c_TypeDefinitionIndex = 52779;

	class IANPLLDOGBE___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__1_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38550);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38558);
		}

		static ::System::Action** StaticGet___9__1_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IANPLLDOGBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANPLLDOGBE___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANPLLDOGBE___C__ONTASKBEGIN_B__1_0_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IANPLLDOGBE___C__ONTASKBEGIN_B__1_1_OFFSET))(this);
		}

	};

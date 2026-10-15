#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOHBCIPAIPI;
namespace System { class Object; }

#define LOHBCIPAIPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BF3E0)
#define LOHBCIPAIPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BF410)
#define LOHBCIPAIPI___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1E9BF420)

	class LOHBCIPAIPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOHBCIPAIPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHBCIPAIPI___C_CTOR_OFFSET))(this);
		}

		::LOHBCIPAIPI* __cctor_b__63_0()
		{
			return ((::LOHBCIPAIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOHBCIPAIPI___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};

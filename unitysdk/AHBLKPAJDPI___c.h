#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHBLKPAJDPI;
namespace System { class Object; }

#define AHBLKPAJDPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26C960)
#define AHBLKPAJDPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26C9A0)
#define AHBLKPAJDPI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E26C9B0)

	class AHBLKPAJDPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHBLKPAJDPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI___C_CTOR_OFFSET))(this);
		}

		::AHBLKPAJDPI* __cctor_b__33_0()
		{
			return ((::AHBLKPAJDPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBLKPAJDPI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

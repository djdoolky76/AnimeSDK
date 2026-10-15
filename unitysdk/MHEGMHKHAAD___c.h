#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHEGMHKHAAD;
namespace System { class Object; }

#define MHEGMHKHAAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2E530)
#define MHEGMHKHAAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2E570)
#define MHEGMHKHAAD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA2E580)

	class MHEGMHKHAAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHEGMHKHAAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD___C_CTOR_OFFSET))(this);
		}

		::MHEGMHKHAAD* __cctor_b__28_0()
		{
			return ((::MHEGMHKHAAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

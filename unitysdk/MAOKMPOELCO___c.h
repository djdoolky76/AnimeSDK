#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAOKMPOELCO;
namespace System { class Object; }

#define MAOKMPOELCO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DFAC0)
#define MAOKMPOELCO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DFAF0)
#define MAOKMPOELCO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9DFB00)

	class MAOKMPOELCO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAOKMPOELCO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO___C_CTOR_OFFSET))(this);
		}

		::MAOKMPOELCO* __cctor_b__33_0()
		{
			return ((::MAOKMPOELCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOKMPOELCO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

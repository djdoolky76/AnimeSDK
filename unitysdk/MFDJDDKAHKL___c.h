#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFDJDDKAHKL;
namespace System { class Object; }

#define MFDJDDKAHKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA181D0)
#define MFDJDDKAHKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA18210)
#define MFDJDDKAHKL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA18220)

	class MFDJDDKAHKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFDJDDKAHKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL___C_CTOR_OFFSET))(this);
		}

		::MFDJDDKAHKL* __cctor_b__38_0()
		{
			return ((::MFDJDDKAHKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

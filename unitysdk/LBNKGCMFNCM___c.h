#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBNKGCMFNCM;
namespace System { class Object; }

#define LBNKGCMFNCM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E0360)
#define LBNKGCMFNCM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E03A0)
#define LBNKGCMFNCM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8E03B0)

	class LBNKGCMFNCM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBNKGCMFNCM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM___C_CTOR_OFFSET))(this);
		}

		::LBNKGCMFNCM* __cctor_b__38_0()
		{
			return ((::LBNKGCMFNCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNKGCMFNCM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

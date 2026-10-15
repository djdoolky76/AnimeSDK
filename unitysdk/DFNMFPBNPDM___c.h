#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNMFPBNPDM;
namespace System { class Object; }

#define DFNMFPBNPDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9AE0)
#define DFNMFPBNPDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A9B20)
#define DFNMFPBNPDM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1A9B30)

	class DFNMFPBNPDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNMFPBNPDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM___C_CTOR_OFFSET))(this);
		}

		::DFNMFPBNPDM* __cctor_b__33_0()
		{
			return ((::DFNMFPBNPDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNMFPBNPDM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

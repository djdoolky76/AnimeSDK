#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICGOLPHCKIL;
namespace System { class Object; }

#define ICGOLPHCKIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E621210)
#define ICGOLPHCKIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E621250)
#define ICGOLPHCKIL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E621260)

	class ICGOLPHCKIL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICGOLPHCKIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL___C_CTOR_OFFSET))(this);
		}

		::ICGOLPHCKIL* __cctor_b__28_0()
		{
			return ((::ICGOLPHCKIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICGOLPHCKIL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

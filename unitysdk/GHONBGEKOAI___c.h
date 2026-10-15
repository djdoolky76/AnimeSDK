#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHONBGEKOAI;
namespace System { class Object; }

#define GHONBGEKOAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E490760)
#define GHONBGEKOAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4907A0)
#define GHONBGEKOAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4907B0)

	class GHONBGEKOAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHONBGEKOAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONBGEKOAI___C_CTOR_OFFSET))(this);
		}

		::GHONBGEKOAI* __cctor_b__28_0()
		{
			return ((::GHONBGEKOAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHONBGEKOAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

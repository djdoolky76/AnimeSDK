#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKENKIDMGC;
namespace System { class Object; }

#define APKENKIDMGC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64B8E0)
#define APKENKIDMGC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64B910)
#define APKENKIDMGC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64B920)

inline static constexpr unsigned int APKENKIDMGC___c_TypeDefinitionIndex = 33925;

	class APKENKIDMGC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APKENKIDMGC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC___C_CTOR_OFFSET))(this);
		}

		::APKENKIDMGC* __cctor_b__28_0()
		{
			return ((::APKENKIDMGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + APKENKIDMGC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

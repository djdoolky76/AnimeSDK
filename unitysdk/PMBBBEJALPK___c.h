#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MonoUIAdaptConfigItem;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PMBBBEJALPK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3147F0)
#define PMBBBEJALPK___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC314820)
#define PMBBBEJALPK___C___LOADROOTADAPTOPERATIONS_B__12_0_OFFSET UNITYSDK_OFFSET(0xC314830)

	class PMBBBEJALPK___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MonoUIAdaptConfigItem*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::MonoUIAdaptConfigItem*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FE60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FE68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBBBEJALPK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBBBEJALPK___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __LoadRootAdaptOperations_b__12_0(::MonoUIAdaptConfigItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MonoUIAdaptConfigItem*))((::PBYTE)hIl2Cpp + PMBBBEJALPK___C___LOADROOTADAPTOPERATIONS_B__12_0_OFFSET))(this, a1);
		}

	};

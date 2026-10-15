#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMFJDODNGIF;
namespace System { class Object; }

#define EMFJDODNGIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E04E0)
#define EMFJDODNGIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0520)
#define EMFJDODNGIF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2E0530)

	class EMFJDODNGIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMFJDODNGIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF___C_CTOR_OFFSET))(this);
		}

		::EMFJDODNGIF* __cctor_b__23_0()
		{
			return ((::EMFJDODNGIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFJDODNGIF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

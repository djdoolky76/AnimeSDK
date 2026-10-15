#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BALPIPIDLDM;
namespace System { class Object; }

#define BALPIPIDLDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BBBC0)
#define BALPIPIDLDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BBC00)
#define BALPIPIDLDM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7BBC10)

	class BALPIPIDLDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BALPIPIDLDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM___C_CTOR_OFFSET))(this);
		}

		::BALPIPIDLDM* __cctor_b__23_0()
		{
			return ((::BALPIPIDLDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALPIPIDLDM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

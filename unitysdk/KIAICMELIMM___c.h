#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIAICMELIMM;
namespace System { class Object; }

#define KIAICMELIMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E852650)
#define KIAICMELIMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E852690)
#define KIAICMELIMM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8526A0)

	class KIAICMELIMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x189D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIAICMELIMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM___C_CTOR_OFFSET))(this);
		}

		::KIAICMELIMM* __cctor_b__38_0()
		{
			return ((::KIAICMELIMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAICMELIMM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

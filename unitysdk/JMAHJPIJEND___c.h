#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMAHJPIJEND;
namespace System { class Object; }

#define JMAHJPIJEND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E789340)
#define JMAHJPIJEND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E789370)
#define JMAHJPIJEND___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E789380)

	class JMAHJPIJEND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BF70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMAHJPIJEND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND___C_CTOR_OFFSET))(this);
		}

		::JMAHJPIJEND* __cctor_b__33_0()
		{
			return ((::JMAHJPIJEND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAHJPIJEND___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

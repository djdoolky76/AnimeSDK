#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMNDOECFBEA;
namespace System { class Object; }

#define OMNDOECFBEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBCD90)
#define OMNDOECFBEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBCDC0)
#define OMNDOECFBEA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DEBCDD0)

	class OMNDOECFBEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNDOECFBEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA___C_CTOR_OFFSET))(this);
		}

		::OMNDOECFBEA* __cctor_b__38_0()
		{
			return ((::OMNDOECFBEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNDOECFBEA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

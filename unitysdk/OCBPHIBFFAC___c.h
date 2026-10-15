#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCBPHIBFFAC;
namespace System { class Object; }

#define OCBPHIBFFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB6480)
#define OCBPHIBFFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB64C0)
#define OCBPHIBFFAC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EBB64D0)

	class OCBPHIBFFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCBPHIBFFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC___C_CTOR_OFFSET))(this);
		}

		::OCBPHIBFFAC* __cctor_b__38_0()
		{
			return ((::OCBPHIBFFAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCBPHIBFFAC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPNGPLHJHBE;
namespace System { class Object; }

#define BPNGPLHJHBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04F640)
#define BPNGPLHJHBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04F680)
#define BPNGPLHJHBE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E04F690)

	class BPNGPLHJHBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPNGPLHJHBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE___C_CTOR_OFFSET))(this);
		}

		::BPNGPLHJHBE* __cctor_b__23_0()
		{
			return ((::BPNGPLHJHBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGPLHJHBE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

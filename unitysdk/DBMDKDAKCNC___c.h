#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMDKDAKCNC;
namespace System { class Object; }

#define DBMDKDAKCNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E161220)
#define DBMDKDAKCNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E161260)
#define DBMDKDAKCNC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E161270)

	class DBMDKDAKCNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x261A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMDKDAKCNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC___C_CTOR_OFFSET))(this);
		}

		::DBMDKDAKCNC* __cctor_b__38_0()
		{
			return ((::DBMDKDAKCNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDKDAKCNC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

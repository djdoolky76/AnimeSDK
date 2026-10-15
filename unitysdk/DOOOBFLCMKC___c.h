#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOOOBFLCMKC;
namespace System { class Object; }

#define DOOOBFLCMKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E205E40)
#define DOOOBFLCMKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E205E80)
#define DOOOBFLCMKC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E205E90)

	class DOOOBFLCMKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOOOBFLCMKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC___C_CTOR_OFFSET))(this);
		}

		::DOOOBFLCMKC* __cctor_b__23_0()
		{
			return ((::DOOOBFLCMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

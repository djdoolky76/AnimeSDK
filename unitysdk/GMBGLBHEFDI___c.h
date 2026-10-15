#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBGLBHEFDI;
namespace System { class Object; }

#define GMBGLBHEFDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA3C0)
#define GMBGLBHEFDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4CA3F0)
#define GMBGLBHEFDI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4CA400)

	class GMBGLBHEFDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBGLBHEFDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI___C_CTOR_OFFSET))(this);
		}

		::GMBGLBHEFDI* __cctor_b__28_0()
		{
			return ((::GMBGLBHEFDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

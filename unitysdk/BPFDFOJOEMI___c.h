#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPFDFOJOEMI;
namespace System { class Object; }

#define BPFDFOJOEMI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E043690)
#define BPFDFOJOEMI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0436D0)
#define BPFDFOJOEMI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0436E0)

	class BPFDFOJOEMI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x550B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPFDFOJOEMI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI___C_CTOR_OFFSET))(this);
		}

		::BPFDFOJOEMI* __cctor_b__28_0()
		{
			return ((::BPFDFOJOEMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFDFOJOEMI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

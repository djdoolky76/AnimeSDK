#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Action; }

#define NEBELGKDOHF_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB57670)
#define NEBELGKDOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB57660)
#define NEBELGKDOHF_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xBB575C0)

	class NEBELGKDOHF : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action**)UnitySDK::FromName("", "NEBELGKDOHF")->GetStaticField(0x2E5A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBELGKDOHF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEBELGKDOHF_CCTOR_OFFSET))();
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + NEBELGKDOHF_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};

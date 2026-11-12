#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { template <typename T> class Action_1; }

#define NEBELGKDOHF_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3E0DC0)
#define NEBELGKDOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xC3E0DB0)
#define NEBELGKDOHF_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0xC3E0D10)

inline static constexpr unsigned int NEBELGKDOHF_TypeDefinitionIndex = 50822;

	class NEBELGKDOHF : public ::System::Object
	{
	public:
		static ::System::Action_1<::LBJLBMOOJGM*>** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action_1<::LBJLBMOOJGM*>**)UnitySDK::FromName("", "NEBELGKDOHF")->GetStaticField(0x273D0);
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

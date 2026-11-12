#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { template <typename T> class Action_1; }

#define DPAAAFINPEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x12DF3A10)
#define DPAAAFINPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x12DF3A00)
#define DPAAAFINPEB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x12DF3960)

inline static constexpr unsigned int DPAAAFINPEB_TypeDefinitionIndex = 50820;

	class DPAAAFINPEB : public ::System::Object
	{
	public:
		static ::System::Action_1<::LBJLBMOOJGM*>** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action_1<::LBJLBMOOJGM*>**)UnitySDK::FromName("", "DPAAAFINPEB")->GetStaticField(0x70CE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPAAAFINPEB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPAAAFINPEB_CCTOR_OFFSET))();
		}

		::System::Void KDPCHKAGJMK(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + DPAAAFINPEB_KDPCHKAGJMK_OFFSET))(this, a1);
		}

	};

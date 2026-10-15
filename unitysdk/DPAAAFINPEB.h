#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { template <typename T> class Action_1; }

#define DPAAAFINPEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FF8670)
#define DPAAAFINPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x11FF8660)
#define DPAAAFINPEB_KDPCHKAGJMK_OFFSET UNITYSDK_OFFSET(0x11FF85C0)

inline static constexpr unsigned int DPAAAFINPEB_TypeDefinitionIndex = 49772;

	class DPAAAFINPEB : public ::System::Object
	{
	public:
		static ::System::Action_1<::LBJLBMOOJGM*>** StaticGet_BEJJCPGEMIG()
		{
			return (::System::Action_1<::LBJLBMOOJGM*>**)UnitySDK::FromName("", "DPAAAFINPEB")->GetStaticField(0x6FA20);
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

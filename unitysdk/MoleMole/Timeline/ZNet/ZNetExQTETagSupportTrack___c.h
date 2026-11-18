#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline::ZNet { class ZNetGroupTrack; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class GroupTrack; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_AJIOKOAEHKL_OFFSET UNITYSDK_OFFSET(0x19F62A10)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_KPHLMLKJICF_OFFSET UNITYSDK_OFFSET(0x19F62B00)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_LDKGLLOFCAM_OFFSET UNITYSDK_OFFSET(0x19F62AE0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F629C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19F62A00)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetExQTETagSupportTrack___c_TypeDefinitionIndex = 52462;

	class ZNetExQTETagSupportTrack___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::GroupTrack*, ::System::Boolean>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::GroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x389E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x389E8);
		}
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x389F0);
		}
		static ::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ZNet::ZNetGroupTrack*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ZNetExQTETagSupportTrack___c_TypeDefinitionIndex)->GetStaticField(0x389F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C__CTOR_OFFSET))(this);
		}

		::System::Boolean AJIOKOAEHKL(::UnityEngine::Timeline::GroupTrack* LMLPPLMKLFL)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::GroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_AJIOKOAEHKL_OFFSET))(this, LMLPPLMKLFL);
		}

		::System::Boolean LDKGLLOFCAM(::MoleMole::Timeline::ZNet::ZNetGroupTrack* LMLPPLMKLFL)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_LDKGLLOFCAM_OFFSET))(this, LMLPPLMKLFL);
		}

		::System::Boolean KPHLMLKJICF(::MoleMole::Timeline::ZNet::ZNetGroupTrack* HAAEBCOBKFF)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::ZNet::ZNetGroupTrack*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETEXQTETAGSUPPORTTRACK___C_KPHLMLKJICF_OFFSET))(this, HAAEBCOBKFF);
		}
	};
}

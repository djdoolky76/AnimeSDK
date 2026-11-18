#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class BBACBMHNGBL;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace MoleMole { class MirrorReflectionProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MIRRORREFLECTIONPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x10D36730)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x10D36870)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x10D36650)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10D367F0)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x10D36640)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D36990)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x10D36A20)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x10D36AB0)
#define MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10D36B40)

namespace MoleMole
{
	inline static constexpr unsigned int MirrorReflectionProfile_TypeDefinitionIndex = 77837;

	class MirrorReflectionProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MirrorReflectionProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::MirrorReflectionProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::MirrorReflectionProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::BBACBMHNGBL* GetGraphicProfileProcessor()
		{
			return ((::BBACBMHNGBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::BBACBMHNGBL* __base_GetGraphicProfileProcessor()
		{
			return ((::BBACBMHNGBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MIRRORREFLECTIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}

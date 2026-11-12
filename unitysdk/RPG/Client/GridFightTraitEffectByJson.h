#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectEffType.h"
class OHDPLBDPKIJ;
namespace RPG::Client { class GridFightTrait; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_CTOR_OFFSET UNITYSDK_OFFSET(0xDCDAD90)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0xDCDAF10)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0xDCDAF60)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GET_EFFTYPE_OFFSET UNITYSDK_OFFSET(0xDCDB0B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GET_NEEDPLAYACTIVEEFFECT_OFFSET UNITYSDK_OFFSET(0xDCDB040)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xDCDAFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectByJson_TypeDefinitionIndex = 67240;

	class GridFightTraitEffectByJson : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::OHDPLBDPKIJ* _Effect; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GETSHOWMEMBERUIDS_OFFSET))(this);
		}

		::System::String* get_Quality()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GET_QUALITY_OFFSET))(this);
		}

		::System::Boolean get_NeedPlayActiveEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GET_NEEDPLAYACTIVEEFFECT_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitEffectEffType get_EffType()
		{
			return ((::RPG::Client::GridFightTraitEffectEffType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTBYJSON_GET_EFFTYPE_OFFSET))(this);
		}

	};
}

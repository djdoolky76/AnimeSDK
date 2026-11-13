#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightRichTextNodeCompiler; }
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA110C0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GETQUALITYCOMPILER_OFFSET UNITYSDK_OFFSET(0x1CA12D90)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GETVARIABLECOMPILER_OFFSET UNITYSDK_OFFSET(0x1CA12360)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x1CA12E20)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_VALUEMAP_OFFSET UNITYSDK_OFFSET(0x1CA12E00)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_ROLE_OFFSET UNITYSDK_OFFSET(0x1CA12E30)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_VALUEMAP_OFFSET UNITYSDK_OFFSET(0x1CA12E10)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUEFROMTEAM_OFFSET UNITYSDK_OFFSET(0x1CA11800)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1CA11150)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x1CA11220)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__GETVALUEMAP_OFFSET UNITYSDK_OFFSET(0x1CA12460)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__INITVALUE_OFFSET UNITYSDK_OFFSET(0x1CA11270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightValueComponent_TypeDefinitionIndex = 66880;

	class GridFightValueComponent : public ::System::Object
	{
	public:
		::NDPFOOJIAIJ* _DataContext; // 0x10
		::RPG::Client::GridFightRole* _Role_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _ValueMap_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::NDPFOOJIAIJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::NDPFOOJIAIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateValue(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_UPDATEVALUE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetValueFromTeam(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_TRYGETVALUEFROMTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void _InitValue(::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__INITVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRichTextNodeCompiler* GetVariableCompiler()
		{
			return ((::RPG::Client::GridFightRichTextNodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GETVARIABLECOMPILER_OFFSET))(this);
		}

		::RPG::Client::GridFightRichTextNodeCompiler* GetQualityCompiler()
		{
			return ((::RPG::Client::GridFightRichTextNodeCompiler*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GETQUALITYCOMPILER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* _GetValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT__GETVALUEMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* get_ValueMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_VALUEMAP_OFFSET))(this);
		}

		::System::Void set_ValueMap(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_VALUEMAP_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* get_Role()
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_GET_ROLE_OFFSET))(this);
		}

		::System::Void set_Role(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT_SET_ROLE_OFFSET))(this, a1);
		}

	};
}

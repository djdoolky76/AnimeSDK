#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/RPG/Client/TextID.h"
class KIEDNKBBOBP;
namespace RPG::Client { class GridFightOrbData; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTORBDATA_CLEARCOUNT_OFFSET UNITYSDK_OFFSET(0x1DF0C860)
#define RPG_CLIENT_GRIDFIGHTORBDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DF0C6B0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF0C7D0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_BONUSID_OFFSET UNITYSDK_OFFSET(0x1DF0C9B0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DF0C8F0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DF0CAE0)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBID_OFFSET UNITYSDK_OFFSET(0x1DF0C930)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBNAME_OFFSET UNITYSDK_OFFSET(0x1DF0CA30)
#define RPG_CLIENT_GRIDFIGHTORBDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DF0B780)
#define RPG_CLIENT_GRIDFIGHTORBDATA_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x1DF0C7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbData_TypeDefinitionIndex = 65904;

	class GridFightOrbData : public ::Sofa::Core::ObservableObject
	{
	public:
		::KIEDNKBBOBP* _config; // 0x18
		::System::UInt32 _Count; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightOrbData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightOrbData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void ClearCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_CLEARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_SET_COUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_OrbID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBID_OFFSET))(this);
		}

		::System::UInt32 get_BonusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_BONUSID_OFFSET))(this);
		}

		::RPG::Client::TextID get_OrbName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_ORBNAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::GridFightOrbType get_Type()
		{
			return ((::RPG::GameCore::GridFightOrbType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBDATA_GET_TYPE_OFFSET))(this);
		}

	};
}

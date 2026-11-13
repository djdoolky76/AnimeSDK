#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightMemberTransformInfo; }
namespace RPG::Client { class GridFightRolePosService; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E1810)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETLINKPOINTBYUID_OFFSET UNITYSDK_OFFSET(0x1D4E1E10)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0x1D4E1B40)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D4E1660)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_REMOVEUID_OFFSET UNITYSDK_OFFSET(0x1D4E1AA0)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETLINKPOINTBYUID_OFFSET UNITYSDK_OFFSET(0x1D4E1C10)
#define RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETTRANSFORMBYUID_OFFSET UNITYSDK_OFFSET(0x1D4E1910)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePosService_TypeDefinitionIndex = 66406;

	class GridFightRolePosService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightMemberTransformInfo*>* _TransByUID; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Transform*>* _LinkPointByUID; // 0x18
		static ::RPG::Client::GridFightRolePosService** StaticGet__Instance()
		{
			return (::RPG::Client::GridFightRolePosService**)UnitySDK::FromName("RPG.Client", "GridFightRolePosService")->GetStaticField(0xA640);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightRolePosService* get_Instance()
		{
			return ((::RPG::Client::GridFightRolePosService*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetTransformByUID(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETTRANSFORMBYUID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveUID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_REMOVEUID_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMemberTransformInfo* GetTransformByUID(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMemberTransformInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETTRANSFORMBYUID_OFFSET))(this, a1);
		}

		::System::Void SetLinkPointByUID(::System::UInt32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_SETLINKPOINTBYUID_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetLinkPointByUID(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPOSSERVICE_GETLINKPOINTBYUID_OFFSET))(this, a1);
		}

	};
}

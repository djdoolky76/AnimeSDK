#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class Object; }

#define HMCLAECPKCP_CTOR_OFFSET UNITYSDK_OFFSET(0x198BD0F0)
#define HMCLAECPKCP__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x198BD110)

inline static constexpr unsigned int HMCLAECPKCP_TypeDefinitionIndex = 61154;

	class HMCLAECPKCP : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::UInt32 DBIMHPGKEJK; // 0x10
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMCLAECPKCP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCLAECPKCP__DOCHECKIMPL_OFFSET))(this);
		}

	};

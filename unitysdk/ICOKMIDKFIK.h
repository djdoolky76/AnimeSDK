#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class NPCDataRow; }
namespace RPG::GameCore { class SetRoguePFBillboardInfo; }
namespace RPG::GameCore { class TaskContext; }

#define ICOKMIDKFIK_CTOR_OFFSET UNITYSDK_OFFSET(0x15E553B0)
#define ICOKMIDKFIK_JBDENDDPFDE_OFFSET UNITYSDK_OFFSET(0x15E55660)
#define ICOKMIDKFIK_KFPBMCEOMNH_OFFSET UNITYSDK_OFFSET(0x15E55580)
#define ICOKMIDKFIK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E553E0)

inline static constexpr unsigned int ICOKMIDKFIK_TypeDefinitionIndex = 58575;

	class ICOKMIDKFIK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetRoguePFBillboardInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetRoguePFBillboardInfo*))((::PBYTE)hIl2Cpp + ICOKMIDKFIK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOKMIDKFIK_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::NPCDataRow* KFPBMCEOMNH()
		{
			return ((::RPG::GameCore::NPCDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOKMIDKFIK_KFPBMCEOMNH_OFFSET))(this);
		}

		::RPG::Client::TextID JBDENDDPFDE()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + ICOKMIDKFIK_JBDENDDPFDE_OFFSET))(this);
		}

	};

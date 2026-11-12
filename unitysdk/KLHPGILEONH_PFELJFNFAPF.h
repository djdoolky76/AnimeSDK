#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLKIBIFDM;
namespace RPG::GameCore { class GameEntity; }

#define KLHPGILEONH_PFELJFNFAPF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD74530)
#define KLHPGILEONH_PFELJFNFAPF_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xBD74860)

inline static constexpr unsigned int KLHPGILEONH_PFELJFNFAPF_TypeDefinitionIndex = 57213;

	class KLHPGILEONH_PFELJFNFAPF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BKEDPLIEJMC; // 0x10
		::System::Double FKOGJCPGFPD; // 0x18
		::System::Double PNNCHMGJFBJ; // 0x20
		::System::UInt32 IBNLKOLLPJH; // 0x28
		::System::Byte _padding0[0x4];
		::System::Double PFIAONCIHOG; // 0x30
		::System::Double ELEJAOKKHFO; // 0x38
		::System::UInt32 OHIDKMKBIGJ; // 0x40
		::System::Boolean ICFMHKKLPKG; // 0x44
		::System::Boolean HCJHAHLEGHE; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_PFELJFNFAPF_CTOR_OFFSET))(this);
		}

		::ABFLKIBIFDM* HMPDCLHIPHI()
		{
			return ((::ABFLKIBIFDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_PFELJFNFAPF_HMPDCLHIPHI_OFFSET))(this);
		}

	};

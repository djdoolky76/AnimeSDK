#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLKIBIFDM;
namespace RPG::GameCore { class GameEntity; }

#define KLHPGILEONH_PFELJFNFAPF_CTOR_OFFSET UNITYSDK_OFFSET(0xB523180)
#define KLHPGILEONH_PFELJFNFAPF_HMPDCLHIPHI_OFFSET UNITYSDK_OFFSET(0xB523430)

inline static constexpr unsigned int KLHPGILEONH_PFELJFNFAPF_TypeDefinitionIndex = 56010;

	class KLHPGILEONH_PFELJFNFAPF : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BKEDPLIEJMC; // 0x10
		::System::UInt32 IBNLKOLLPJH; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double FKOGJCPGFPD; // 0x20
		::System::Double ELEJAOKKHFO; // 0x28
		::System::UInt32 OHIDKMKBIGJ; // 0x30
		::System::Boolean HCJHAHLEGHE; // 0x34
		::System::Boolean ICFMHKKLPKG; // 0x35
		::System::Byte _padding1[0x2];
		::System::Double PNNCHMGJFBJ; // 0x38
		::System::Double PFIAONCIHOG; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_PFELJFNFAPF_CTOR_OFFSET))(this);
		}

		::ABFLKIBIFDM* HMPDCLHIPHI()
		{
			return ((::ABFLKIBIFDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH_PFELJFNFAPF_HMPDCLHIPHI_OFFSET))(this);
		}

	};

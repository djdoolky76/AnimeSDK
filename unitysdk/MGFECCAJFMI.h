#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJDJFIGKBNB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define MGFECCAJFMI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12D847E0)
#define MGFECCAJFMI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D84750)

inline static constexpr unsigned int MGFECCAJFMI_TypeDefinitionIndex = 79437;

class MGFECCAJFMI : public ::System::Object
{
public:
	::UnityEngine::Transform* PHFBEKJNCGM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IJDJFIGKBNB>* DHHMOJPAAIK; // 0x18
	::System::String* FPBNHPCLHMI; // 0x20
	::System::String* BHAKDADFOGE; // 0x28
	::UnityEngine::Transform* DECANLKLMDB; // 0x30
	::System::Int32 CAACIIGMGAH; // 0x38
	::System::Boolean GICJMDMIHKC; // 0x3C
	::System::Boolean IOANJCPMDPF; // 0x3D
	::System::Boolean IDAFLKMNFJE; // 0x3E

	::System::Void _ctor(::MoleMole::Config::ConfigAttachmentItem* DFMKILICPFB, ::UnityEngine::Transform* PHFBEKJNCGM, ::UnityEngine::Transform* DECANLKLMDB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MGFECCAJFMI__CTOR_OFFSET))(this, DFMKILICPFB, PHFBEKJNCGM, DECANLKLMDB);
	}

	::System::Void _ctor_1(::UnityEngine::Transform* PHFBEKJNCGM, ::UnityEngine::Transform* DECANLKLMDB, ::System::Boolean OBHNHBKCNGN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MGFECCAJFMI__CTOR_1_OFFSET))(this, PHFBEKJNCGM, DECANLKLMDB, OBHNHBKCNGN);
	}
};

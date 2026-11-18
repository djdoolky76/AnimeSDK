#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

inline static constexpr unsigned int FIMJMFENPJB_TypeDefinitionIndex = 81906;

struct alignas(8) FIMJMFENPJB
{
	::System::Int32 OEAOKNLILLG; // 0x10
	::UnityEngine::Vector3 JOILPOPCHPB; // 0x14
	::System::Single JHJLMNHDGDN; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* DFHMBKNFNIO; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* NGACGBPGCNF; // 0x30
	::MoleMole::Config::CampType CHLOIDLBPFP; // 0x38
	::System::Boolean BKAJEFIEGAL; // 0x3C
	::System::Boolean KHOLCCFDFEJ; // 0x3D
	::System::Byte _padding1[0x2];
	::System::Int32 HLOGHDOONID; // 0x40
};

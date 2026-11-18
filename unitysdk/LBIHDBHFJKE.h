#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFJFHGFINDL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace MoleMole { class UrbanMapMeshHeightInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBIHDBHFJKE__CTOR_OFFSET UNITYSDK_OFFSET(0x16357AA0)

inline static constexpr unsigned int LBIHDBHFJKE_TypeDefinitionIndex = 65045;

class LBIHDBHFJKE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* PKILFHAMKGJ; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UrbanMapMeshHeightInfo*>* AHMFPFACACD; // 0x18
	::System::Collections::Generic::List_1<::IFJFHGFINDL>* OCHCCICEMHE; // 0x20
	::System::Boolean FMPMFBKDBIP; // 0x28
	::System::Boolean HGDAJNKANBG; // 0x29
	::System::Byte _padding0[0x2];
	::UnityEngine::Bounds IKGHBCFKOOE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIHDBHFJKE__CTOR_OFFSET))(this);
	}
};

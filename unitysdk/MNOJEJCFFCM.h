#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayBoundsCfgData.h"
#include "unitysdk/MoleMole/Config/DisplayCase/DisplayColliderCfgData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CGLBJOKMIMF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNOJEJCFFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x140737D0)

inline static constexpr unsigned int MNOJEJCFFCM_TypeDefinitionIndex = 76399;

class MNOJEJCFFCM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::DisplayCase::DisplayColliderCfgData>* AEPKHEKNPIE; // 0x10
	::CGLBJOKMIMF* HFPLICABNOE; // 0x18
	::Foundation::AssetPath DGCMBCFNAMC; // 0x20
	::System::Boolean HCDJBGCJKJJ; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 KEMOBCCDIGA; // 0x34
	::System::Single IDHPCEMJOOG; // 0x38
	::UnityEngine::Vector3 EFKNDPBOGME; // 0x3C
	::MoleMole::Config::DisplayCase::DisplayBoundsCfgData MIOJAEHEPOE; // 0x48

	::System::Void _ctor(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNOJEJCFFCM__CTOR_OFFSET))(this, OBNIAHNMHPF);
	}
};

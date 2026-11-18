#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFOHGNLIAKH;
namespace System { template <typename T> class Action_1; }

#define PCMENEMPLGF_FMEMFFLFAFJ_GLOBHPCEOHC_OFFSET UNITYSDK_OFFSET(0x150B4B60)
#define PCMENEMPLGF_FMEMFFLFAFJ_OEFCGJFCEJC_OFFSET UNITYSDK_OFFSET(0x150B4BB0)
#define PCMENEMPLGF_FMEMFFLFAFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x150B4B50)

inline static constexpr unsigned int PCMENEMPLGF_FMEMFFLFAFJ_TypeDefinitionIndex = 62835;

class PCMENEMPLGF_FMEMFFLFAFJ : public ::System::Object
{
public:
	::System::Action_1<::IFOHGNLIAKH*>* IMDHDEKCNNG; // 0x10
	::System::Action_1<::System::Int32>* JAGGNJLGLCI; // 0x18
	::System::Int32 ECAFPALMHLI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_FMEMFFLFAFJ__CTOR_OFFSET))(this);
	}

	::System::Void GLOBHPCEOHC(::IFOHGNLIAKH* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_FMEMFFLFAFJ_GLOBHPCEOHC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OEFCGJFCEJC(::IFOHGNLIAKH* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_FMEMFFLFAFJ_OEFCGJFCEJC_OFFSET))(this, JOLDOMEIKEF);
	}
};

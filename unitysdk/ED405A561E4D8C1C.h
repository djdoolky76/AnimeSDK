#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Object.h"

namespace BDC595893C6EE433 { class A35817262A53CA5C; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class VolumeComponent; }

#define ED405A561E4D8C1C_A765A1D14770A303_OFFSET UNITYSDK_OFFSET(0x40405C0)
#define ED405A561E4D8C1C_B30285FD439B67D2_OFFSET UNITYSDK_OFFSET(0x4040880)
#define ED405A561E4D8C1C_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x4040800)
#define ED405A561E4D8C1C_EDD6F0CDA5EF7A89_1_OFFSET UNITYSDK_OFFSET(0x4040810)
#define ED405A561E4D8C1C__CTOR_OFFSET UNITYSDK_OFFSET(0x4040CC0)

inline static constexpr unsigned int ED405A561E4D8C1C_TypeDefinitionIndex = 20410;

class ED405A561E4D8C1C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Rendering::VolumeComponent*>* FF63FAF59D531C28; // 0x10
	::Il2CppArray<::B07850EA97DBB75A<::BDC595893C6EE433::A35817262A53CA5C*, ::BDC595893C6EE433::A35817262A53CA5C*>>* E3A406DEAE629D54; // 0x18
	::System::Boolean A579E7B2A173ED39; // 0x20

	::System::Void B30285FD439B67D2(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>* BBF96FABA896CC4C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeComponent*>*))((::PBYTE)hIl2Cpp + ED405A561E4D8C1C_B30285FD439B67D2_OFFSET))(this, BBF96FABA896CC4C);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED405A561E4D8C1C__CTOR_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED405A561E4D8C1C_E8AF1E0387A100FA_OFFSET))(this);
	}

	::System::Void A765A1D14770A303()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED405A561E4D8C1C_A765A1D14770A303_OFFSET))(this);
	}

	::UnityEngine::Rendering::VolumeComponent* EDD6F0CDA5EF7A89_1(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + ED405A561E4D8C1C_EDD6F0CDA5EF7A89_1_OFFSET))(this, A288CB28FC2A6DA3);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define AFIKKAEOGFF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C84B980)
#define AFIKKAEOGFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84BB80)
#define AFIKKAEOGFF_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C84BA60)
#define AFIKKAEOGFF_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C84BB40)

inline static constexpr unsigned int AFIKKAEOGFF_TypeDefinitionIndex = 43507;

	class AFIKKAEOGFF : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Int32>* OPOCBLDANJG; // 0x10
		::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* KEHMJBHPNKG; // 0x18
		::System::String* LOPPEGGELBJ; // 0x20
		::System::String* ODMGJKCAICF; // 0x28
		::System::String* CDHCPDPPKPH; // 0x30
		::UnityEngine::Vector3 PCMJLKGLLDH; // 0x38
		::System::Int32 MNMHMECGDAK; // 0x44
		::System::Boolean CAGCHKJHMPD; // 0x48
		::System::Boolean KMGIHDHMBJB; // 0x49
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 LONPDOGOIEG; // 0x4C
		::System::Int32 OBJCCAHJONF; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIKKAEOGFF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIKKAEOGFF_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIKKAEOGFF_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIKKAEOGFF_ONRECYCLE_OFFSET))(this);
		}

	};

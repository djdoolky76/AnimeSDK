#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class HoyoTagContainer; }

#define CBEMFLBJCBF_BLGLIHNKEDC_OFFSET UNITYSDK_OFFSET(0x3F346E0)
#define CBEMFLBJCBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define CBEMFLBJCBF_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define CBEMFLBJCBF_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define CBEMFLBJCBF_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define CBEMFLBJCBF_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3F34730)
#define CBEMFLBJCBF_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define CBEMFLBJCBF_INJPGPGPMDO_OFFSET UNITYSDK_OFFSET(0x3F346D0)

inline static constexpr unsigned int CBEMFLBJCBF_TypeDefinitionIndex = 10692;

	struct alignas(8) CBEMFLBJCBF
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_DISPOSE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::HoyoTag*>* INJPGPGPMDO()
		{
			return ((::Il2CppArray<::RPG::GameCore::HoyoTag*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_INJPGPGPMDO_OFFSET))(this);
		}

		::System::Void BLGLIHNKEDC(::Il2CppArray<::RPG::GameCore::HoyoTag*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::HoyoTag*>*))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_BLGLIHNKEDC_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTagContainer* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEMFLBJCBF_GFLKJLOFIPA_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APCCFELCPKH_HJOJHIGBBKC;
class KLEFGGIHGMI;
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define APCCFELCPKH_PBNOOPCGMKN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B98B80)

inline static constexpr unsigned int APCCFELCPKH_PBNOOPCGMKN_TypeDefinitionIndex = 60235;

	class APCCFELCPKH_PBNOOPCGMKN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildItemSlot*>* JJJNPLOLJGE; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildStaticItem*>* JDPIEDNMGBP; // 0x18
		::System::String* DAHENCMPLOD; // 0x20
		::UnityEngine::Transform* NOAKFGCHOOA; // 0x28
		::KLEFGGIHGMI* OKPMJOCEKBC; // 0x30
		::System::String* EALNBEBALJM; // 0x38
		::APCCFELCPKH_HJOJHIGBBKC* POOGHHFHIAN; // 0x40
		::Il2CppArray<::System::Boolean>* BPODOHJJOLA; // 0x48
		::System::Boolean HOEKDHBPGAI; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_PBNOOPCGMKN_CTOR_OFFSET))(this);
		}

	};

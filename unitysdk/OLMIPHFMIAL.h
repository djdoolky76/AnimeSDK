#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAffixInsertMonsterPhaseType.h"
#include "unitysdk/System/Object.h"
class EBBJLHBAGCJ;
class OLMIPHFMIAL;
class PKPFAHEBJIO;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLMIPHFMIAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF113E0)
#define OLMIPHFMIAL_IAEKDNGGBEN_OFFSET UNITYSDK_OFFSET(0xBF11470)
#define OLMIPHFMIAL_KMJNGGGPJPF_OFFSET UNITYSDK_OFFSET(0xBF10DC0)

	class OLMIPHFMIAL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::FateAffixInsertMonsterPhaseType, ::System::Collections::Generic::List_1<::System::UInt32>*>* NCDPHGPHJBD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMIPHFMIAL_CTOR_OFFSET))(this);
		}

		static ::OLMIPHFMIAL* KMJNGGGPJPF(::Google::Protobuf::Collections::RepeatedField_1<::EBBJLHBAGCJ*>* a1)
		{
			return ((::OLMIPHFMIAL*(*)(::Google::Protobuf::Collections::RepeatedField_1<::EBBJLHBAGCJ*>*))((::PBYTE)hIl2Cpp + OLMIPHFMIAL_KMJNGGGPJPF_OFFSET))(a1);
		}

		::System::Void IAEKDNGGBEN(::PKPFAHEBJIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPFAHEBJIO*))((::PBYTE)hIl2Cpp + OLMIPHFMIAL_IAEKDNGGBEN_OFFSET))(this, a1);
		}

	};

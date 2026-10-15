#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBGMIGBKDFN.h"
#include "unitysdk/ENEIHJJPNPI.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAGIHIEADIL_BPFAGJMGFDD_OFFSET UNITYSDK_OFFSET(0x15BD2B80)
#define BAGIHIEADIL_CTOR_OFFSET UNITYSDK_OFFSET(0x15BD2C30)
#define BAGIHIEADIL_DHMOEJOGLGG_OFFSET UNITYSDK_OFFSET(0x15BD2180)
#define BAGIHIEADIL_DLOGLCGOIIL_OFFSET UNITYSDK_OFFSET(0x15BD29C0)
#define BAGIHIEADIL_LCNLKCIIANN_OFFSET UNITYSDK_OFFSET(0x15BD1E80)
#define BAGIHIEADIL_LFGMJBBCIME_OFFSET UNITYSDK_OFFSET(0x15BD2930)
#define BAGIHIEADIL_MPIBNJBBOKM_OFFSET UNITYSDK_OFFSET(0x15BD2A90)
#define BAGIHIEADIL_NDMOIDOOGJN_OFFSET UNITYSDK_OFFSET(0x15BD23E0)
#define BAGIHIEADIL_OAMEIMOJGHN_OFFSET UNITYSDK_OFFSET(0x15BD2890)

inline static constexpr unsigned int BAGIHIEADIL_TypeDefinitionIndex = 56851;

	class BAGIHIEADIL : public ::ENEIHJJPNPI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Collections::Generic::List_1<::BBGMIGBKDFN>*>* ADOGGCDCAIG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL_CTOR_OFFSET))(this);
		}

		::System::Void LCNLKCIIANN(::RPG::GameCore::StringHash a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BAGIHIEADIL_LCNLKCIIANN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DHMOEJOGLGG(::RPG::GameCore::StringHash a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + BAGIHIEADIL_DHMOEJOGLGG_OFFSET))(this, a1, a2);
		}

		::System::Void NDMOIDOOGJN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BAGIHIEADIL_NDMOIDOOGJN_OFFSET))(this, a1);
		}

		::System::Boolean OAMEIMOJGHN(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + BAGIHIEADIL_OAMEIMOJGHN_OFFSET))(this, a1);
		}

		::System::Void LFGMJBBCIME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL_LFGMJBBCIME_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint DLOGLCGOIIL(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + BAGIHIEADIL_DLOGLCGOIIL_OFFSET))(this, a1);
		}

		::System::Boolean MPIBNJBBOKM(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BAGIHIEADIL_MPIBNJBBOKM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>* BPFAGJMGFDD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAGIHIEADIL_BPFAGJMGFDD_OFFSET))(this);
		}

	};

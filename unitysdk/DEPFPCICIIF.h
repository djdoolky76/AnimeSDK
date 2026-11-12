#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class DEPFPCICIIF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define DEPFPCICIIF_AMIMGMIPDBP_OFFSET UNITYSDK_OFFSET(0xF182250)
#define DEPFPCICIIF_CTOR_OFFSET UNITYSDK_OFFSET(0xF181AE0)
#define DEPFPCICIIF_DMLJIFPIDNF_OFFSET UNITYSDK_OFFSET(0xF181DC0)
#define DEPFPCICIIF_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0xF181AF0)

inline static constexpr unsigned int DEPFPCICIIF_TypeDefinitionIndex = 67074;

	class DEPFPCICIIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*>* NNFBPFEKELA; // 0x10
		::System::Void _ctor(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*>*))((::PBYTE)hIl2Cpp + DEPFPCICIIF_CTOR_OFFSET))(this, a1);
		}

		static ::DEPFPCICIIF* JDDOLBNGDAO()
		{
			return ((::DEPFPCICIIF*(*)())((::PBYTE)hIl2Cpp + DEPFPCICIIF_JDDOLBNGDAO_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>* AMIMGMIPDBP(::System::String* a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEPFPCICIIF_AMIMGMIPDBP_OFFSET))(this, a1);
		}

		static ::Il2CppArray<::RPG::GameCore::FixPoint>* DMLJIFPIDNF(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + DEPFPCICIIF_DMLJIFPIDNF_OFFSET))(a1);
		}

	};

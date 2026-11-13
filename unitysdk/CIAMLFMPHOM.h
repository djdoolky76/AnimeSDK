#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FarmTypeConfig.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FarmGuide; }
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CIAMLFMPHOM_BBAKFAIGOFJ_OFFSET UNITYSDK_OFFSET(0x16E335E0)
#define CIAMLFMPHOM_CAPPKLJFNEM_OFFSET UNITYSDK_OFFSET(0x16E33A60)
#define CIAMLFMPHOM_ELAJBJLJCEC_OFFSET UNITYSDK_OFFSET(0x16E33220)
#define CIAMLFMPHOM_HLAJJGFEJNI_OFFSET UNITYSDK_OFFSET(0x16E32D30)
#define CIAMLFMPHOM_JPLDEHKACDI_OFFSET UNITYSDK_OFFSET(0x16E33660)
#define CIAMLFMPHOM_OLNBHCIEMIK_OFFSET UNITYSDK_OFFSET(0x16E33800)

inline static constexpr unsigned int CIAMLFMPHOM_TypeDefinitionIndex = 67524;

	class CIAMLFMPHOM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>* HLAJJGFEJNI(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::ItemConfig*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::ItemConfig*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CIAMLFMPHOM_HLAJJGFEJNI_OFFSET))(a1, a2);
		}

		static ::System::Void ELAJBJLJCEC(::RPG::GameCore::ItemConfig* a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemConfig*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::RPG::Client::FarmGuide*>*))((::PBYTE)hIl2Cpp + CIAMLFMPHOM_ELAJBJLJCEC_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 BBAKFAIGOFJ(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CIAMLFMPHOM_BBAKFAIGOFJ_OFFSET))(a1, a2);
		}

		static ::System::UInt32 JPLDEHKACDI(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CIAMLFMPHOM_JPLDEHKACDI_OFFSET))(a1);
		}

		static ::System::UInt32 OLNBHCIEMIK(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CIAMLFMPHOM_OLNBHCIEMIK_OFFSET))(a1, a2);
		}

		static ::System::Boolean CAPPKLJFNEM(::RPG::GameCore::FarmTypeConfig a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::FarmTypeConfig))((::PBYTE)hIl2Cpp + CIAMLFMPHOM_CAPPKLJFNEM_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCBOJGNGLGO.h"
class OGHPKFMNNHL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class ChessRogueCabinetDataItem; }
namespace RPG::Client { class ChessRogueData; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LEFNFCLHAPD_COOJDBILNKA_OFFSET UNITYSDK_OFFSET(0xB64FEC0)
#define LEFNFCLHAPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB64FE80)
#define LEFNFCLHAPD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB650790)
#define LEFNFCLHAPD_EFDPGMLBBHM_OFFSET UNITYSDK_OFFSET(0xB650C50)
#define LEFNFCLHAPD_HIINBAKDDJK_OFFSET UNITYSDK_OFFSET(0xB651070)
#define LEFNFCLHAPD_JBCBIPJPFOP_OFFSET UNITYSDK_OFFSET(0xB650840)
#define LEFNFCLHAPD_JECJEHEAEAI_OFFSET UNITYSDK_OFFSET(0xB6509B0)
#define LEFNFCLHAPD_NGONJMGPIHC_OFFSET UNITYSDK_OFFSET(0xB651280)

inline static constexpr unsigned int LEFNFCLHAPD_TypeDefinitionIndex = 66962;

	class LEFNFCLHAPD : public ::GCBOJGNGLGO
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* BFPDGNPGELG; // 0x38
		::RPG::Client::Promises::Promise* GJLMIAMPLLE; // 0x40
		::System::Boolean PBNMDACHCHL; // 0x48
		::System::Void _ctor(::RPG::Client::ChessRogueData* a1, ::OGHPKFMNNHL* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChessRogueData*, ::OGHPKFMNNHL*, ::System::Boolean))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_DISPOSE_OFFSET))(this);
		}

		::System::Void JBCBIPJPFOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_JBCBIPJPFOP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* JECJEHEAEAI()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_JECJEHEAEAI_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* EFDPGMLBBHM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_EFDPGMLBBHM_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* HIINBAKDDJK()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_HIINBAKDDJK_OFFSET))(this);
		}

		::System::Void NGONJMGPIHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_NGONJMGPIHC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>* COOJDBILNKA(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChessRogueCabinetDataItem*>*(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LEFNFCLHAPD_COOJDBILNKA_OFFSET))(this, a1);
		}

	};

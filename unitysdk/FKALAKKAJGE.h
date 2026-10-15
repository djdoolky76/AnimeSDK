#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class BFMHFBHIAAL;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KAKADGHNMFK;
class NJMLJBNICND;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelNodeContainer; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKALAKKAJGE_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x157D94F0)
#define FKALAKKAJGE_AJAFNIAONML_OFFSET UNITYSDK_OFFSET(0x157D9180)
#define FKALAKKAJGE_COMNOHFGDCE_OFFSET UNITYSDK_OFFSET(0x157D8BF0)
#define FKALAKKAJGE_CTOR_OFFSET UNITYSDK_OFFSET(0x157D8A70)
#define FKALAKKAJGE_EBCBGHKFEPB_OFFSET UNITYSDK_OFFSET(0x157D8AD0)
#define FKALAKKAJGE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x157D8DE0)
#define FKALAKKAJGE_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0x157D8C30)
#define FKALAKKAJGE_ONLNHEOMEMF_OFFSET UNITYSDK_OFFSET(0x157D8B60)
#define FKALAKKAJGE_TICK_OFFSET UNITYSDK_OFFSET(0x157D9480)

inline static constexpr unsigned int FKALAKKAJGE_TypeDefinitionIndex = 77650;

	class FKALAKKAJGE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x10
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* IEMEIEMOMIG; // 0x18
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x20
		// static const ::System::String* NLFMOONOKLH; // 0x0
		::System::Void _ctor(::KAKADGHNMFK* a1, ::System::Collections::Generic::IEnumerable_1<::HBLDGJCDJPF*>* a2, ::BFMHFBHIAAL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::System::Collections::Generic::IEnumerable_1<::HBLDGJCDJPF*>*, ::BFMHFBHIAAL*))((::PBYTE)hIl2Cpp + FKALAKKAJGE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::GameCore::ChimeraDuelNodeContainer* EBCBGHKFEPB()
		{
			return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + FKALAKKAJGE_EBCBGHKFEPB_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelNodeContainer* ONLNHEOMEMF()
		{
			return ((::RPG::GameCore::ChimeraDuelNodeContainer*(*)())((::PBYTE)hIl2Cpp + FKALAKKAJGE_ONLNHEOMEMF_OFFSET))();
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKALAKKAJGE_NFDHENMGIBA_OFFSET))();
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + FKALAKKAJGE_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void AJAFNIAONML(::NJMLJBNICND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMLJBNICND*))((::PBYTE)hIl2Cpp + FKALAKKAJGE_AJAFNIAONML_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKALAKKAJGE_TICK_OFFSET))(this, a1);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKALAKKAJGE_ACMKLFOMPFC_OFFSET))(this);
		}

		static ::System::String* COMNOHFGDCE()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FKALAKKAJGE_COMNOHFGDCE_OFFSET))();
		}

	};

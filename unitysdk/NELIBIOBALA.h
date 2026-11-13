#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PressBehaviour.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class LPHINGPIEAJ;
class MGKEKBAKMPK;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NELIBIOBALA_BIMBNNOLKEM_OFFSET UNITYSDK_OFFSET(0x16FEABD0)
#define NELIBIOBALA_CTOR_OFFSET UNITYSDK_OFFSET(0x16FEA480)
#define NELIBIOBALA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16FEA880)
#define NELIBIOBALA_FILTER_OFFSET UNITYSDK_OFFSET(0x16FEA780)
#define NELIBIOBALA_GETTRIGGER_OFFSET UNITYSDK_OFFSET(0x16FEA5F0)

inline static constexpr unsigned int NELIBIOBALA_TypeDefinitionIndex = 80025;

	class NELIBIOBALA
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x28
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ComicDessert::PressBehaviour, ::MGKEKBAKMPK*>* DCNEHLOAIJD; // 0x38
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + NELIBIOBALA_CTOR_OFFSET))(this, a1, a2);
		}

		::Entitas::ICollector_1<::LPHINGPIEAJ*>* GetTrigger(::Entitas::IContext_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::Entitas::ICollector_1<::LPHINGPIEAJ*>*(*)(::PVOID, ::Entitas::IContext_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + NELIBIOBALA_GETTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean Filter(::LPHINGPIEAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + NELIBIOBALA_FILTER_OFFSET))(this, a1);
		}

		::System::Void Execute(::System::Collections::Generic::List_1<::LPHINGPIEAJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LPHINGPIEAJ*>*))((::PBYTE)hIl2Cpp + NELIBIOBALA_EXECUTE_OFFSET))(this, a1);
		}

		::MGKEKBAKMPK* BIMBNNOLKEM(::LPHINGPIEAJ* a1)
		{
			return ((::MGKEKBAKMPK*(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + NELIBIOBALA_BIMBNNOLKEM_OFFSET))(this, a1);
		}

	};

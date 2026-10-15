#pragma once
#include "unitysdk/unitysdk.h"
class EAPJOMGKMNN;
class KFELGAIGHAP;
class NGFHCJIAOLH;
namespace RPG::GameCore { class TaskContext; }

#define LBCOGNOFEEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F3F60)
#define LBCOGNOFEEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5F49B0)
#define LBCOGNOFEEN_EPDFINPGPFC_OFFSET UNITYSDK_OFFSET(0xB5F4850)
#define LBCOGNOFEEN_NJLEEOPKDBM_OFFSET UNITYSDK_OFFSET(0xB5F45A0)
#define LBCOGNOFEEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5F40F0)
#define LBCOGNOFEEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB5F48E0)

inline static constexpr unsigned int LBCOGNOFEEN_TypeDefinitionIndex = 52662;

	class LBCOGNOFEEN
	{
	public:
		::KFELGAIGHAP* LELCEGGODOP; // 0x28
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x30
		::NGFHCJIAOLH* NFJGMKPFPOC; // 0x38
		// static const ::System::Object JIHKAADEIDB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EAPJOMGKMNN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EAPJOMGKMNN*))((::PBYTE)hIl2Cpp + LBCOGNOFEEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOGNOFEEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOGNOFEEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOGNOFEEN_DISPOSE_OFFSET))(this);
		}

		::System::Boolean EPDFINPGPFC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LBCOGNOFEEN_EPDFINPGPFC_OFFSET))(this, a1, a2);
		}

		::System::Boolean NJLEEOPKDBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBCOGNOFEEN_NJLEEOPKDBM_OFFSET))(this);
		}

	};

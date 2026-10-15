#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DoorState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMJPFDHIPNB_BLJMCMBGDOE_OFFSET UNITYSDK_OFFSET(0xB7CB080)
#define LMJPFDHIPNB_CEJOMINNFHL_OFFSET UNITYSDK_OFFSET(0xB7CBD80)
#define LMJPFDHIPNB_CFDCFBDGKEB_OFFSET UNITYSDK_OFFSET(0xB7CC250)
#define LMJPFDHIPNB_CPHJHLNIPPJ_OFFSET UNITYSDK_OFFSET(0xB7CB760)
#define LMJPFDHIPNB_CPNINPFKICC_OFFSET UNITYSDK_OFFSET(0xB7CC0A0)
#define LMJPFDHIPNB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7CA7E0)
#define LMJPFDHIPNB_DHLKFIPOABJ_OFFSET UNITYSDK_OFFSET(0xB7CBB10)
#define LMJPFDHIPNB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7CAB30)
#define LMJPFDHIPNB_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0xB7CC9E0)
#define LMJPFDHIPNB_GLIHLLHBBIH_OFFSET UNITYSDK_OFFSET(0xB7CBF00)
#define LMJPFDHIPNB_HCNFKIBLANJ_OFFSET UNITYSDK_OFFSET(0xB7CB840)
#define LMJPFDHIPNB_HMGPJFMKJFO_OFFSET UNITYSDK_OFFSET(0xB7CAB80)
#define LMJPFDHIPNB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB7CB030)
#define LMJPFDHIPNB_JCONBLBJFJJ_1_OFFSET UNITYSDK_OFFSET(0xB7CC640)
#define LMJPFDHIPNB_JCONBLBJFJJ_OFFSET UNITYSDK_OFFSET(0xB7CB8D0)
#define LMJPFDHIPNB_JLNMCHGHFDC_OFFSET UNITYSDK_OFFSET(0xB7CADE0)
#define LMJPFDHIPNB_LAGAFLIFFMN_OFFSET UNITYSDK_OFFSET(0xB7CC5B0)
#define LMJPFDHIPNB_LCLKEMMAKKB_OFFSET UNITYSDK_OFFSET(0xB7CBA70)
#define LMJPFDHIPNB_LCPHGENHAAA_OFFSET UNITYSDK_OFFSET(0xB7CB580)
#define LMJPFDHIPNB_MHPLGOAHLPJ_OFFSET UNITYSDK_OFFSET(0xB7CBE20)
#define LMJPFDHIPNB_OCCPLHLNMDH_OFFSET UNITYSDK_OFFSET(0xB7CC170)
#define LMJPFDHIPNB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB7CB290)

	class LMJPFDHIPNB : public ::System::Object
	{
	public:
		::Entitas::IGroup* MIGADKPEGEF; // 0x10
		::Entitas::ICollector* PKPFFENLCON; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Object*>* GFIPFGJPHHI; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_TEARDOWN_OFFSET))(this);
		}

		::System::Void HMGPJFMKJFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_HMGPJFMKJFO_OFFSET))(this);
		}

		::System::Void BLJMCMBGDOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_BLJMCMBGDOE_OFFSET))(this);
		}

		::System::Void LCPHGENHAAA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_LCPHGENHAAA_OFFSET))(this, a1);
		}

		::System::Void JLNMCHGHFDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_JLNMCHGHFDC_OFFSET))(this);
		}

		::System::Void DHLKFIPOABJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_DHLKFIPOABJ_OFFSET))(this, a1);
		}

		::System::Void CEJOMINNFHL(::HIOEAKHGILF* a1, ::RPG::Client::LittleGame::FiveDim::DoorState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::DoorState))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_CEJOMINNFHL_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCNFKIBLANJ(::HIOEAKHGILF* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_HCNFKIBLANJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 CPHJHLNIPPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_CPHJHLNIPPJ_OFFSET))(this, a1);
		}

		::System::Void CPNINPFKICC(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_CPNINPFKICC_OFFSET))(this, a1);
		}

		::System::Void LCLKEMMAKKB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_LCLKEMMAKKB_OFFSET))(this, a1);
		}

		::System::Void MHPLGOAHLPJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_MHPLGOAHLPJ_OFFSET))(this, a1);
		}

		::System::Void OCCPLHLNMDH(::Entitas::IGroup* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_OCCPLHLNMDH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JCONBLBJFJJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_JCONBLBJFJJ_OFFSET))(this, a1);
		}

		::System::Void JCONBLBJFJJ_1(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_JCONBLBJFJJ_1_OFFSET))(this, a1, a2);
		}

		::System::Void CFDCFBDGKEB(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_CFDCFBDGKEB_OFFSET))(this, a1, a2);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean LAGAFLIFFMN(::HIOEAKHGILF* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::System::Object*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_LAGAFLIFFMN_OFFSET))(this, a1, a2);
		}

		::System::Int16 GLIHLLHBBIH(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameDynamicVar* a2)
		{
			return ((::System::Int16(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameDynamicVar*))((::PBYTE)hIl2Cpp + LMJPFDHIPNB_GLIHLLHBBIH_OFFSET))(this, a1, a2);
		}

	};

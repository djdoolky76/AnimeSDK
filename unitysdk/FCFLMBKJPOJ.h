#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHPIHGCJJJ;
class FGJAKGPJCKB;
class FIIPOAMEICN;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCFLMBKJPOJ_BNJOLDEAEAA_OFFSET UNITYSDK_OFFSET(0x1C611FC0)
#define FCFLMBKJPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C611ED0)
#define FCFLMBKJPOJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C611F70)
#define FCFLMBKJPOJ_EGEBAONLDFA_OFFSET UNITYSDK_OFFSET(0x1C6127A0)
#define FCFLMBKJPOJ_ENHJEGMCEHK_OFFSET UNITYSDK_OFFSET(0x1C6077B0)
#define FCFLMBKJPOJ_GET_GAMEENDDATADIC_OFFSET UNITYSDK_OFFSET(0x1C613180)
#define FCFLMBKJPOJ_IBJODKIPOAE_OFFSET UNITYSDK_OFFSET(0x1C612580)
#define FCFLMBKJPOJ_IFLJMFDMKKP_OFFSET UNITYSDK_OFFSET(0x1C612800)
#define FCFLMBKJPOJ_LPNMJHLGPGC_OFFSET UNITYSDK_OFFSET(0x1C612CB0)
#define FCFLMBKJPOJ_MIDMNIMLBEH_OFFSET UNITYSDK_OFFSET(0x1C612E10)
#define FCFLMBKJPOJ_MOEALBLNNIL_OFFSET UNITYSDK_OFFSET(0x1C607820)
#define FCFLMBKJPOJ_NNJOOHMAMMJ_OFFSET UNITYSDK_OFFSET(0x1C612F70)
#define FCFLMBKJPOJ_PNLCCLGHDDA_OFFSET UNITYSDK_OFFSET(0x1C613120)
#define FCFLMBKJPOJ_SET_GAMEENDDATADIC_OFFSET UNITYSDK_OFFSET(0x1C613190)

	class FCFLMBKJPOJ : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIIPOAMEICN*>* _GameEndDataDic_k__BackingField; // 0x18
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_DISPOSE_OFFSET))(this);
		}

		::System::Void ENHJEGMCEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_ENHJEGMCEHK_OFFSET))(this);
		}

		::System::Void MOEALBLNNIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_MOEALBLNNIL_OFFSET))(this);
		}

		::FGJAKGPJCKB* IBJODKIPOAE(::System::UInt32 a1)
		{
			return ((::FGJAKGPJCKB*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_IBJODKIPOAE_OFFSET))(this, a1);
		}

		::System::Void BNJOLDEAEAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_BNJOLDEAEAA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* IFLJMFDMKKP()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_IFLJMFDMKKP_OFFSET))(this);
		}

		static ::System::UInt32 LPNMJHLGPGC(::System::Int32 a1, ::RPG::GameCore::CakeRaceFieldScoreRow* a2)
		{
			return ((::System::UInt32(*)(::System::Int32, ::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_LPNMJHLGPGC_OFFSET))(a1, a2);
		}

		static ::System::UInt32 MIDMNIMLBEH(::System::Int32 a1, ::RPG::GameCore::CakeRaceFieldScoreRow* a2)
		{
			return ((::System::UInt32(*)(::System::Int32, ::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_MIDMNIMLBEH_OFFSET))(a1, a2);
		}

		::System::UInt32 NNJOOHMAMMJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_NNJOOHMAMMJ_OFFSET))(this, a1, a2, a3);
		}

		::BAHPIHGCJJJ* EGEBAONLDFA()
		{
			return ((::BAHPIHGCJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_EGEBAONLDFA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>* PNLCCLGHDDA()
		{
			return ((::System::Collections::Generic::List_1<::BAHPIHGCJJJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_PNLCCLGHDDA_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIIPOAMEICN*>* get_GameEndDataDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIIPOAMEICN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_GET_GAMEENDDATADIC_OFFSET))(this);
		}

		::System::Void set_GameEndDataDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIIPOAMEICN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FIIPOAMEICN*>*))((::PBYTE)hIl2Cpp + FCFLMBKJPOJ_SET_GAMEENDDATADIC_OFFSET))(this, a1);
		}

	};

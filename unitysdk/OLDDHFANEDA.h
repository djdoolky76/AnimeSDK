#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OLDDHFANEDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D298E20)
#define OLDDHFANEDA_CFCMMIJPBOM_OFFSET UNITYSDK_OFFSET(0x1D298DA0)
#define OLDDHFANEDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D298AB0)
#define OLDDHFANEDA_FHBALBGGLKD_OFFSET UNITYSDK_OFFSET(0x1D298DD0)
#define OLDDHFANEDA_KONLJMKIEMO_OFFSET UNITYSDK_OFFSET(0x1D298D40)
#define OLDDHFANEDA_LJFPHMJEBJP_OFFSET UNITYSDK_OFFSET(0x1D298CB0)

inline static constexpr unsigned int OLDDHFANEDA_TypeDefinitionIndex = 15469;

	class OLDDHFANEDA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>*>* BGJLMINEPBC; // 0x10
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* LIMCNDFPKNK; // 0x18
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* NCHNOKEBGLP; // 0x20
		::Il2CppArray<::System::UInt32>* IIGJBFLIBJP; // 0x28
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>*>* FLJFLIKCJIG; // 0x30
		::Il2CppArray<::System::UInt32>* BBHOAALCBDG; // 0x38
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* OPPIOEIGDKA; // 0x40
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* DMNCPNLEBAG; // 0x48
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* PDNGPJMJICE; // 0x50
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* IFCDECDJIHC; // 0x58
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* OMFIKAAAKAK; // 0x60
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* ADEIIKLFECP; // 0x68
		::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair*>* PONOIIEFMBP; // 0x70
		::Il2CppArray<::RPG::GameCore::DynamicValue*>* EICPGFFNFAD; // 0x78
		::System::Int32 JMMCMDCHOJF; // 0x80
		::System::UInt32 NEDPIEDCHGI; // 0x84
		::RPG::GameCore::FixPoint LFIDBICKBIN; // 0x88
		::System::Int32 PGFKIJLAHEL; // 0x90
		::System::UInt32 ODHIGHPLHHP; // 0x94
		::RPG::GameCore::FixPoint BGDCOIKDDNA; // 0x98
		::System::Int32 OOMLIIAJAGK; // 0xA0
		::System::Int32 KMFCPGOKIBK; // 0xA4
		::RPG::GameCore::FixPoint LHDNAAMOMLM; // 0xA8
		::System::UInt32 KPHIINCEEFJ; // 0xB0
		::System::UInt32 PDOAFKEDJLA; // 0xB4
		::System::UInt32 CAFGPNMNIFN; // 0xB8
		::System::UInt32 ONDNJBHBMLN; // 0xBC
		::System::UInt32 NPDBGDFHOMG; // 0xC0
		::System::Int32 INPDBMEMOJK; // 0xC4
		::System::UInt32 GGJIPMCNGKA; // 0xC8
		::System::UInt32 KLCDJKLAPNB; // 0xCC
		::System::Int32 IFMLIGGGMON; // 0xD0
		::System::UInt32 IEDPAHBEPKI; // 0xD4
		::RPG::GameCore::FixPoint MOJMLLNMBFB; // 0xD8
		::System::Int32 GGAGILKADDF; // 0xE0
		::System::Int32 LOEDFEEMKKN; // 0xE4
		::RPG::GameCore::FixPoint LGPACFFHEBM; // 0xE8
		static ::System::UInt32* StaticGet_IOAOFIHBOGO()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "OLDDHFANEDA")->GetStaticField(0xC320);
		}

		static ::System::Int32* StaticGet_EMBMMHKPMIJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "OLDDHFANEDA")->GetStaticField(0xC324);
		}

		// static const ::System::Object MCOPOPIKHHM; // 0x0
		// static const ::System::Object BOHDBANJIIJ; // 0x0
		// static const ::System::Object AGEMNBPMBLH; // 0x0
		// static const ::System::Object DLJGJLBKPDD; // 0x0
		// static const ::System::Object LHHDNHEJPHI; // 0x0
		// static const ::System::Object LFIKJAIMBFC; // 0x0
		// static const ::System::Object ALCPMPEKPMI; // 0x0
		// static const ::System::Object GJEPECDNGEF; // 0x0
		// static const ::System::Object JADFNDCILKG; // 0x0
		// static const ::System::Object OMFIOLHLGMI; // 0x0
		// static const ::System::Object MKLPPNAGJOH; // 0x0
		// static const ::System::Object HHLADPAONBO; // 0x0
		// static const ::System::Object PIJMKCAMJOH; // 0x0
		// static const ::System::Object EEOEJCKBCCK; // 0x0
		// static const ::System::Object LEHCOLJCGJF; // 0x0
		// static const ::System::Object BMOAGJOCHIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDDHFANEDA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLDDHFANEDA_CCTOR_OFFSET))();
		}

		::System::Void LJFPHMJEBJP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OLDDHFANEDA_LJFPHMJEBJP_OFFSET))(this, a1, a2);
		}

		::System::Void KONLJMKIEMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLDDHFANEDA_KONLJMKIEMO_OFFSET))(this, a1);
		}

		::System::UInt32 CFCMMIJPBOM(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OLDDHFANEDA_CFCMMIJPBOM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FHBALBGGLKD(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLDDHFANEDA_FHBALBGGLKD_OFFSET))(this, a1);
		}

	};

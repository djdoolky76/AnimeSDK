#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FLOLKKNPNHA_CDBBIJEDKNP.h"
#include "unitysdk/System/ValueTuple_2.h"

class AHNIFOEGOBB;
class AIIHGJKLJIL;
class CDMAIMPNFHB;
class NKOGNHFECAJ;
namespace MoleMole::ChessStateMachine { class ChessStateMachineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FLOLKKNPNHA_APGEOKFLNOO_OFFSET UNITYSDK_OFFSET(0x14AE0310)
#define FLOLKKNPNHA_BFNNOMKNENM_OFFSET UNITYSDK_OFFSET(0x14AE1750)
#define FLOLKKNPNHA_COFCECLDNHL_OFFSET UNITYSDK_OFFSET(0x14ADFFD0)
#define FLOLKKNPNHA_HFJKMKMOKPA_OFFSET UNITYSDK_OFFSET(0x14AE0700)
#define FLOLKKNPNHA_JMLFBAPPPEP_OFFSET UNITYSDK_OFFSET(0x14AE0AA0)
#define FLOLKKNPNHA_SPAWN_OFFSET UNITYSDK_OFFSET(0x14ADFF70)
#define FLOLKKNPNHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AE01F0)
#define FLOLKKNPNHA__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE01E0)

inline static constexpr unsigned int FLOLKKNPNHA_TypeDefinitionIndex = 48381;

class FLOLKKNPNHA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::AHNIFOEGOBB*>** StaticGet_PJPKICKKIKP()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::AHNIFOEGOBB*>**)Il2CppClass::FromTypeDefinitionIndex(FLOLKKNPNHA_TypeDefinitionIndex)->GetStaticField(0x4E460);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::AIIHGJKLJIL*>** StaticGet_GHKGJOBJIAN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::AIIHGJKLJIL*>**)Il2CppClass::FromTypeDefinitionIndex(FLOLKKNPNHA_TypeDefinitionIndex)->GetStaticField(0x4E468);
	}

	::System::Void _ctor(::MoleMole::ChessStateMachine::ChessStateMachineConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*))((::PBYTE)hIl2Cpp + FLOLKKNPNHA__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLOLKKNPNHA__CCTOR_OFFSET))();
	}

	::CDMAIMPNFHB* Spawn(::CDMAIMPNFHB* GOBFCIGINHD, ::MoleMole::ChessStateMachine::ChessStateMachineConfig* ICJLMFFFPJP)
	{
		return ((::CDMAIMPNFHB*(*)(::PVOID, ::CDMAIMPNFHB*, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*))((::PBYTE)hIl2Cpp + FLOLKKNPNHA_SPAWN_OFFSET))(this, GOBFCIGINHD, ICJLMFFFPJP);
	}

	::System::Void APGEOKFLNOO(::CDMAIMPNFHB* GOBFCIGINHD, ::MoleMole::ChessStateMachine::ChessStateMachineConfig* BEEPCNMPIHA)
	{
		return ((::System::Void(*)(::PVOID, ::CDMAIMPNFHB*, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*))((::PBYTE)hIl2Cpp + FLOLKKNPNHA_APGEOKFLNOO_OFFSET))(this, GOBFCIGINHD, BEEPCNMPIHA);
	}

	static ::System::Void HFJKMKMOKPA(::MoleMole::ChessStateMachine::ChessStateMachineConfig* PJMBEGPGMMN, ::CDMAIMPNFHB* CJFLMHJPCAM, ::FLOLKKNPNHA_CDBBIJEDKNP& param_2)
	{
		return ((::System::Void(*)(::MoleMole::ChessStateMachine::ChessStateMachineConfig*, ::CDMAIMPNFHB*, ::FLOLKKNPNHA_CDBBIJEDKNP&))((::PBYTE)hIl2Cpp + FLOLKKNPNHA_HFJKMKMOKPA_OFFSET))(PJMBEGPGMMN, CJFLMHJPCAM, param_2);
	}

	::System::Void JMLFBAPPPEP(::NKOGNHFECAJ* FBMJAKPBLEJ, ::NKOGNHFECAJ* LAKGJKFJKKM, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AHNIFOEGOBB*>* PJPKICKKIKP, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AIIHGJKLJIL*>* GHKGJOBJIAN, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FPJAGGLHAJE)
	{
		return ((::System::Void(*)(::PVOID, ::NKOGNHFECAJ*, ::NKOGNHFECAJ*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AHNIFOEGOBB*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AIIHGJKLJIL*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + FLOLKKNPNHA_JMLFBAPPPEP_OFFSET))(this, FBMJAKPBLEJ, LAKGJKFJKKM, PJPKICKKIKP, GHKGJOBJIAN, FPJAGGLHAJE);
	}

	::CDMAIMPNFHB* COFCECLDNHL(::MoleMole::ChessStateMachine::ChessStateMachineConfig* LCPELMFMDHA, ::CDMAIMPNFHB* GOBFCIGINHD)
	{
		return ((::CDMAIMPNFHB*(*)(::PVOID, ::MoleMole::ChessStateMachine::ChessStateMachineConfig*, ::CDMAIMPNFHB*))((::PBYTE)hIl2Cpp + FLOLKKNPNHA_COFCECLDNHL_OFFSET))(this, LCPELMFMDHA, GOBFCIGINHD);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::AHNIFOEGOBB*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AIIHGJKLJIL*>*> BFNNOMKNENM(::MoleMole::ChessStateMachine::ChessStateMachineConfig* BEEPCNMPIHA, ::CDMAIMPNFHB* POAFOGIIFOH)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::String*, ::AHNIFOEGOBB*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::AIIHGJKLJIL*>*>(*)(::MoleMole::ChessStateMachine::ChessStateMachineConfig*, ::CDMAIMPNFHB*))((::PBYTE)hIl2Cpp + FLOLKKNPNHA_BFNNOMKNENM_OFFSET))(BEEPCNMPIHA, POAFOGIIFOH);
	}
};

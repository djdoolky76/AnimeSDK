#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class DLNCBOGAMFG;
class KDFFHMDFALG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIPELBHHIHI_ABHMALNGJHH_OFFSET UNITYSDK_OFFSET(0x15A42960)
#define GIPELBHHIHI_ANLPBBPOHAO_OFFSET UNITYSDK_OFFSET(0x15A440F0)
#define GIPELBHHIHI_BDDDOBKOHMJ_OFFSET UNITYSDK_OFFSET(0x15A42740)
#define GIPELBHHIHI_CFHDDLFJIEN_OFFSET UNITYSDK_OFFSET(0x15A431E0)
#define GIPELBHHIHI_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x15A429A0)
#define GIPELBHHIHI_CJBNJACBHPL_OFFSET UNITYSDK_OFFSET(0x15A447D0)
#define GIPELBHHIHI_CNBFJOHMMEO_OFFSET UNITYSDK_OFFSET(0x15A43340)
#define GIPELBHHIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A44E00)
#define GIPELBHHIHI_DDNDOOIMFGE_OFFSET UNITYSDK_OFFSET(0x15A44990)
#define GIPELBHHIHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A42BB0)
#define GIPELBHHIHI_DOCNDKNDMAJ_OFFSET UNITYSDK_OFFSET(0x15A44340)
#define GIPELBHHIHI_DOEFDKHHCHJ_OFFSET UNITYSDK_OFFSET(0x15A41D40)
#define GIPELBHHIHI_EPGMMCDMODL_OFFSET UNITYSDK_OFFSET(0x15A44700)
#define GIPELBHHIHI_FAMNIPEJMIC_OFFSET UNITYSDK_OFFSET(0x15A441A0)
#define GIPELBHHIHI_KCENHJNJEMH_OFFSET UNITYSDK_OFFSET(0x15A43EB0)
#define GIPELBHHIHI_LHAKMEPDDJL_OFFSET UNITYSDK_OFFSET(0x15A44BE0)
#define GIPELBHHIHI_LIDNHPNMFHP_OFFSET UNITYSDK_OFFSET(0x15A42CA0)
#define GIPELBHHIHI_LIELIMHHLHO_OFFSET UNITYSDK_OFFSET(0x15A42250)
#define GIPELBHHIHI_LOJDBDJFJHK_OFFSET UNITYSDK_OFFSET(0x15A444A0)
#define GIPELBHHIHI_NFNKLEAFFCI_OFFSET UNITYSDK_OFFSET(0x15A42F60)
#define GIPELBHHIHI_OJLDJAGLBDN_OFFSET UNITYSDK_OFFSET(0x15A427D0)
#define GIPELBHHIHI_PMLPLNJMFMO_OFFSET UNITYSDK_OFFSET(0x15A42330)
#define GIPELBHHIHI_PNDJIKIALNG_OFFSET UNITYSDK_OFFSET(0x15A43A70)

inline static constexpr unsigned int GIPELBHHIHI_TypeDefinitionIndex = 60627;

	class GIPELBHHIHI : public ::NPEBLEKDAGI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Object*>* LJKIOJAJOMN; // 0x10
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x18
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* AKGOFPGKIKA; // 0x28
		::System::Boolean KJPMJPLEHHF; // 0x30
		::System::Byte _padding0[0x3];
		::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> FKCLGOHFADC; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CTOR_OFFSET))(this);
		}

		::System::Void DOEFDKHHCHJ(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_DOEFDKHHCHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BDDDOBKOHMJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_BDDDOBKOHMJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ABHMALNGJHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_ABHMALNGJHH_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_DISPOSE_OFFSET))(this);
		}

		::System::Void LIDNHPNMFHP(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_LIDNHPNMFHP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFNKLEAFFCI(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_NFNKLEAFFCI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CFHDDLFJIEN(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CFHDDLFJIEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNBFJOHMMEO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::RPG::GameCore::MapRotationVolumeState>*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CNBFJOHMMEO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PMLPLNJMFMO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + GIPELBHHIHI_PMLPLNJMFMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PNDJIKIALNG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_PNDJIKIALNG_OFFSET))(this, a1, a2);
		}

		::System::Void KCENHJNJEMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_KCENHJNJEMH_OFFSET))(this, a1);
		}

		::RPG::GameCore::MapRotationVolumeState ANLPBBPOHAO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MapRotationVolumeState(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_ANLPBBPOHAO_OFFSET))(this, a1, a2);
		}

		::System::Boolean FAMNIPEJMIC(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + GIPELBHHIHI_FAMNIPEJMIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOCNDKNDMAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPELBHHIHI_DOCNDKNDMAJ_OFFSET))(this, a1);
		}

		::System::Void LOJDBDJFJHK(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_LOJDBDJFJHK_OFFSET))(this, a1, a2);
		}

		::System::Void OJLDJAGLBDN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPELBHHIHI_OJLDJAGLBDN_OFFSET))(this, a1, a2);
		}

		::System::Void EPGMMCDMODL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_EPGMMCDMODL_OFFSET))(this, a1);
		}

		::System::Void DDNDOOIMFGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_DDNDOOIMFGE_OFFSET))(this, a1);
		}

		::System::Void CJBNJACBHPL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CJBNJACBHPL_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>> LHAKMEPDDJL()
		{
			return ((::System::Nullable_1<::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::Single>>(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_LHAKMEPDDJL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* LIELIMHHLHO()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_LIELIMHHLHO_OFFSET))(this);
		}

	};

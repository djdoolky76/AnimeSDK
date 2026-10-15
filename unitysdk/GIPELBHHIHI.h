#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/RPG/GameCore/MapRotationVolumeState.h"
#include "unitysdk/System/ValueTuple.h"
class DLNCBOGAMFG;
class KDFFHMDFALG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GIPELBHHIHI_ABHMALNGJHH_OFFSET UNITYSDK_OFFSET(0x15A4E300)
#define GIPELBHHIHI_ANLPBBPOHAO_OFFSET UNITYSDK_OFFSET(0x15A4FA70)
#define GIPELBHHIHI_BDDDOBKOHMJ_OFFSET UNITYSDK_OFFSET(0x15A4E0E0)
#define GIPELBHHIHI_CFHDDLFJIEN_OFFSET UNITYSDK_OFFSET(0x15A4EB70)
#define GIPELBHHIHI_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x15A4E340)
#define GIPELBHHIHI_CJBNJACBHPL_OFFSET UNITYSDK_OFFSET(0x15A50150)
#define GIPELBHHIHI_CNBFJOHMMEO_OFFSET UNITYSDK_OFFSET(0x15A4ECD0)
#define GIPELBHHIHI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A50780)
#define GIPELBHHIHI_DDNDOOIMFGE_OFFSET UNITYSDK_OFFSET(0x15A50310)
#define GIPELBHHIHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A4E550)
#define GIPELBHHIHI_DOCNDKNDMAJ_OFFSET UNITYSDK_OFFSET(0x15A4FCC0)
#define GIPELBHHIHI_DOEFDKHHCHJ_OFFSET UNITYSDK_OFFSET(0x15A4D770)
#define GIPELBHHIHI_EPGMMCDMODL_OFFSET UNITYSDK_OFFSET(0x15A50080)
#define GIPELBHHIHI_FAMNIPEJMIC_OFFSET UNITYSDK_OFFSET(0x15A4FB20)
#define GIPELBHHIHI_KCENHJNJEMH_OFFSET UNITYSDK_OFFSET(0x15A4F840)
#define GIPELBHHIHI_LHAKMEPDDJL_OFFSET UNITYSDK_OFFSET(0x15A50560)
#define GIPELBHHIHI_LIDNHPNMFHP_OFFSET UNITYSDK_OFFSET(0x15A4E640)
#define GIPELBHHIHI_LIELIMHHLHO_OFFSET UNITYSDK_OFFSET(0x15A4DC00)
#define GIPELBHHIHI_LOJDBDJFJHK_OFFSET UNITYSDK_OFFSET(0x15A4FE20)
#define GIPELBHHIHI_NFNKLEAFFCI_OFFSET UNITYSDK_OFFSET(0x15A4E8F0)
#define GIPELBHHIHI_OJLDJAGLBDN_OFFSET UNITYSDK_OFFSET(0x15A4E170)
#define GIPELBHHIHI_PMLPLNJMFMO_OFFSET UNITYSDK_OFFSET(0x15A4DCE0)
#define GIPELBHHIHI_PNDJIKIALNG_OFFSET UNITYSDK_OFFSET(0x15A4F400)

	class GIPELBHHIHI : public ::NPEBLEKDAGI
	{
	public:
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Object*>* LJKIOJAJOMN; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* AKGOFPGKIKA; // 0x20
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x28
		::System::Nullable* FKCLGOHFADC; // 0x30
		::System::Byte _padding0[0x4];
		::System::Boolean KJPMJPLEHHF; // 0x3C
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

		::System::Void CFHDDLFJIEN(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CFHDDLFJIEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CNBFJOHMMEO(::System::UInt32 a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + GIPELBHHIHI_CNBFJOHMMEO_OFFSET))(this, a1, a2, a3);
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

		::System::Nullable* LHAKMEPDDJL()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_LHAKMEPDDJL_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::RPG::GameCore::MapRotationVolumeConfig*>* LIELIMHHLHO()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPELBHHIHI_LIELIMHHLHO_OFFSET))(this);
		}

	};

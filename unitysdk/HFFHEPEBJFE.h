#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetDiySlotType.h"
#include "unitysdk/System/Object.h"
class DGCLAKDAHDB;
class FKIODIMJPNA;
class MDNGGPDFFIE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFFHEPEBJFE_CTOR_OFFSET UNITYSDK_OFFSET(0x15C6A850)
#define HFFHEPEBJFE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C6AE70)
#define HFFHEPEBJFE_DPMGJEPJBKC_OFFSET UNITYSDK_OFFSET(0x15C6ABD0)
#define HFFHEPEBJFE_ECHIBEEFJEC_OFFSET UNITYSDK_OFFSET(0x15C6B800)
#define HFFHEPEBJFE_FIGFEOPPGJB_OFFSET UNITYSDK_OFFSET(0x15C6B6D0)
#define HFFHEPEBJFE_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x15C6B810)
#define HFFHEPEBJFE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15C6B570)
#define HFFHEPEBJFE_KBLKAOPOINO_OFFSET UNITYSDK_OFFSET(0x15C6B250)
#define HFFHEPEBJFE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C6AA10)
#define HFFHEPEBJFE_OMHLHHDMCBN_OFFSET UNITYSDK_OFFSET(0x15C6B3E0)
#define HFFHEPEBJFE_SET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0x15C6B820)

inline static constexpr unsigned int HFFHEPEBJFE_TypeDefinitionIndex = 60200;

	class HFFHEPEBJFE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DGCLAKDAHDB*>* NHDBGCCOFPH; // 0x10
		::MDNGGPDFFIE* OJMMJIALPON; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PetDiySlotType, ::DGCLAKDAHDB*>* IGJAIDPOKPO; // 0x20
		::System::Boolean _NeedTick_k__BackingField; // 0x28
		::System::Void _ctor(::MDNGGPDFFIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDNGGPDFFIE*))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_DISPOSE_OFFSET))(this);
		}

		::System::Void KBLKAOPOINO(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_KBLKAOPOINO_OFFSET))(this, a1);
		}

		::System::Void OMHLHHDMCBN(::FKIODIMJPNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKIODIMJPNA*))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_OMHLHHDMCBN_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FIGFEOPPGJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_FIGFEOPPGJB_OFFSET))(this, a1);
		}

		::System::Void DPMGJEPJBKC(::DGCLAKDAHDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGCLAKDAHDB*))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_DPMGJEPJBKC_OFFSET))(this, a1);
		}

		::MDNGGPDFFIE* ECHIBEEFJEC()
		{
			return ((::MDNGGPDFFIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_ECHIBEEFJEC_OFFSET))(this);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Void set_NeedTick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFFHEPEBJFE_SET_NEEDTICK_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOABGMGNKGA;
class OIGHNLFOKPE;
namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class MapEntityDef; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define OIGHNLFOKPE_AEOIKFNKAAP_OFFSET UNITYSDK_OFFSET(0xBE88310)
#define OIGHNLFOKPE_AFIJBDMGDPE_OFFSET UNITYSDK_OFFSET(0xBE88B30)
#define OIGHNLFOKPE_CPHJNENBHKL_OFFSET UNITYSDK_OFFSET(0xBE89150)
#define OIGHNLFOKPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE88090)
#define OIGHNLFOKPE_GET_NEWMAPENTITIES_OFFSET UNITYSDK_OFFSET(0xBE89290)
#define OIGHNLFOKPE_GET_REMOVEDLOCALENTITIES_OFFSET UNITYSDK_OFFSET(0xBE892B0)
#define OIGHNLFOKPE_GET_REMOVEDSERVERENTITIES_OFFSET UNITYSDK_OFFSET(0xBE892A0)
#define OIGHNLFOKPE_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xBE892C0)
#define OIGHNLFOKPE_HFMIKMGHAPB_OFFSET UNITYSDK_OFFSET(0xBE88440)
#define OIGHNLFOKPE_HLNIJGBJCCK_OFFSET UNITYSDK_OFFSET(0xBE88C20)
#define OIGHNLFOKPE_HOCJOLFLPJM_OFFSET UNITYSDK_OFFSET(0xBE884A0)
#define OIGHNLFOKPE_KKGDGNPIMLC_OFFSET UNITYSDK_OFFSET(0xBE891E0)
#define OIGHNLFOKPE_NNMMHHGOJEI_OFFSET UNITYSDK_OFFSET(0xBE890C0)
#define OIGHNLFOKPE_NPHAKGGHKCK_OFFSET UNITYSDK_OFFSET(0xBE888A0)
#define OIGHNLFOKPE_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBE881A0)

inline static constexpr unsigned int OIGHNLFOKPE_TypeDefinitionIndex = 62139;

	class OIGHNLFOKPE : public ::System::Object
	{
	public:
		::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedServerEntities_k__BackingField; // 0x10
		::System::Action* MGJLINFADJK; // 0x18
		::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _NewMapEntities_k__BackingField; // 0x20
		::Collections::Pooled::PooledList_1<::EOABGMGNKGA*>* PKBLOEEAMFH; // 0x28
		::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* _RemovedLocalEntities_k__BackingField; // 0x30
		::System::Boolean JFKLBODEFPL; // 0x38
		::System::Boolean JDMLKGGPKCL; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_PJPFIHFAHGO_OFFSET))(this);
		}

		::OIGHNLFOKPE* AEOIKFNKAAP()
		{
			return ((::OIGHNLFOKPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_AEOIKFNKAAP_OFFSET))(this);
		}

		::System::Void HFMIKMGHAPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_HFMIKMGHAPB_OFFSET))(this);
		}

		::System::Boolean HOCJOLFLPJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_HOCJOLFLPJM_OFFSET))(this);
		}

		::System::Void AFIJBDMGDPE(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_AFIJBDMGDPE_OFFSET))(this, a1);
		}

		::System::Void HLNIJGBJCCK(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_HLNIJGBJCCK_OFFSET))(this, a1);
		}

		::System::Void NNMMHHGOJEI(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_NNMMHHGOJEI_OFFSET))(this, a1);
		}

		::System::Void CPHJNENBHKL(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_CPHJNENBHKL_OFFSET))(this, a1);
		}

		::System::Void NPHAKGGHKCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_NPHAKGGHKCK_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* KKGDGNPIMLC()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_KKGDGNPIMLC_OFFSET))(this);
		}

		::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_NewMapEntities()
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_GET_NEWMAPENTITIES_OFFSET))(this);
		}

		::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedServerEntities()
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_GET_REMOVEDSERVERENTITIES_OFFSET))(this);
		}

		::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>* get_RemovedLocalEntities()
		{
			return ((::Collections::Pooled::PooledList_1<::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_GET_REMOVEDLOCALENTITIES_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIGHNLFOKPE_GNNPFBBMFLA_OFFSET))(this);
		}

	};

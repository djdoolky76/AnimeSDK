#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFJJFFMMEAF.h"
#include "unitysdk/GODJKFFNCNI.h"
#include "unitysdk/ADBMFDNMBIJ.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
class FABMDCOFHCG;
class KFELGAIGHAP;
class MDJOLMBECHA;
class OKOCPOFNODF;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class AddModifier; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAJPDPAHFOA_BFCDKOEAHPL_OFFSET UNITYSDK_OFFSET(0x16556C70)
#define JAJPDPAHFOA_COEBCFILCIH_OFFSET UNITYSDK_OFFSET(0x16557420)
#define JAJPDPAHFOA_CTOR_OFFSET UNITYSDK_OFFSET(0x165541F0)
#define JAJPDPAHFOA_DINFDBMMMCD_OFFSET UNITYSDK_OFFSET(0x165560F0)
#define JAJPDPAHFOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16554350)
#define JAJPDPAHFOA_EBAKJENHODH_OFFSET UNITYSDK_OFFSET(0x16556E50)
#define JAJPDPAHFOA_GAKKBJAPCKI_OFFSET UNITYSDK_OFFSET(0x16556000)
#define JAJPDPAHFOA_HLIKBEBHGEF_OFFSET UNITYSDK_OFFSET(0x16556F40)
#define JAJPDPAHFOA_JEGGLPJGNCF_OFFSET UNITYSDK_OFFSET(0x16557170)
#define JAJPDPAHFOA_LAJFIMAFDJF_OFFSET UNITYSDK_OFFSET(0x16556960)
#define JAJPDPAHFOA_LOECAPMLACO_OFFSET UNITYSDK_OFFSET(0x16556330)
#define JAJPDPAHFOA_NLCAFABBKEH_OFFSET UNITYSDK_OFFSET(0x16556D60)
#define JAJPDPAHFOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16554550)

inline static constexpr unsigned int JAJPDPAHFOA_TypeDefinitionIndex = 54816;

	class JAJPDPAHFOA
	{
	public:
		::KFELGAIGHAP* BCEOFGNHABE; // 0x28
		::KFELGAIGHAP* MACKGFGJMLE; // 0x30
		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* EEMDJJPDGKH; // 0x38
		::System::Collections::Generic::List_1<::GODJKFFNCNI>* PNAOJIPAENO; // 0x40
		::KFELGAIGHAP* NIMNFGDDPFG; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddModifier*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JEGGLPJGNCF(::KFELGAIGHAP* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_JEGGLPJGNCF_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::CFJJFFMMEAF>* LOECAPMLACO(::OKOCPOFNODF* a1)
		{
			return ((::System::Collections::Generic::List_1<::CFJJFFMMEAF>*(*)(::PVOID, ::OKOCPOFNODF*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_LOECAPMLACO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GODJKFFNCNI>* LAJFIMAFDJF()
		{
			return ((::System::Collections::Generic::List_1<::GODJKFFNCNI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_LAJFIMAFDJF_OFFSET))(this);
		}

		::FABMDCOFHCG* DINFDBMMMCD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::FABMDCOFHCG*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_DINFDBMMMCD_OFFSET))(this, a1);
		}

		::OKOCPOFNODF* GAKKBJAPCKI(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::OKOCPOFNODF*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_GAKKBJAPCKI_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint HLIKBEBHGEF(::OKOCPOFNODF* a1, ::RPG::PoolList_1<::MDJOLMBECHA*>* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::OKOCPOFNODF*, ::RPG::PoolList_1<::MDJOLMBECHA*>*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_HLIKBEBHGEF_OFFSET))(this, a1, a2);
		}

		::System::Nullable_1<::System::Int32> BFCDKOEAHPL(::OKOCPOFNODF* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::OKOCPOFNODF*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_BFCDKOEAHPL_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> NLCAFABBKEH(::OKOCPOFNODF* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::OKOCPOFNODF*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_NLCAFABBKEH_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> EBAKJENHODH(::OKOCPOFNODF* a1)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::OKOCPOFNODF*))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_EBAKJENHODH_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> COEBCFILCIH(::OKOCPOFNODF* a1, ::RPG::GameCore::DynamicFloat* a2, ::ADBMFDNMBIJ a3)
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID, ::OKOCPOFNODF*, ::RPG::GameCore::DynamicFloat*, ::ADBMFDNMBIJ))((::PBYTE)hIl2Cpp + JAJPDPAHFOA_COEBCFILCIH_OFFSET))(this, a1, a2, a3);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FONMDGEEEGO;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class Action; }
namespace System { class String; }

#define HNEJODMMPKC_AOKMKGIHOKG_OFFSET UNITYSDK_OFFSET(0x1CABF6F0)
#define HNEJODMMPKC_CIDKDEGFNEI_OFFSET UNITYSDK_OFFSET(0x1CABF4A0)
#define HNEJODMMPKC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CABFF00)
#define HNEJODMMPKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAC0090)
#define HNEJODMMPKC_DNBBLCCJBJE_OFFSET UNITYSDK_OFFSET(0x1CABFC00)
#define HNEJODMMPKC_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0x1CABEFB0)
#define HNEJODMMPKC_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1CABEE30)
#define HNEJODMMPKC_KFAJPMAOBOO_OFFSET UNITYSDK_OFFSET(0x1CABF1C0)
#define HNEJODMMPKC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1CABEDE0)
#define HNEJODMMPKC_LAHMJGNJFDC_OFFSET UNITYSDK_OFFSET(0x1CABFDC0)
#define HNEJODMMPKC_MOMDALOFBEE_OFFSET UNITYSDK_OFFSET(0x1CABF9D0)
#define HNEJODMMPKC_NBCKMAFIBPI_OFFSET UNITYSDK_OFFSET(0x1CABF3A0)

inline static constexpr unsigned int HNEJODMMPKC_TypeDefinitionIndex = 42066;

	class HNEJODMMPKC : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::PoolList_1<::System::Int32>*>* FHIFPOBDFIB; // 0x10
		::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::FONMDGEEEGO*>* DIENJPPEJJK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEJODMMPKC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::FONMDGEEEGO*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::FONMDGEEEGO*>*))((::PBYTE)hIl2Cpp + HNEJODMMPKC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint Evaluate(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + HNEJODMMPKC_EVALUATE_OFFSET))(this, a1);
		}

		::System::Void EKFIEAALOFF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HNEJODMMPKC_EKFIEAALOFF_OFFSET))(this, a1);
		}

		::System::Void KFAJPMAOBOO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HNEJODMMPKC_KFAJPMAOBOO_OFFSET))(this, a1);
		}

		::System::Boolean NBCKMAFIBPI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HNEJODMMPKC_NBCKMAFIBPI_OFFSET))(this, a1);
		}

		::System::Void CIDKDEGFNEI(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HNEJODMMPKC_CIDKDEGFNEI_OFFSET))(this, a1, a2);
		}

		::System::Void AOKMKGIHOKG(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + HNEJODMMPKC_AOKMKGIHOKG_OFFSET))(this, a1, a2);
		}

		::System::Void MOMDALOFBEE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HNEJODMMPKC_MOMDALOFBEE_OFFSET))(this, a1, a2);
		}

		::System::Boolean DNBBLCCJBJE(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + HNEJODMMPKC_DNBBLCCJBJE_OFFSET))(this, a1, a2);
		}

		::System::Void LAHMJGNJFDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEJODMMPKC_LAHMJGNJFDC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEJODMMPKC_CLEAR_OFFSET))(this);
		}

	};

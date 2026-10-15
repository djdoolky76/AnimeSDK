#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FADHEIGJENF;
class FIIJNPBFJBG;
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFDBCBOFLKP_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xBB75150)
#define NFDBCBOFLKP_AKBIPPMHFMC_OFFSET UNITYSDK_OFFSET(0xBB751E0)
#define NFDBCBOFLKP_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xBB73EF0)
#define NFDBCBOFLKP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB752B0)
#define NFDBCBOFLKP_DJNNBDMBOKN_OFFSET UNITYSDK_OFFSET(0xBB74530)
#define NFDBCBOFLKP_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xBB75000)
#define NFDBCBOFLKP_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB74B70)
#define NFDBCBOFLKP_HBALKCHBGEL_OFFSET UNITYSDK_OFFSET(0xBB74C00)
#define NFDBCBOFLKP_HGLFPEKNBHB_OFFSET UNITYSDK_OFFSET(0xBB74DC0)
#define NFDBCBOFLKP_KHIJILBFOBB_OFFSET UNITYSDK_OFFSET(0xBB750A0)
#define NFDBCBOFLKP_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0xBB74D20)
#define NFDBCBOFLKP_OKBLIOBEHBF_OFFSET UNITYSDK_OFFSET(0xBB74EE0)
#define NFDBCBOFLKP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBB746F0)
#define NFDBCBOFLKP_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0xBB74C40)

inline static constexpr unsigned int NFDBCBOFLKP_TypeDefinitionIndex = 65517;

	class NFDBCBOFLKP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* CCLGKDICBNH; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* CNKENNOJMOG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_CTOR_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::FIIJNPBFJBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIIJNPBFJBG*))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Void DJNNBDMBOKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_DJNNBDMBOKN_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::FADHEIGJENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FADHEIGJENF*))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* HBALKCHBGEL()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_HBALKCHBGEL_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PEFLJDOKOIL(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* HGLFPEKNBHB()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_HGLFPEKNBHB_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::RPG::GameCore::FixPoint>* OKBLIOBEHBF()
		{
			return ((::System::Collections::Generic::ICollection_1<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_OKBLIOBEHBF_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHIJILBFOBB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_KHIJILBFOBB_OFFSET))(this, a1);
		}

		::System::Boolean AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Boolean AKBIPPMHFMC(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NFDBCBOFLKP_AKBIPPMHFMC_OFFSET))(this, a1, a2);
		}

	};

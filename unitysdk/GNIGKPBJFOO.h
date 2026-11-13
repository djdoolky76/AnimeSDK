#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class AJCJJOCGIEL;
class GNIGKPBJFOO;
class GNIGKPBJFOO_DGHCJNGOCLP;
class OJDIPBBEIOB;
class PNDNFPHFBMK;
namespace System { class String; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNIGKPBJFOO_CDIJFPNBHGG_OFFSET UNITYSDK_OFFSET(0x18793A70)
#define GNIGKPBJFOO_CTOR_OFFSET UNITYSDK_OFFSET(0x187932E0)
#define GNIGKPBJFOO_GCFLBAKNFHP_OFFSET UNITYSDK_OFFSET(0x187939F0)
#define GNIGKPBJFOO_GLBEDOCEGKK_1_OFFSET UNITYSDK_OFFSET(0x18793990)
#define GNIGKPBJFOO_GLBEDOCEGKK_OFFSET UNITYSDK_OFFSET(0x18793870)
#define GNIGKPBJFOO_HHJKPHJDFLC_OFFSET UNITYSDK_OFFSET(0x187933C0)
#define GNIGKPBJFOO_JOLCFMLFBBO_OFFSET UNITYSDK_OFFSET(0x187934E0)
#define GNIGKPBJFOO_LKLOIKJNGAC_OFFSET UNITYSDK_OFFSET(0x187935E0)
#define GNIGKPBJFOO_OLDIJBOJDFC_OFFSET UNITYSDK_OFFSET(0x18792FF0)

inline static constexpr unsigned int GNIGKPBJFOO_TypeDefinitionIndex = 69281;

	class GNIGKPBJFOO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OJDIPBBEIOB*>* CJIGFCPBEFD; // 0x10
		::GNIGKPBJFOO_DGHCJNGOCLP* NABLOINKCCC; // 0x18
		::RPG::Client::TextID DIDPADKMCAL; // 0x20
		::System::Void _ctor(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_CTOR_OFFSET))(this, a1);
		}

		::GNIGKPBJFOO* OLDIJBOJDFC()
		{
			return ((::GNIGKPBJFOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_OLDIJBOJDFC_OFFSET))(this);
		}

		static ::GNIGKPBJFOO* HHJKPHJDFLC(::RPG::Client::TextID a1)
		{
			return ((::GNIGKPBJFOO*(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_HHJKPHJDFLC_OFFSET))(a1);
		}

		::GNIGKPBJFOO* JOLCFMLFBBO(::System::Collections::IList* a1)
		{
			return ((::GNIGKPBJFOO*(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_JOLCFMLFBBO_OFFSET))(this, a1);
		}

		::GNIGKPBJFOO* LKLOIKJNGAC(::PNDNFPHFBMK* a1)
		{
			return ((::GNIGKPBJFOO*(*)(::PVOID, ::PNDNFPHFBMK*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_LKLOIKJNGAC_OFFSET))(this, a1);
		}

		::GNIGKPBJFOO* GLBEDOCEGKK(::System::Collections::Generic::IEnumerable_1<::OJDIPBBEIOB*>* a1)
		{
			return ((::GNIGKPBJFOO*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::OJDIPBBEIOB*>*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_GLBEDOCEGKK_OFFSET))(this, a1);
		}

		::GNIGKPBJFOO* GLBEDOCEGKK_1(::Il2CppArray<::AJCJJOCGIEL*>* a1)
		{
			return ((::GNIGKPBJFOO*(*)(::PVOID, ::Il2CppArray<::AJCJJOCGIEL*>*))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_GLBEDOCEGKK_1_OFFSET))(this, a1);
		}

		::System::String* GCFLBAKNFHP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_GCFLBAKNFHP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::OJDIPBBEIOB*>* CDIJFPNBHGG()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::OJDIPBBEIOB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIGKPBJFOO_CDIJFPNBHGG_OFFSET))(this);
		}

	};

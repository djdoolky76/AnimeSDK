#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJKBKIIFLKE.h"
#include "unitysdk/System/Object.h"
class ENDEBAMMJHJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLBMIKGMMAO_CEJBEODMBBM_OFFSET UNITYSDK_OFFSET(0xF88B750)
#define DLBMIKGMMAO_CLFPHDFCLJL_OFFSET UNITYSDK_OFFSET(0xF88B350)
#define DLBMIKGMMAO_CTOR_OFFSET UNITYSDK_OFFSET(0xF88B2F0)
#define DLBMIKGMMAO_MCKBHJNIBMJ_OFFSET UNITYSDK_OFFSET(0xF88B660)
#define DLBMIKGMMAO_MNEEAMNELKC_OFFSET UNITYSDK_OFFSET(0xF88B760)
#define DLBMIKGMMAO_ONJKDFCMPPI_OFFSET UNITYSDK_OFFSET(0xF88B620)

inline static constexpr unsigned int DLBMIKGMMAO_TypeDefinitionIndex = 60190;

	class DLBMIKGMMAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EJKBKIIFLKE>* MFGEADHPLHO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMIKGMMAO_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EJKBKIIFLKE>* ONJKDFCMPPI()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EJKBKIIFLKE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMIKGMMAO_ONJKDFCMPPI_OFFSET))(this);
		}

		::ENDEBAMMJHJ* MCKBHJNIBMJ()
		{
			return ((::ENDEBAMMJHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMIKGMMAO_MCKBHJNIBMJ_OFFSET))(this);
		}

		::System::Boolean CEJBEODMBBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMIKGMMAO_CEJBEODMBBM_OFFSET))(this);
		}

		::System::Int32 MNEEAMNELKC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMIKGMMAO_MNEEAMNELKC_OFFSET))(this);
		}

		::System::Void CLFPHDFCLJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLBMIKGMMAO_CLFPHDFCLJL_OFFSET))(this);
		}

	};

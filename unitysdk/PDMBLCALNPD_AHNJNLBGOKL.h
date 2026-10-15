#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class INKNLLODDHF_LGBJKLEOKPE;
class JLNEKELMDNJ;
class PDMBLCALNPD;
class POIONNNNCMJ;
namespace R3 { template <typename T> class Observable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define PDMBLCALNPD_AHNJNLBGOKL_CTOR_OFFSET UNITYSDK_OFFSET(0xC019E10)
#define PDMBLCALNPD_AHNJNLBGOKL_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xC019E20)

inline static constexpr unsigned int PDMBLCALNPD_AHNJNLBGOKL_TypeDefinitionIndex = 79574;

	class PDMBLCALNPD_AHNJNLBGOKL : public ::System::Object
	{
	public:
		::INKNLLODDHF_LGBJKLEOKPE* AFONFEMGHEC; // 0x10
		::BEEJHBCIGGI* ILPEEPDIPHL; // 0x18
		::System::Void _ctor(::BEEJHBCIGGI* a1, ::INKNLLODDHF_LGBJKLEOKPE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BEEJHBCIGGI*, ::INKNLLODDHF_LGBJKLEOKPE*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_AHNJNLBGOKL_CTOR_OFFSET))(this, a1, a2);
		}

		::PDMBLCALNPD* LHLALAKKKKJ(::JLNEKELMDNJ* a1, ::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>* a2, ::R3::Observable_1<::System::Boolean>* a3)
		{
			return ((::PDMBLCALNPD*(*)(::PVOID, ::JLNEKELMDNJ*, ::System::Collections::Generic::IReadOnlyList_1<::POIONNNNCMJ*>*, ::R3::Observable_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + PDMBLCALNPD_AHNJNLBGOKL_LHLALAKKKKJ_OFFSET))(this, a1, a2, a3);
		}

	};

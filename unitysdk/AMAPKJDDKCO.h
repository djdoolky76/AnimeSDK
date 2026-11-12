#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBCJHEDMHOK;
class MLEMMDNMHCG;
class PHCMIJEDENP;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define AMAPKJDDKCO_BFCFPLCLCIG_OFFSET UNITYSDK_OFFSET(0x1D6C0D90)
#define AMAPKJDDKCO_NNLJPBMDOGC_OFFSET UNITYSDK_OFFSET(0x1D6C0E60)

inline static constexpr unsigned int AMAPKJDDKCO_TypeDefinitionIndex = 42880;

	class AMAPKJDDKCO : public ::System::Object
	{
	public:
		static ::System::Boolean BFCFPLCLCIG(::PHCMIJEDENP* a1, ::CBCJHEDMHOK* a2)
		{
			return ((::System::Boolean(*)(::PHCMIJEDENP*, ::CBCJHEDMHOK*))((::PBYTE)hIl2Cpp + AMAPKJDDKCO_BFCFPLCLCIG_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>* NNLJPBMDOGC(::MLEMMDNMHCG* a1, ::CBCJHEDMHOK* a2)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PHCMIJEDENP*>*(*)(::MLEMMDNMHCG*, ::CBCJHEDMHOK*))((::PBYTE)hIl2Cpp + AMAPKJDDKCO_NNLJPBMDOGC_OFFSET))(a1, a2);
		}

	};

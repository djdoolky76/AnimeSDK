#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDIGBIBAMIJ.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NNEOINMGHPJ_CKIFIBGCCOK_OFFSET UNITYSDK_OFFSET(0x6CA310)
#define NNEOINMGHPJ_DGLHPAALBGN_OFFSET UNITYSDK_OFFSET(0x6CA2F0)
#define NNEOINMGHPJ_INGAAOKJNLB_OFFSET UNITYSDK_OFFSET(0x6CA300)

inline static constexpr unsigned int NNEOINMGHPJ_TypeDefinitionIndex = 76891;

struct alignas(4) NNEOINMGHPJ
{
	::FDIGBIBAMIJ FDEMMNCMLGD; // 0x10
	::FDIGBIBAMIJ BOKMJMOAONH; // 0x16

	::System::Void DGLHPAALBGN(::System::Action_1<::FDIGBIBAMIJ>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::FDIGBIBAMIJ>*))((::PBYTE)hIl2Cpp + NNEOINMGHPJ_DGLHPAALBGN_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void INGAAOKJNLB(::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>* IGDDCNPOGHI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int64, ::System::Object*>*))((::PBYTE)hIl2Cpp + NNEOINMGHPJ_INGAAOKJNLB_OFFSET))(this, IGDDCNPOGHI);
	}

	::System::Collections::Generic::IEnumerable_1<::FDIGBIBAMIJ>* CKIFIBGCCOK()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::FDIGBIBAMIJ>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNEOINMGHPJ_CKIFIBGCCOK_OFFSET))(this);
	}
};

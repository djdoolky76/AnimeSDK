#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FMMKHOIALPN.h"

namespace System::Collections { class IEnumerable; }

#define HCHBHFMPGCJ_DIIBJKANFIM_OFFSET UNITYSDK_OFFSET(0x1CE95C80)
#define HCHBHFMPGCJ_MMGAGFCKEMF_OFFSET UNITYSDK_OFFSET(0x1CE950C0)

inline static constexpr unsigned int HCHBHFMPGCJ_TypeDefinitionIndex = 34757;

class HCHBHFMPGCJ : public ::System::Object
{
public:
	static ::System::Boolean MMGAGFCKEMF(::FMMKHOIALPN& CLGCNKFMLCN, ::System::Collections::IEnumerable* KGGJCGPMAIH, ::System::Collections::IEnumerable* BPEGDPLGFPO)
	{
		return ((::System::Boolean(*)(::FMMKHOIALPN&, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + HCHBHFMPGCJ_MMGAGFCKEMF_OFFSET))(CLGCNKFMLCN, KGGJCGPMAIH, BPEGDPLGFPO);
	}

	static ::System::Void DIIBJKANFIM(::FMMKHOIALPN& CLGCNKFMLCN)
	{
		return ((::System::Void(*)(::FMMKHOIALPN&))((::PBYTE)hIl2Cpp + HCHBHFMPGCJ_DIIBJKANFIM_OFFSET))(CLGCNKFMLCN);
	}
};

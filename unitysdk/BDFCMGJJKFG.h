#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KMMMFMMGLAN;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System { class String; }

#define BDFCMGJJKFG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x162EA630)
#define BDFCMGJJKFG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x162EA3E0)
#define BDFCMGJJKFG_CTOR_OFFSET UNITYSDK_OFFSET(0x162EAD50)
#define BDFCMGJJKFG_EHBKEOLJINK_OFFSET UNITYSDK_OFFSET(0x162EA720)
#define BDFCMGJJKFG_GAOEIPBONJA_OFFSET UNITYSDK_OFFSET(0x162EAB10)
#define BDFCMGJJKFG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x162EA680)
#define BDFCMGJJKFG_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x162EA9D0)

inline static constexpr unsigned int BDFCMGJJKFG_TypeDefinitionIndex = 77955;

	class BDFCMGJJKFG : public ::System::Object
	{
	public:
		::System::String* EHEBAHIONLB; // 0x10
		::System::Single JJGFJNNGAGE; // 0x18
		::System::Boolean HPCDKDHNBCJ; // 0x1C
		::System::Boolean INFJLNGCLJC; // 0x1D
		::System::Byte _padding0[0x2];
		::System::Single CBBFLDBJMMA; // 0x20
		::System::Single CMJOFCBILBA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2, ::LMFOOOLDECA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::KMMMFMMGLAN* PBDNAIDEIPK(::OMNJCDDMLHI* a1)
		{
			return ((::KMMMFMMGLAN*(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_PBDNAIDEIPK_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GAOEIPBONJA(::OMNJCDDMLHI* a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_GAOEIPBONJA_OFFSET))(this, a1);
		}

		::System::Void EHBKEOLJINK(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_EHBKEOLJINK_OFFSET))(this, a1, a2);
		}

	};

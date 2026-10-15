#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class KMMMFMMGLAN;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace System { class String; }

#define BDFCMGJJKFG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x162F6EA0)
#define BDFCMGJJKFG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x162F6C50)
#define BDFCMGJJKFG_CTOR_OFFSET UNITYSDK_OFFSET(0x162F75C0)
#define BDFCMGJJKFG_EHBKEOLJINK_OFFSET UNITYSDK_OFFSET(0x162F6F90)
#define BDFCMGJJKFG_GAOEIPBONJA_OFFSET UNITYSDK_OFFSET(0x162F7380)
#define BDFCMGJJKFG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x162F6EF0)
#define BDFCMGJJKFG_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x162F7240)

inline static constexpr unsigned int BDFCMGJJKFG_TypeDefinitionIndex = 77956;

	class BDFCMGJJKFG : public ::System::Object
	{
	public:
		::System::String* EHEBAHIONLB; // 0x10
		::System::Single CMJOFCBILBA; // 0x18
		::System::Single JJGFJNNGAGE; // 0x1C
		::System::Boolean HPCDKDHNBCJ; // 0x20
		::System::Boolean INFJLNGCLJC; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single CBBFLDBJMMA; // 0x24
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

		::System::ValueTuple GAOEIPBONJA(::OMNJCDDMLHI* a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_GAOEIPBONJA_OFFSET))(this, a1);
		}

		::System::Void EHBKEOLJINK(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + BDFCMGJJKFG_EHBKEOLJINK_OFFSET))(this, a1, a2);
		}

	};

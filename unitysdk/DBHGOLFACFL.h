#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
class FKKIAHNJCBC;
class LOLCJIIIHIM;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBHGOLFACFL_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD76D0)
#define DBHGOLFACFL_GET_PARTNERS_OFFSET UNITYSDK_OFFSET(0xDFD7600)
#define DBHGOLFACFL_LHJGHPBAMLE_OFFSET UNITYSDK_OFFSET(0xDFD7C10)
#define DBHGOLFACFL_NPBCEMBHEBC_OFFSET UNITYSDK_OFFSET(0xDFD7610)
#define DBHGOLFACFL__GET_SHOWDETAILCOMMAND_B__6_0_OFFSET UNITYSDK_OFFSET(0xDFD7D10)

inline static constexpr unsigned int DBHGOLFACFL_TypeDefinitionIndex = 79433;

	class DBHGOLFACFL : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>* _Partners_k__BackingField; // 0x10
		::LOLCJIIIHIM* MPFFGNPIDOA; // 0x18
		::CEEGMMCFCBG* EENAJHAKPBO; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::FKKIAHNJCBC*>* a1, ::LOLCJIIIHIM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FKKIAHNJCBC*>*, ::LOLCJIIIHIM*))((::PBYTE)hIl2Cpp + DBHGOLFACFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>* get_Partners()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::FKKIAHNJCBC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHGOLFACFL_GET_PARTNERS_OFFSET))(this);
		}

		::CEEGMMCFCBG* NPBCEMBHEBC()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHGOLFACFL_NPBCEMBHEBC_OFFSET))(this);
		}

		::System::Void LHJGHPBAMLE(::FKKIAHNJCBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FKKIAHNJCBC*))((::PBYTE)hIl2Cpp + DBHGOLFACFL_LHJGHPBAMLE_OFFSET))(this, a1);
		}

		::System::Void _get_ShowDetailCommand_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHGOLFACFL__GET_SHOWDETAILCOMMAND_B__6_0_OFFSET))(this);
		}

	};

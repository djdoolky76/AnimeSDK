#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
class DPEGLPPPAJJ;
class INHBMHCJJCN;
class LKJOIAFONIL;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BEFDLIAPHKI_CTOR_OFFSET UNITYSDK_OFFSET(0x16313130)
#define BEFDLIAPHKI_DGIDIEPCJLO_OFFSET UNITYSDK_OFFSET(0x16312CF0)
#define BEFDLIAPHKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16312900)
#define BEFDLIAPHKI_FMPNONLEBMI_OFFSET UNITYSDK_OFFSET(0x163129C0)
#define BEFDLIAPHKI_GIDBGJKGBNP_OFFSET UNITYSDK_OFFSET(0x16312AD0)
#define BEFDLIAPHKI_HLAIJJFDFFK_OFFSET UNITYSDK_OFFSET(0x16312B20)
#define BEFDLIAPHKI_JKPEAAJHHJK_OFFSET UNITYSDK_OFFSET(0x16312D50)
#define BEFDLIAPHKI_LLNAOFNAIAA_OFFSET UNITYSDK_OFFSET(0x16312E00)
#define BEFDLIAPHKI_MHPEAEMCLNN_OFFSET UNITYSDK_OFFSET(0x16312EC0)
#define BEFDLIAPHKI_PANOBJJMMNC_OFFSET UNITYSDK_OFFSET(0x16312F40)

inline static constexpr unsigned int BEFDLIAPHKI_TypeDefinitionIndex = 67060;

	class BEFDLIAPHKI : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HBHEJDBNGOF; // 0x10
		::System::Collections::Generic::List_1<::LKJOIAFONIL*>* JHJOELGJNIA; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_DISPOSE_OFFSET))(this);
		}

		::System::Void FMPNONLEBMI(::INHBMHCJJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_FMPNONLEBMI_OFFSET))(this, a1);
		}

		::LKJOIAFONIL* DGIDIEPCJLO()
		{
			return ((::LKJOIAFONIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_DGIDIEPCJLO_OFFSET))(this);
		}

		::System::Void JKPEAAJHHJK(::INHBMHCJJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_JKPEAAJHHJK_OFFSET))(this, a1);
		}

		::System::Void LLNAOFNAIAA(::AOBICCEGAMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOBICCEGAMM*))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_LLNAOFNAIAA_OFFSET))(this, a1);
		}

		::System::Void MHPEAEMCLNN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_MHPEAEMCLNN_OFFSET))(this, a1);
		}

		::LKJOIAFONIL* PANOBJJMMNC()
		{
			return ((::LKJOIAFONIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_PANOBJJMMNC_OFFSET))(this);
		}

		::DPEGLPPPAJJ* GIDBGJKGBNP(::INHBMHCJJCN* a1)
		{
			return ((::DPEGLPPPAJJ*(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_GIDBGJKGBNP_OFFSET))(this, a1);
		}

		::System::Void HLAIJJFDFFK(::DPEGLPPPAJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPEGLPPPAJJ*))((::PBYTE)hIl2Cpp + BEFDLIAPHKI_HLAIJJFDFFK_OFFSET))(this, a1);
		}

	};

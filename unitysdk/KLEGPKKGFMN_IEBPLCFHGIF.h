#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBJLBMOOJGM;
namespace System { class Object; }

#define KLEGPKKGFMN_IEBPLCFHGIF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD70010)
#define KLEGPKKGFMN_IEBPLCFHGIF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD70900)
#define KLEGPKKGFMN_IEBPLCFHGIF_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0xBD70850)
#define KLEGPKKGFMN_IEBPLCFHGIF_HICFBGJFAFH_OFFSET UNITYSDK_OFFSET(0xBD705C0)
#define KLEGPKKGFMN_IEBPLCFHGIF_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xBD70800)
#define KLEGPKKGFMN_IEBPLCFHGIF_PPCHOKBEHJJ_OFFSET UNITYSDK_OFFSET(0xBD708B0)

inline static constexpr unsigned int KLEGPKKGFMN_IEBPLCFHGIF_TypeDefinitionIndex = 62519;

	class KLEGPKKGFMN_IEBPLCFHGIF : public ::System::Object
	{
	public:
		::System::Object* AIKAPJELHNK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGPKKGFMN_IEBPLCFHGIF_CTOR_OFFSET))(this);
		}

		::System::Object* MNGGAOFNGIP(::LBJLBMOOJGM* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + KLEGPKKGFMN_IEBPLCFHGIF_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void FHAPPCADGCE(::System::Object* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + KLEGPKKGFMN_IEBPLCFHGIF_FHAPPCADGCE_OFFSET))(this, a1, a2);
		}

		::System::Void PPCHOKBEHJJ(::LBJLBMOOJGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + KLEGPKKGFMN_IEBPLCFHGIF_PPCHOKBEHJJ_OFFSET))(this, a1);
		}

		::System::Void HICFBGJFAFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGPKKGFMN_IEBPLCFHGIF_HICFBGJFAFH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEGPKKGFMN_IEBPLCFHGIF_DISPOSE_OFFSET))(this);
		}

	};

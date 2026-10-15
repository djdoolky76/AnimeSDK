#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJOJEMIICEF;
class ONNDEAJCFFF;
namespace System { class String; }

#define EHDCFBBIJIM_AALNKDACBBA_OFFSET UNITYSDK_OFFSET(0x154A3E30)
#define EHDCFBBIJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x154A3F10)
#define EHDCFBBIJIM_GAGLFGLKEOJ_OFFSET UNITYSDK_OFFSET(0x154A3A70)
#define EHDCFBBIJIM_GIEKCGIINAG_OFFSET UNITYSDK_OFFSET(0x154A3C70)
#define EHDCFBBIJIM_LFOODCDGFKH_OFFSET UNITYSDK_OFFSET(0x154A3B70)
#define EHDCFBBIJIM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x154A3A10)
#define EHDCFBBIJIM_PMAPIEMDKKA_OFFSET UNITYSDK_OFFSET(0x154A3D50)

inline static constexpr unsigned int EHDCFBBIJIM_TypeDefinitionIndex = 77555;

	class EHDCFBBIJIM : public ::System::Object
	{
	public:
		::ONNDEAJCFFF* IGHAHBNLIJA; // 0x10
		::DJOJEMIICEF* EEFMDEHLLFI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::DJOJEMIICEF* a1, ::ONNDEAJCFFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DJOJEMIICEF*, ::ONNDEAJCFFF*))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::String* GAGLFGLKEOJ(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_GAGLFGLKEOJ_OFFSET))(this, a1);
		}

		::System::Void LFOODCDGFKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_LFOODCDGFKH_OFFSET))(this, a1);
		}

		::System::Void GIEKCGIINAG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_GIEKCGIINAG_OFFSET))(this, a1);
		}

		::System::Void PMAPIEMDKKA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_PMAPIEMDKKA_OFFSET))(this, a1);
		}

		::System::Void AALNKDACBBA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EHDCFBBIJIM_AALNKDACBBA_OFFSET))(this, a1);
		}

	};

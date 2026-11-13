#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJOJEMIICEF;
class ONNDEAJCFFF;
namespace System { class String; }

#define EHDCFBBIJIM_AALNKDACBBA_OFFSET UNITYSDK_OFFSET(0x18BC8BD0)
#define EHDCFBBIJIM_CTOR_OFFSET UNITYSDK_OFFSET(0x18BC8CB0)
#define EHDCFBBIJIM_GAGLFGLKEOJ_OFFSET UNITYSDK_OFFSET(0x18BC8810)
#define EHDCFBBIJIM_GIEKCGIINAG_OFFSET UNITYSDK_OFFSET(0x18BC8A10)
#define EHDCFBBIJIM_LFOODCDGFKH_OFFSET UNITYSDK_OFFSET(0x18BC8910)
#define EHDCFBBIJIM_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x18BC87B0)
#define EHDCFBBIJIM_PMAPIEMDKKA_OFFSET UNITYSDK_OFFSET(0x18BC8AF0)

inline static constexpr unsigned int EHDCFBBIJIM_TypeDefinitionIndex = 80289;

	class EHDCFBBIJIM : public ::System::Object
	{
	public:
		::DJOJEMIICEF* EEFMDEHLLFI; // 0x10
		::ONNDEAJCFFF* IGHAHBNLIJA; // 0x18
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

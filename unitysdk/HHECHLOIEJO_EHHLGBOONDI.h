#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHECHLOIEJO_EHHLGBOONDI;

#define HHECHLOIEJO_EHHLGBOONDI_CTOR_OFFSET UNITYSDK_OFFSET(0x16C15DD0)
#define HHECHLOIEJO_EHHLGBOONDI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16C0D460)
#define HHECHLOIEJO_EHHLGBOONDI_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x16C16E50)
#define HHECHLOIEJO_EHHLGBOONDI_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x16C16CB0)
#define HHECHLOIEJO_EHHLGBOONDI_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x16C10800)

inline static constexpr unsigned int HHECHLOIEJO_EHHLGBOONDI_TypeDefinitionIndex = 58371;

	class HHECHLOIEJO_EHHLGBOONDI : public ::System::Object
	{
	public:
		::System::UInt64 JCOHIMFFMKO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_EHHLGBOONDI_CTOR_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::HHECHLOIEJO_EHHLGBOONDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HHECHLOIEJO_EHHLGBOONDI*))((::PBYTE)hIl2Cpp + HHECHLOIEJO_EHHLGBOONDI_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHECHLOIEJO_EHHLGBOONDI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HHECHLOIEJO_EHHLGBOONDI_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HHECHLOIEJO_EHHLGBOONDI_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

	};

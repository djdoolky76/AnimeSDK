#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDBLIDNKEAD;
class EMILHGPLJHC;
class HGCEOEHGPPE;
namespace System { class Action; }
namespace System { class String; }

#define DDBLIDNKEAD_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0xE25C1D0)
#define DDBLIDNKEAD_CTOR_OFFSET UNITYSDK_OFFSET(0xE25C1C0)
#define DDBLIDNKEAD_GET_HASHEVENT_OFFSET UNITYSDK_OFFSET(0xE25C190)
#define DDBLIDNKEAD_GET_NAME_OFFSET UNITYSDK_OFFSET(0xE25C1A0)
#define DDBLIDNKEAD_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xE25C1B0)
#define DDBLIDNKEAD_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0xE25C2F0)
#define DDBLIDNKEAD_KPFMLADHOKE_OFFSET UNITYSDK_OFFSET(0xE25C410)
#define DDBLIDNKEAD_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0xE25C500)

inline static constexpr unsigned int DDBLIDNKEAD_TypeDefinitionIndex = 59604;

	class DDBLIDNKEAD : public ::System::Object
	{
	public:
		::System::Action* PEIHJAEIGHK; // 0x10
		::System::String* GIDAEFPOGHI; // 0x18
		::EMILHGPLJHC* MOBANGODBGE; // 0x20
		::System::Void _ctor(::System::String* a1, ::EMILHGPLJHC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::EMILHGPLJHC*))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HashEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_GET_HASHEVENT_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_GET_NAME_OFFSET))(this);
		}

		::HGCEOEHGPPE* get_Progress()
		{
			return ((::HGCEOEHGPPE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_GET_PROGRESS_OFFSET))(this);
		}

		static ::DDBLIDNKEAD* ALJJDGONFDD(::DDBLIDNKEAD* a1, ::System::Action* a2)
		{
			return ((::DDBLIDNKEAD*(*)(::DDBLIDNKEAD*, ::System::Action*))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_ALJJDGONFDD_OFFSET))(a1, a2);
		}

		static ::DDBLIDNKEAD* GIAOOPPHODF(::DDBLIDNKEAD* a1, ::System::Action* a2)
		{
			return ((::DDBLIDNKEAD*(*)(::DDBLIDNKEAD*, ::System::Action*))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_GIAOOPPHODF_OFFSET))(a1, a2);
		}

		::System::Void KPFMLADHOKE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_KPFMLADHOKE_OFFSET))(this, a1);
		}

		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBLIDNKEAD_MBABPIHGAJN_OFFSET))(this);
		}

	};

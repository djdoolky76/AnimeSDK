#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNDKPCNOEJB;
namespace System { class Action; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CGJNFIJNHIG_AEKOJHIIEKM_OFFSET UNITYSDK_OFFSET(0xCC8A1F0)
#define CGJNFIJNHIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC8A3C0)
#define CGJNFIJNHIG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xCC8A330)

inline static constexpr unsigned int CGJNFIJNHIG_TypeDefinitionIndex = 76064;

	class CGJNFIJNHIG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>* EPKIGJMDIED; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJNFIJNHIG_CTOR_OFFSET))(this);
		}

		::System::Void AEKOJHIIEKM(::CNDKPCNOEJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNDKPCNOEJB*))((::PBYTE)hIl2Cpp + CGJNFIJNHIG_AEKOJHIIEKM_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJNFIJNHIG_PJPFIHFAHGO_OFFSET))(this);
		}

	};

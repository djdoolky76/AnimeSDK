#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AkPositionArray;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define JIHMLEADCGN_BGHBHFHPCKL_OFFSET UNITYSDK_OFFSET(0x14A7EEE0)
#define JIHMLEADCGN_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14A7F0B0)
#define JIHMLEADCGN_FFKJDACAIIP_OFFSET UNITYSDK_OFFSET(0x14A7EBB0)
#define JIHMLEADCGN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14A7E840)
#define JIHMLEADCGN_FNNNNOBKNPM_OFFSET UNITYSDK_OFFSET(0x14A7F2E0)
#define JIHMLEADCGN_LMBJEGGABFJ_OFFSET UNITYSDK_OFFSET(0x14A7EF90)
#define JIHMLEADCGN_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x14A7F2C0)
#define JIHMLEADCGN_POLISH_OFFSET UNITYSDK_OFFSET(0x14A7E8E0)
#define JIHMLEADCGN_RECYCLE_OFFSET UNITYSDK_OFFSET(0x14A7E9C0)
#define JIHMLEADCGN__CTOR_OFFSET UNITYSDK_OFFSET(0x14A7E730)

inline static constexpr unsigned int JIHMLEADCGN_TypeDefinitionIndex = 49502;

class JIHMLEADCGN : public ::System::Object
{
public:
	// static const ::System::Int32 FNEIOAPLAEP = 0x40; // 0x0
	::UnityEngine::GameObject* CMNAMGHOIBE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Vector3>* DKKJKKFNIJH; // 0x18
	::AkPositionArray* FFKPFOLIDGI; // 0x20
	::System::Boolean HEPKAHHBFMF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHMLEADCGN__CTOR_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHMLEADCGN_FINALIZE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHMLEADCGN_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHMLEADCGN_RECYCLE_OFFSET))(this);
	}

	::System::Void FFKJDACAIIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHMLEADCGN_FFKJDACAIIP_OFFSET))(this);
	}

	::System::Boolean BGHBHFHPCKL(::System::Int32 HLJEFIIDMFA, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JIHMLEADCGN_BGHBHFHPCKL_OFFSET))(this, HLJEFIIDMFA, OHOGDOMNHNK);
	}

	::System::Void LMBJEGGABFJ(::System::Int32 HLJEFIIDMFA, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JIHMLEADCGN_LMBJEGGABFJ_OFFSET))(this, HLJEFIIDMFA, OHOGDOMNHNK);
	}

	static ::JIHMLEADCGN* COKNIICCODC(::System::String* OOONELGGOKM)
	{
		return ((::JIHMLEADCGN*(*)(::System::String*))((::PBYTE)hIl2Cpp + JIHMLEADCGN_COKNIICCODC_OFFSET))(OOONELGGOKM);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIHMLEADCGN_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Boolean FNNNNOBKNPM(::System::Int32 HLJEFIIDMFA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIHMLEADCGN_FNNNNOBKNPM_OFFSET))(this, HLJEFIIDMFA);
	}
};

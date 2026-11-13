#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define PHNPAACLNNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9B87E0)
#define PHNPAACLNNF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x1A9B8410)
#define PHNPAACLNNF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x1A9B83D0)
#define PHNPAACLNNF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x1A9B8780)
#define PHNPAACLNNF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x1A9B8490)
#define PHNPAACLNNF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x1A9B8630)
#define PHNPAACLNNF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x1A9B8450)

inline static constexpr unsigned int PHNPAACLNNF_TypeDefinitionIndex = 61775;

	class PHNPAACLNNF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPAACLNNF_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPAACLNNF_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPAACLNNF_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPAACLNNF_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PHNPAACLNNF_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHNPAACLNNF_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PHNPAACLNNF_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};

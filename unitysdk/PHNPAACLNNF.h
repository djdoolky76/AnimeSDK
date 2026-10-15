#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define PHNPAACLNNF_CTOR_OFFSET UNITYSDK_OFFSET(0xC2569F0)
#define PHNPAACLNNF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xC256650)
#define PHNPAACLNNF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xC256610)
#define PHNPAACLNNF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xC256990)
#define PHNPAACLNNF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xC2566D0)
#define PHNPAACLNNF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xC256840)
#define PHNPAACLNNF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xC256690)

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

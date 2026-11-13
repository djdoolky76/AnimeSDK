#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Action; }
namespace System { class String; }

#define KHIFMPGFGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x19793ED0)
#define KHIFMPGFGCJ_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x19793F20)
#define KHIFMPGFGCJ_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x19793EE0)
#define KHIFMPGFGCJ_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x197941D0)
#define KHIFMPGFGCJ_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x19794130)
#define KHIFMPGFGCJ_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x19794190)
#define KHIFMPGFGCJ_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x19794060)
#define KHIFMPGFGCJ_OLENGDCIONA_OFFSET UNITYSDK_OFFSET(0x19794020)

inline static constexpr unsigned int KHIFMPGFGCJ_TypeDefinitionIndex = 61771;

	class KHIFMPGFGCJ : public ::System::Object
	{
	public:
		::RPG::Client::UIController* JONJFNGDLKI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::String* OLENGDCIONA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHIFMPGFGCJ_OLENGDCIONA_OFFSET))(this);
		}

	};

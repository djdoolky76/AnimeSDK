#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPAEHGLKLMF;
namespace System { class Action; }

#define JPAEHGLKLMF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB2A8920)
#define JPAEHGLKLMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A8910)
#define JPAEHGLKLMF_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0xB2A89A0)
#define JPAEHGLKLMF_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0xB2A8960)
#define JPAEHGLKLMF_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0xB2A8BC0)
#define JPAEHGLKLMF_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0xB2A8B20)
#define JPAEHGLKLMF_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0xB2A8B80)
#define JPAEHGLKLMF_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0xB2A8A60)

inline static constexpr unsigned int JPAEHGLKLMF_TypeDefinitionIndex = 60484;

	class JPAEHGLKLMF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_CTOR_OFFSET))(this);
		}

		static ::JPAEHGLKLMF* BPLPBPMEODA()
		{
			return ((::JPAEHGLKLMF*(*)())((::PBYTE)hIl2Cpp + JPAEHGLKLMF_BPLPBPMEODA_OFFSET))();
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JPAEHGLKLMF_LAHEAEFEFIA_OFFSET))(this, a1);
		}

	};

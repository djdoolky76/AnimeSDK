#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define IFJGKLHFEAB_BFJAOKCBEBN_OFFSET UNITYSDK_OFFSET(0x15F1CF10)
#define IFJGKLHFEAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1D120)
#define IFJGKLHFEAB_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0x15F1CF60)
#define IFJGKLHFEAB_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x15F1CAA0)
#define IFJGKLHFEAB_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x15F1CA60)
#define IFJGKLHFEAB_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x15F1CE50)
#define IFJGKLHFEAB_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x15F1CB20)
#define IFJGKLHFEAB_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x15F1CD90)
#define IFJGKLHFEAB_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x15F1CAE0)
#define IFJGKLHFEAB___ONUIANIMATIONEVENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x15F1D130)

	class IFJGKLHFEAB : public ::System::Object
	{
	public:
		::System::Action* GHHNJGEEOOB; // 0x10
		::System::Action* AIJBJKELPLL; // 0x18
		::System::Boolean FPLKFGLFOHF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_CTOR_OFFSET))(this);
		}

		::System::Boolean GJKNNAANGFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_GJKNNAANGFA_OFFSET))(this);
		}

		::System::Void GHKIPINMDNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_GHKIPINMDNE_OFFSET))(this);
		}

		::System::Void NONJDKKDDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_NONJDKKDDLE_OFFSET))(this);
		}

		::System::Void MCKGCIOFEDI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_MCKGCIOFEDI_OFFSET))(this, a1);
		}

		::System::Void NNAGLJCMMGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_NNAGLJCMMGD_OFFSET))(this);
		}

		::System::Void LAHEAEFEFIA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_LAHEAEFEFIA_OFFSET))(this, a1);
		}

		::System::Void BFJAOKCBEBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_BFJAOKCBEBN_OFFSET))(this, a1);
		}

		::System::Void FKEBMDNHDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFJGKLHFEAB_FKEBMDNHDFK_OFFSET))(this, a1);
		}

		::System::Void __OnUIAnimationEvent_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJGKLHFEAB___ONUIANIMATIONEVENT_B__7_0_OFFSET))(this);
		}

	};

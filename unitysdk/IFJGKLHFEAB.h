#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define IFJGKLHFEAB_BFJAOKCBEBN_OFFSET UNITYSDK_OFFSET(0x1BC18FF0)
#define IFJGKLHFEAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC19200)
#define IFJGKLHFEAB_FKEBMDNHDFK_OFFSET UNITYSDK_OFFSET(0x1BC19040)
#define IFJGKLHFEAB_GHKIPINMDNE_OFFSET UNITYSDK_OFFSET(0x1BC18B80)
#define IFJGKLHFEAB_GJKNNAANGFA_OFFSET UNITYSDK_OFFSET(0x1BC18B40)
#define IFJGKLHFEAB_LAHEAEFEFIA_OFFSET UNITYSDK_OFFSET(0x1BC18F30)
#define IFJGKLHFEAB_MCKGCIOFEDI_OFFSET UNITYSDK_OFFSET(0x1BC18C00)
#define IFJGKLHFEAB_NNAGLJCMMGD_OFFSET UNITYSDK_OFFSET(0x1BC18E70)
#define IFJGKLHFEAB_NONJDKKDDLE_OFFSET UNITYSDK_OFFSET(0x1BC18BC0)
#define IFJGKLHFEAB___ONUIANIMATIONEVENT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BC19210)

inline static constexpr unsigned int IFJGKLHFEAB_TypeDefinitionIndex = 61765;

	class IFJGKLHFEAB : public ::System::Object
	{
	public:
		::System::Action* AIJBJKELPLL; // 0x10
		::System::Action* GHHNJGEEOOB; // 0x18
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

#pragma once
#include "unitysdk/unitysdk.h"
class GOOGNAIABBN;
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELLLEIOFNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15526BA0)
#define ELLLEIOFNIJ_IHFEJMCDBHE_OFFSET UNITYSDK_OFFSET(0x15526C20)
#define ELLLEIOFNIJ_JBHPCEHDOJB_OFFSET UNITYSDK_OFFSET(0x15527540)
#define ELLLEIOFNIJ_MNONPFEGMPH_OFFSET UNITYSDK_OFFSET(0x155270D0)
#define ELLLEIOFNIJ_OBOHLCENGHN_OFFSET UNITYSDK_OFFSET(0x15527280)
#define ELLLEIOFNIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15526BD0)

inline static constexpr unsigned int ELLLEIOFNIJ_TypeDefinitionIndex = 58195;

	class ELLLEIOFNIJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GOOGNAIABBN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GOOGNAIABBN*))((::PBYTE)hIl2Cpp + ELLLEIOFNIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLLEIOFNIJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void IHFEJMCDBHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLLEIOFNIJ_IHFEJMCDBHE_OFFSET))(this);
		}

		::System::String* JBHPCEHDOJB(::System::Collections::Generic::HashSet_1<::System::Int32>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ELLLEIOFNIJ_JBHPCEHDOJB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* MNONPFEGMPH(::IOGNBKGNPFD* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + ELLLEIOFNIJ_MNONPFEGMPH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Entitas::IEntity*>* OBOHLCENGHN(::IOGNBKGNPFD* a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::Entitas::IEntity*>*(*)(::PVOID, ::IOGNBKGNPFD*, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ELLLEIOFNIJ_OBOHLCENGHN_OFFSET))(this, a1, a2);
		}

	};

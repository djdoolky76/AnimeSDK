#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMDAIKOHCAE;
namespace RPG::GameCore { class AIPathwayInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNOKFPIKEFH_CTOR_OFFSET UNITYSDK_OFFSET(0x16AA45E0)
#define GNOKFPIKEFH_PPKPOMGIKEP_OFFSET UNITYSDK_OFFSET(0x16AA4530)

inline static constexpr unsigned int GNOKFPIKEFH_TypeDefinitionIndex = 58787;

	class GNOKFPIKEFH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Il2CppArray<::System::UInt32>*>* IOOALIOHDAK; // 0x10
		::RPG::GameCore::AIPathwayInfo* CIKPBGDIABO; // 0x18
		::System::Collections::Generic::List_1<::JMDAIKOHCAE*>* AJIKDOPMGMA; // 0x20
		::System::Int32 KBEFMIKJHLJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOKFPIKEFH_CTOR_OFFSET))(this);
		}

		::System::Void PPKPOMGIKEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOKFPIKEFH_PPKPOMGIKEP_OFFSET))(this);
		}

	};

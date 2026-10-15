#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHMBINMCDGN.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IJFIHJJPHNA;
class PLAJONHLDJN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KAAMFILLIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C709E70)
#define KAAMFILLIND_IBFCFOLIHFN_OFFSET UNITYSDK_OFFSET(0x1C709F00)

inline static constexpr unsigned int KAAMFILLIND_TypeDefinitionIndex = 36399;

	class KAAMFILLIND : public ::EHMBINMCDGN
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NNHNFKAGIMK; // 0x48
		::System::Boolean IDFGNIJBMPB; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single BFEPBJHPLKL; // 0x54
		::System::Int32 JFICKDBIECD; // 0x58
		::System::Void _ctor(::PLAJONHLDJN* a1, ::IJFIHJJPHNA* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Il2CppArray<::RPG::GameCore::FixPoint>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::IJFIHJJPHNA*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KAAMFILLIND_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IBFCFOLIHFN(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + KAAMFILLIND_IBFCFOLIHFN_OFFSET))(this, a1);
		}

	};

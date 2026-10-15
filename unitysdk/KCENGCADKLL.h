#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KCENGCADKLL;

#define KCENGCADKLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D066350)
#define KCENGCADKLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0660C0)

inline static constexpr unsigned int KCENGCADKLL_TypeDefinitionIndex = 11507;

	class KCENGCADKLL : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MMNICKEOGNN; // 0x10
		::Il2CppArray<::System::UInt32>* BDJIGCAEKBE; // 0x18
		::Il2CppArray<::System::UInt32>* JMCDCEGBJNJ; // 0x20
		::Il2CppArray<::System::UInt32>* JHGNLBADBAE; // 0x28
		::Il2CppArray<::System::UInt32>* BKABFEJOAKM; // 0x30
		::System::UInt32 NHLFOCNBABI; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCENGCADKLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KCENGCADKLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KCENGCADKLL*))((::PBYTE)hIl2Cpp + KCENGCADKLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

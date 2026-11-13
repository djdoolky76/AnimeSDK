#pragma once
#include "unitysdk/unitysdk.h"
class JIFJCBNMOHA;
namespace RPG::GameCore { class GroupInitMemberEntityAnimParameter; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJINMHEDJEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A78D840)
#define NJINMHEDJEJ_MFPDHJLPHFA_OFFSET UNITYSDK_OFFSET(0x1A78DC60)
#define NJINMHEDJEJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A78D870)

inline static constexpr unsigned int NJINMHEDJEJ_TypeDefinitionIndex = 54073;

	class NJINMHEDJEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GroupInitMemberEntityAnimParameter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GroupInitMemberEntityAnimParameter*))((::PBYTE)hIl2Cpp + NJINMHEDJEJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJINMHEDJEJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::JIFJCBNMOHA*>* MFPDHJLPHFA()
		{
			return ((::System::Collections::Generic::List_1<::JIFJCBNMOHA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJINMHEDJEJ_MFPDHJLPHFA_OFFSET))(this);
		}

	};

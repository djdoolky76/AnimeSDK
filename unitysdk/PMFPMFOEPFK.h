#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JIECLEBBJBK.h"
namespace System { class String; }

#define PMFPMFOEPFK_CFBADILAGGC_OFFSET UNITYSDK_OFFSET(0xC31C430)
#define PMFPMFOEPFK_FGKCNFPEPGM_OFFSET UNITYSDK_OFFSET(0xC31C800)
#define PMFPMFOEPFK_FGOMMMPIELH_1_OFFSET UNITYSDK_OFFSET(0xC31C860)
#define PMFPMFOEPFK_FGOMMMPIELH_OFFSET UNITYSDK_OFFSET(0xC31C700)
#define PMFPMFOEPFK_OBCIPGOBABE_OFFSET UNITYSDK_OFFSET(0xC31C4F0)

	class PMFPMFOEPFK : public ::System::Object
	{
	public:
		static ::JIECLEBBJBK CFBADILAGGC(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::JIECLEBBJBK(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PMFPMFOEPFK_CFBADILAGGC_OFFSET))(a1);
		}

		static ::JIECLEBBJBK OBCIPGOBABE(::System::String* a1)
		{
			return ((::JIECLEBBJBK(*)(::System::String*))((::PBYTE)hIl2Cpp + PMFPMFOEPFK_OBCIPGOBABE_OFFSET))(a1);
		}

		static ::System::String* FGOMMMPIELH(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + PMFPMFOEPFK_FGOMMMPIELH_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FGKCNFPEPGM(::JIECLEBBJBK a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::JIECLEBBJBK))((::PBYTE)hIl2Cpp + PMFPMFOEPFK_FGKCNFPEPGM_OFFSET))(a1);
		}

		static ::System::String* FGOMMMPIELH_1(::JIECLEBBJBK a1)
		{
			return ((::System::String*(*)(::JIECLEBBJBK))((::PBYTE)hIl2Cpp + PMFPMFOEPFK_FGOMMMPIELH_1_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALNFHFDBDCH.h"
class JBGMDJBCHFO;

#define JPJGEJDOBGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD681F0)
#define JPJGEJDOBGD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DD68220)

	class JPJGEJDOBGD : public ::ALNFHFDBDCH
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::JBGMDJBCHFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::JBGMDJBCHFO*))((::PBYTE)hIl2Cpp + JPJGEJDOBGD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Single a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + JPJGEJDOBGD_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4);
		}

	};

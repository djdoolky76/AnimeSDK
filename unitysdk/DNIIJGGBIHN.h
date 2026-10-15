#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALNFHFDBDCH.h"
class JBGMDJBCHFO;

#define DNIIJGGBIHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD37840)
#define DNIIJGGBIHN_GDNFNCJPDKD_OFFSET UNITYSDK_OFFSET(0x1DD37810)
#define DNIIJGGBIHN_ILJANLIPIKB_OFFSET UNITYSDK_OFFSET(0x1DD37820)
#define DNIIJGGBIHN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DD378A0)

inline static constexpr unsigned int DNIIJGGBIHN_TypeDefinitionIndex = 6275;

	class DNIIJGGBIHN : public ::ALNFHFDBDCH
	{
	public:
		::Il2CppArray<::System::Single>* BPGHHIJLLEI; // 0x28
		::System::Single NDEAPGAEOPK; // 0x30
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::JBGMDJBCHFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::JBGMDJBCHFO*))((::PBYTE)hIl2Cpp + DNIIJGGBIHN_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GDNFNCJPDKD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIIJGGBIHN_GDNFNCJPDKD_OFFSET))(this);
		}

		::System::Void ILJANLIPIKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNIIJGGBIHN_ILJANLIPIKB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Single a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DNIIJGGBIHN_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4);
		}

	};

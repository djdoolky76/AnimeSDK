#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALNFHFDBDCH.h"
class JBGMDJBCHFO;

#define KFEAGOPABNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3D0B0)
#define KFEAGOPABNP_GDNFNCJPDKD_OFFSET UNITYSDK_OFFSET(0x1DD3D070)
#define KFEAGOPABNP_ILJANLIPIKB_OFFSET UNITYSDK_OFFSET(0x1DD3D080)
#define KFEAGOPABNP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DD3D170)

inline static constexpr unsigned int KFEAGOPABNP_TypeDefinitionIndex = 6276;

	class KFEAGOPABNP : public ::ALNFHFDBDCH
	{
	public:
		::Il2CppArray<::System::Single>* GDIGODBMPJJ; // 0x28
		::Il2CppArray<::System::Single>* AFBJJJBHANK; // 0x30
		::Il2CppArray<::System::Single>* BNEOJNKNHDG; // 0x38
		::Il2CppArray<::System::Single>* BPGHHIJLLEI; // 0x40
		::Il2CppArray<::System::Single>* OHJIHLKPGEB; // 0x48
		::System::Single NDEAPGAEOPK; // 0x50
		::System::Single BNMJMAIKOAA; // 0x54
		::System::Void _ctor(::System::Int32 a1, ::System::Single a2, ::JBGMDJBCHFO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::JBGMDJBCHFO*))((::PBYTE)hIl2Cpp + KFEAGOPABNP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GDNFNCJPDKD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEAGOPABNP_GDNFNCJPDKD_OFFSET))(this);
		}

		::System::Void ILJANLIPIKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFEAGOPABNP_ILJANLIPIKB_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::Il2CppArray<::System::Single>* a2, ::System::Single a3, ::Il2CppArray<::System::Single>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::System::Single>*, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + KFEAGOPABNP_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3, a4);
		}

	};

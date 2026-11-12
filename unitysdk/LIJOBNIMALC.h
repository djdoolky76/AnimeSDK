#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKFDNGOHNPC;

#define LIJOBNIMALC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB510)
#define LIJOBNIMALC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DABB520)
#define LIJOBNIMALC_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x1DABB950)
#define LIJOBNIMALC_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1DABB960)
#define LIJOBNIMALC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DABB610)
#define LIJOBNIMALC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DABB700)

inline static constexpr unsigned int LIJOBNIMALC_TypeDefinitionIndex = 43171;

	class LIJOBNIMALC : public ::System::Object
	{
	public:
		::Il2CppArray<::CKFDNGOHNPC*>* OBCHNKJCPCI; // 0x10
		::System::Boolean NHHALCBIMOF; // 0x18
		::System::Boolean PIPLLENMLIM; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 FFNBLDFFMCN; // 0x1C
		::System::Void _ctor(::Il2CppArray<::CKFDNGOHNPC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::CKFDNGOHNPC*>*))((::PBYTE)hIl2Cpp + LIJOBNIMALC_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOBNIMALC_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOBNIMALC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIJOBNIMALC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOBNIMALC_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJOBNIMALC_GCCAABJLGIG_OFFSET))(this);
		}

	};

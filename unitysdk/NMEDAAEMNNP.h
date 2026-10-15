#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDPCOMKMKJ;

#define NMEDAAEMNNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C972920)
#define NMEDAAEMNNP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C972930)
#define NMEDAAEMNNP_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x1C972D60)
#define NMEDAAEMNNP_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1C972D70)
#define NMEDAAEMNNP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C972A20)
#define NMEDAAEMNNP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C972B10)

	class NMEDAAEMNNP : public ::System::Object
	{
	public:
		::Il2CppArray<::KIDPCOMKMKJ*>* OBCHNKJCPCI; // 0x10
		::System::Int32 FFNBLDFFMCN; // 0x18
		::System::Boolean NHHALCBIMOF; // 0x1C
		::System::Boolean PIPLLENMLIM; // 0x1D
		::System::Void _ctor(::Il2CppArray<::KIDPCOMKMKJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::KIDPCOMKMKJ*>*))((::PBYTE)hIl2Cpp + NMEDAAEMNNP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEDAAEMNNP_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEDAAEMNNP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMEDAAEMNNP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEDAAEMNNP_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEDAAEMNNP_GCCAABJLGIG_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHLDHMFKOCP;

#define IKNAEDLKKKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E940)
#define IKNAEDLKKKE_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x1DD3E920)
#define IKNAEDLKKKE_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1DD3E930)
#define IKNAEDLKKKE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DD3E880)
#define IKNAEDLKKKE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DD3E8C0)

inline static constexpr unsigned int IKNAEDLKKKE_TypeDefinitionIndex = 44041;

	class IKNAEDLKKKE : public ::System::Object
	{
	public:
		::KHLDHMFKOCP* FLMODBLFAGD; // 0x10
		::System::Boolean NHHALCBIMOF; // 0x18
		::System::Boolean PIPLLENMLIM; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAEDLKKKE_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAEDLKKKE_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IKNAEDLKKKE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAEDLKKKE_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNAEDLKKKE_GCCAABJLGIG_OFFSET))(this);
		}

	};

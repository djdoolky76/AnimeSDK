#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class HJNDPHEDAGM;

#define CKFDNGOHNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9E4210)
#define CKFDNGOHNPC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C9E4070)
#define CKFDNGOHNPC_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x1C9E4150)
#define CKFDNGOHNPC_FNLDKPJHDOO_OFFSET UNITYSDK_OFFSET(0x1C9E41C0)
#define CKFDNGOHNPC_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x1C9E4160)
#define CKFDNGOHNPC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9E40B0)
#define CKFDNGOHNPC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C9E40F0)
#define CKFDNGOHNPC_PIIBNJGPLLO_OFFSET UNITYSDK_OFFSET(0x1C9E4170)

inline static constexpr unsigned int CKFDNGOHNPC_TypeDefinitionIndex = 42195;

	class CKFDNGOHNPC : public ::System::Object
	{
	public:
		::System::Boolean NHHALCBIMOF; // 0x10
		::System::Boolean PIPLLENMLIM; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_GCCAABJLGIG_OFFSET))(this);
		}

		::FDPALAEIHPB* PIIBNJGPLLO()
		{
			return ((::FDPALAEIHPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_PIIBNJGPLLO_OFFSET))(this);
		}

		::HJNDPHEDAGM* FNLDKPJHDOO()
		{
			return ((::HJNDPHEDAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFDNGOHNPC_FNLDKPJHDOO_OFFSET))(this);
		}

	};

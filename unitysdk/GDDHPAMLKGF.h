#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFHADNIAOAD;
class GDDHPAMLKGF;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define GDDHPAMLKGF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19ED1170)
#define GDDHPAMLKGF_CTOR_OFFSET UNITYSDK_OFFSET(0x19ED1210)
#define GDDHPAMLKGF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19ED1220)

inline static constexpr unsigned int GDDHPAMLKGF_TypeDefinitionIndex = 78086;

	class GDDHPAMLKGF : public ::System::Object
	{
	public:
		::MFKLCJHKNBK* FKINCGODJEP; // 0x10
		::KBLELMJDBEA* PDENFEFCAGN; // 0x18
		::DFHADNIAOAD* CBIGPGKJAEI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDHPAMLKGF_CTOR_OFFSET))(this);
		}

		static ::GDDHPAMLKGF* BPLPBPMEODA(::MFKLCJHKNBK* a1, ::KBLELMJDBEA* a2)
		{
			return ((::GDDHPAMLKGF*(*)(::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + GDDHPAMLKGF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDHPAMLKGF_EXECUTE_OFFSET))(this);
		}

	};

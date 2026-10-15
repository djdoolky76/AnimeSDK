#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOPMBGADNJD;
class GJHNDAONNGP;

#define GFLCCEMCBGN_CTOR_OFFSET UNITYSDK_OFFSET(0x159EFAC0)
#define GFLCCEMCBGN_EKMPMMLBNEL_OFFSET UNITYSDK_OFFSET(0x159EFB50)

inline static constexpr unsigned int GFLCCEMCBGN_TypeDefinitionIndex = 62562;

	class GFLCCEMCBGN : public ::System::Object
	{
	public:
		::GJHNDAONNGP* EOEACGLNPMC; // 0x10
		::FOPMBGADNJD* JILBKMEGBDK; // 0x18
		::System::Void _ctor(::FOPMBGADNJD* a1, ::GJHNDAONNGP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FOPMBGADNJD*, ::GJHNDAONNGP*))((::PBYTE)hIl2Cpp + GFLCCEMCBGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single EKMPMMLBNEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GFLCCEMCBGN_EKMPMMLBNEL_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APGJODNAGHB;
class DPHIFKIPMLI;
class EOFIDNFOEAE;
class FOPMBGADNJD;
class GJHNDAONNGP;
class KFMGKJPDLNB;

#define LFJCCPIADAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB66F150)
#define LFJCCPIADAL_CTOR_OFFSET UNITYSDK_OFFSET(0xB66F4A0)

inline static constexpr unsigned int LFJCCPIADAL_TypeDefinitionIndex = 62612;

	class LFJCCPIADAL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJCCPIADAL_CTOR_OFFSET))(this);
		}

		::EOFIDNFOEAE* BPLPBPMEODA(::FOPMBGADNJD* a1, ::KFMGKJPDLNB* a2, ::DPHIFKIPMLI* a3, ::APGJODNAGHB* a4, ::GJHNDAONNGP* a5)
		{
			return ((::EOFIDNFOEAE*(*)(::PVOID, ::FOPMBGADNJD*, ::KFMGKJPDLNB*, ::DPHIFKIPMLI*, ::APGJODNAGHB*, ::GJHNDAONNGP*))((::PBYTE)hIl2Cpp + LFJCCPIADAL_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};

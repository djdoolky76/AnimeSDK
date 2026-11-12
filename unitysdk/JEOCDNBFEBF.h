#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JEOCDNBFEBF_AGIMGKGCLJP_OFFSET UNITYSDK_OFFSET(0xB98AB70)
#define JEOCDNBFEBF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB98AAC0)
#define JEOCDNBFEBF_CTOR_OFFSET UNITYSDK_OFFSET(0xB98ABB0)
#define JEOCDNBFEBF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB98A9B0)
#define JEOCDNBFEBF_LBBLNALEPMN_OFFSET UNITYSDK_OFFSET(0xB98AA70)

inline static constexpr unsigned int JEOCDNBFEBF_TypeDefinitionIndex = 82283;

	class JEOCDNBFEBF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_CTOR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void LBBLNALEPMN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_LBBLNALEPMN_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void AGIMGKGCLJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEOCDNBFEBF_AGIMGKGCLJP_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPHJOOGJPKD;
class IJFIHJJPHNA;

#define LOEONJJICDK_BOLNHEOJFME_OFFSET UNITYSDK_OFFSET(0x1C713420)
#define LOEONJJICDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C713410)

inline static constexpr unsigned int LOEONJJICDK_TypeDefinitionIndex = 36521;

	class LOEONJJICDK : public ::System::Object
	{
	public:
		::BPHJOOGJPKD* FLMODBLFAGD; // 0x10
		::System::Void _ctor(::BPHJOOGJPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPHJOOGJPKD*))((::PBYTE)hIl2Cpp + LOEONJJICDK_CTOR_OFFSET))(this, a1);
		}

		::System::Void BOLNHEOJFME(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + LOEONJJICDK_BOLNHEOJFME_OFFSET))(this, a1);
		}

	};

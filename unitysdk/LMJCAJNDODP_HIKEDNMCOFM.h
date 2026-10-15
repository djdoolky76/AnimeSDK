#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALAOCJKOBCN;
class DILIKOIGENM;
class LMJCAJNDODP;

#define LMJCAJNDODP_HIKEDNMCOFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB7C4110)
#define LMJCAJNDODP_HIKEDNMCOFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB7C41C0)

inline static constexpr unsigned int LMJCAJNDODP_HIKEDNMCOFM_TypeDefinitionIndex = 79424;

	class LMJCAJNDODP_HIKEDNMCOFM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJCAJNDODP_HIKEDNMCOFM_CTOR_OFFSET))(this);
		}

		::LMJCAJNDODP* BPLPBPMEODA(::ALAOCJKOBCN* a1, ::DILIKOIGENM* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::LMJCAJNDODP*(*)(::PVOID, ::ALAOCJKOBCN*, ::DILIKOIGENM*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LMJCAJNDODP_HIKEDNMCOFM_BPLPBPMEODA_OFFSET))(this, a1, a2, a3, a4);
		}

	};

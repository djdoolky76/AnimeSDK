#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelPlayEyeAnimationNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCCKANIHNJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB612090)
#define LCCKANIHNJM_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB611FF0)

inline static constexpr unsigned int LCCKANIHNJM_TypeDefinitionIndex = 77692;

	class LCCKANIHNJM : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::RPG::GameCore::ChimeraDuelPlayEyeAnimationNode* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCKANIHNJM_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + LCCKANIHNJM_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelDeleteEffectNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECFBNBABDNG_CTOR_OFFSET UNITYSDK_OFFSET(0x13ABC650)
#define ECFBNBABDNG_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x13ABC5B0)

inline static constexpr unsigned int ECFBNBABDNG_TypeDefinitionIndex = 80412;

	class ECFBNBABDNG : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::RPG::GameCore::ChimeraDuelDeleteEffectNode* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFBNBABDNG_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + ECFBNBABDNG_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

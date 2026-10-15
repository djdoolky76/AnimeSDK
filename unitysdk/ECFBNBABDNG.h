#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelDeleteEffectNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECFBNBABDNG_CTOR_OFFSET UNITYSDK_OFFSET(0x12D067F0)
#define ECFBNBABDNG_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0x12D06750)

inline static constexpr unsigned int ECFBNBABDNG_TypeDefinitionIndex = 77676;

	class ECFBNBABDNG : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelDeleteEffectNode* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFBNBABDNG_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + ECFBNBABDNG_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

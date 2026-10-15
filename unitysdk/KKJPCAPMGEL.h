#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelDitherOutNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKJPCAPMGEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CEEB0)
#define KKJPCAPMGEL_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB4CEE10)

inline static constexpr unsigned int KKJPCAPMGEL_TypeDefinitionIndex = 77678;

	class KKJPCAPMGEL : public ::HBLDGJCDJPF
	{
	public:
		::RPG::GameCore::ChimeraDuelDitherOutNode* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPCAPMGEL_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + KKJPCAPMGEL_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

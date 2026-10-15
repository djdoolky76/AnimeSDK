#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::GameCore { class ChimeraDuelDitherOutNode; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKJPCAPMGEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C8120)
#define KKJPCAPMGEL_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xB4C8080)

inline static constexpr unsigned int KKJPCAPMGEL_TypeDefinitionIndex = 77677;

	class KKJPCAPMGEL : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* KPJHIOKBJEI; // 0x10
		::RPG::GameCore::ChimeraDuelDitherOutNode* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJPCAPMGEL_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + KKJPCAPMGEL_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

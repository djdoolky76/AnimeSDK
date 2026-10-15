#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEPHFJDPEOE_CTOR_OFFSET UNITYSDK_OFFSET(0xCEFD670)
#define AEPHFJDPEOE_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xCEFD5D0)

inline static constexpr unsigned int AEPHFJDPEOE_TypeDefinitionIndex = 77692;

	class AEPHFJDPEOE : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PIJFBMKEOIE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEPHFJDPEOE_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + AEPHFJDPEOE_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

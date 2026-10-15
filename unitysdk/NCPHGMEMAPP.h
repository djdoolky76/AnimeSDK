#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBLDGJCDJPF.h"
class ICCLDNDNHPD;
class KNFCEJEJINK;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCPHGMEMAPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1DDA0)
#define NCPHGMEMAPP_HJMLOLJBBPH_OFFSET UNITYSDK_OFFSET(0xBB1DD00)

	class NCPHGMEMAPP : public ::HBLDGJCDJPF
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* PIJFBMKEOIE; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* IBKPFCOIKOI; // 0x18
		::System::Boolean IDLAAPIGNMG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPHGMEMAPP_CTOR_OFFSET))(this);
		}

		::KNFCEJEJINK* HJMLOLJBBPH(::ICCLDNDNHPD* a1)
		{
			return ((::KNFCEJEJINK*(*)(::PVOID, ::ICCLDNDNHPD*))((::PBYTE)hIl2Cpp + NCPHGMEMAPP_HJMLOLJBBPH_OFFSET))(this, a1);
		}

	};

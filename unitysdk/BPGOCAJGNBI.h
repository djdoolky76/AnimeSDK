#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPGOCAJGNBI;
namespace RPG::Client { class FuncUnlockData; }
namespace RPG::GameCore { class FunctionConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BPGOCAJGNBI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC1A3EB0)
#define BPGOCAJGNBI_CEKEHDFCHNL_OFFSET UNITYSDK_OFFSET(0xC1A3D50)
#define BPGOCAJGNBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A3F20)
#define BPGOCAJGNBI_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xC1A3C50)
#define BPGOCAJGNBI_MKPNHOKPKJG_OFFSET UNITYSDK_OFFSET(0xC1A3E00)
#define BPGOCAJGNBI_NPLNADKMELF_OFFSET UNITYSDK_OFFSET(0xC1A3CA0)

inline static constexpr unsigned int BPGOCAJGNBI_TypeDefinitionIndex = 68019;

	class BPGOCAJGNBI : public ::System::Object
	{
	public:
		::RPG::GameCore::FunctionConfigRow* POBMBPIIJND; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* BHINHANLDAL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* KLLKKBOFKEK; // 0x20
		::System::Void _ctor(::RPG::GameCore::FunctionConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + BPGOCAJGNBI_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGOCAJGNBI_MJGKNFEILLI_OFFSET))(this);
		}

		::System::UInt32 NPLNADKMELF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGOCAJGNBI_NPLNADKMELF_OFFSET))(this);
		}

		::System::UInt32 CEKEHDFCHNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGOCAJGNBI_CEKEHDFCHNL_OFFSET))(this);
		}

		::RPG::Client::FuncUnlockData* MKPNHOKPKJG()
		{
			return ((::RPG::Client::FuncUnlockData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGOCAJGNBI_MKPNHOKPKJG_OFFSET))(this);
		}

		static ::BPGOCAJGNBI* BPLPBPMEODA(::RPG::GameCore::FunctionConfigRow* a1)
		{
			return ((::BPGOCAJGNBI*(*)(::RPG::GameCore::FunctionConfigRow*))((::PBYTE)hIl2Cpp + BPGOCAJGNBI_BPLPBPMEODA_OFFSET))(a1);
		}

	};

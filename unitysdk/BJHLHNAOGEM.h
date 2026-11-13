#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACHHBGNENA;
class CPLFEKKNLDO;
class LBFNAJJGCBH;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesMiniGameBingoData; }

#define BJHLHNAOGEM_COEONDABKIH_OFFSET UNITYSDK_OFFSET(0x1BAD9F70)
#define BJHLHNAOGEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD9FE0)
#define BJHLHNAOGEM_DALKINCKLJJ_OFFSET UNITYSDK_OFFSET(0x1BAD9C40)
#define BJHLHNAOGEM_DOIGMAGLGCC_OFFSET UNITYSDK_OFFSET(0x1BAD9EF0)
#define BJHLHNAOGEM_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1BAD9FC0)
#define BJHLHNAOGEM_HGNDCFHOGCE_OFFSET UNITYSDK_OFFSET(0x1BAD9B70)
#define BJHLHNAOGEM_JKGEJGLKCGL_OFFSET UNITYSDK_OFFSET(0x1BAD9D80)
#define BJHLHNAOGEM_KHHDIDPKHJP_OFFSET UNITYSDK_OFFSET(0x1BAD9B00)
#define BJHLHNAOGEM_KKFDGBFOOCC_OFFSET UNITYSDK_OFFSET(0x1BAD9DF0)
#define BJHLHNAOGEM_OCJJKPPIPBI_OFFSET UNITYSDK_OFFSET(0x1BAD9BE0)
#define BJHLHNAOGEM_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x1BAD9FD0)

inline static constexpr unsigned int BJHLHNAOGEM_TypeDefinitionIndex = 68552;

	class BJHLHNAOGEM : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesMiniGameBingoData* AGLMEDOBMAL; // 0x10
		::System::UInt32 _FinishCount_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_CTOR_OFFSET))(this);
		}

		::System::Void KHHDIDPKHJP(::LBFNAJJGCBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBFNAJJGCBH*))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_KHHDIDPKHJP_OFFSET))(this, a1);
		}

		::System::Void HGNDCFHOGCE(::BACHHBGNENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACHHBGNENA*))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_HGNDCFHOGCE_OFFSET))(this, a1);
		}

		::System::Void OCJJKPPIPBI(::CPLFEKKNLDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPLFEKKNLDO*))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_OCJJKPPIPBI_OFFSET))(this, a1);
		}

		::System::Void DALKINCKLJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_DALKINCKLJJ_OFFSET))(this, a1);
		}

		::System::Void KKFDGBFOOCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_KKFDGBFOOCC_OFFSET))(this, a1);
		}

		::System::Boolean DOIGMAGLGCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_DOIGMAGLGCC_OFFSET))(this);
		}

		::System::UInt32 COEONDABKIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_COEONDABKIH_OFFSET))(this);
		}

		::RPG::Client::NetworkManager* JKGEJGLKCGL()
		{
			return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_JKGEJGLKCGL_OFFSET))(this);
		}

		::System::UInt32 get_FinishCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_GET_FINISHCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJHLHNAOGEM_SET_FINISHCOUNT_OFFSET))(this, a1);
		}

	};

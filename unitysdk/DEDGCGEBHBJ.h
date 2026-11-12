#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
#include "unitysdk/System/Object.h"
class AIIBIJAKKKH;
class FDPALAEIHPB;
class GIFNELLKBFE;
class KHPOKIKCOFO;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class MonopolyMapConfig; }
namespace System { class Object; }

#define DEDGCGEBHBJ_AILNHKPAEMO_OFFSET UNITYSDK_OFFSET(0xEE49B10)
#define DEDGCGEBHBJ_BGMFAFMMKOJ_OFFSET UNITYSDK_OFFSET(0xEE4A680)
#define DEDGCGEBHBJ_CDJLCMLAHCM_OFFSET UNITYSDK_OFFSET(0xEE4AB50)
#define DEDGCGEBHBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xEE49A30)
#define DEDGCGEBHBJ_DNLFCBFMGFG_OFFSET UNITYSDK_OFFSET(0xEE4A950)
#define DEDGCGEBHBJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE49D40)
#define DEDGCGEBHBJ_FJNEKOHDMFK_OFFSET UNITYSDK_OFFSET(0xEE4A3D0)
#define DEDGCGEBHBJ_HEPJMKNLDBG_OFFSET UNITYSDK_OFFSET(0xEE4A9B0)
#define DEDGCGEBHBJ_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xEE49AC0)
#define DEDGCGEBHBJ_KOJCKBLLEAG_OFFSET UNITYSDK_OFFSET(0xEE4A6E0)
#define DEDGCGEBHBJ_MMGIKAJAION_OFFSET UNITYSDK_OFFSET(0xEE4A7C0)
#define DEDGCGEBHBJ_NFFBGMOBNNO_OFFSET UNITYSDK_OFFSET(0xEE4A240)
#define DEDGCGEBHBJ_NOOHIAJGOOB_OFFSET UNITYSDK_OFFSET(0xEE4AEA0)

inline static constexpr unsigned int DEDGCGEBHBJ_TypeDefinitionIndex = 78134;

	class DEDGCGEBHBJ : public ::System::Object
	{
	public:
		::AIIBIJAKKKH* HINDODOFCLK; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::RPG::Client::UIController* LHKMEAFLNBB; // 0x20
		::KHPOKIKCOFO* NFFDOEANJMA; // 0x28
		::RPG::Client::LittleGame::MonopolyGameState LEBIHJOBAPF; // 0x30
		::System::Single LLNIGIGFCEA; // 0x34
		::System::Boolean BDKNPNKNJIO; // 0x38
		// static const ::System::Object KKPEIMJKION; // 0x0
		// static const ::System::String* JIHIPGKACBO; // 0x0
		// static const ::System::String* GKCMLPLDCDE; // 0x0
		// static const ::System::String* KBBHGPHEKOG; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::GIFNELLKBFE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::GIFNELLKBFE*))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_EXECUTE_OFFSET))(this);
		}

		::System::Void FJNEKOHDMFK(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_FJNEKOHDMFK_OFFSET))(this, a1);
		}

		::System::Void KOJCKBLLEAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_KOJCKBLLEAG_OFFSET))(this);
		}

		::System::Void MMGIKAJAION(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_MMGIKAJAION_OFFSET))(this, a1);
		}

		::System::Void NOOHIAJGOOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_NOOHIAJGOOB_OFFSET))(this);
		}

		::System::Void CDJLCMLAHCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_CDJLCMLAHCM_OFFSET))(this);
		}

		::System::Void BGMFAFMMKOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_BGMFAFMMKOJ_OFFSET))(this);
		}

		::System::Void DNLFCBFMGFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_DNLFCBFMGFG_OFFSET))(this);
		}

		::System::Void AILNHKPAEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_AILNHKPAEMO_OFFSET))(this);
		}

		::RPG::GameCore::MonopolyMapConfig* HEPJMKNLDBG()
		{
			return ((::RPG::GameCore::MonopolyMapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_HEPJMKNLDBG_OFFSET))(this);
		}

		::KHPOKIKCOFO* NFFBGMOBNNO()
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDGCGEBHBJ_NFFBGMOBNNO_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMKNLNNLNKE.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class DNFFEFPKDPC;
class HFCPGANBGMI;
class JAODHHPIKGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMBLENLAFEK_CCTOR_OFFSET UNITYSDK_OFFSET(0xB9BFE50)
#define MMBLENLAFEK_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BFE00)
#define MMBLENLAFEK_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB9BFDF0)
#define MMBLENLAFEK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB9BF440)
#define MMBLENLAFEK_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xB9BFB80)
#define MMBLENLAFEK_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB9BFAD0)
#define MMBLENLAFEK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9BF3F0)
#define MMBLENLAFEK_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0xB9BFD90)

inline static constexpr unsigned int MMBLENLAFEK_TypeDefinitionIndex = 76799;

	class MMBLENLAFEK : public ::EMKNLNNLNKE
	{
	public:
		::System::Boolean DBGLCEJMNFF; // 0xA8
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::Move::MoveState ACHIDNBOBLA; // 0xAC
		static ::System::Collections::Generic::List_1<::DNFFEFPKDPC*>** StaticGet_JEFABMFHDJI()
		{
			return (::System::Collections::Generic::List_1<::DNFFEFPKDPC*>**)UnitySDK::FromName("", "MMBLENLAFEK")->GetStaticField(0xCA80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBLENLAFEK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMBLENLAFEK_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + MMBLENLAFEK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + MMBLENLAFEK_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + MMBLENLAFEK_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + MMBLENLAFEK_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + MMBLENLAFEK_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + MMBLENLAFEK_EPPAFNJFCMH_OFFSET))(this);
		}

	};

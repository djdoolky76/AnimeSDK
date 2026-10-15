#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOHKNMBNPOD.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ENLNFBCDEIO;
class PPHMIMEOMAM;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace RPG::Client::Prop::PillarPuzzle { class PillarPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCEDIHEDOEL_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xBD55CA0)
#define OCEDIHEDOEL_BDBNOPCMNOO_OFFSET UNITYSDK_OFFSET(0xBD54CE0)
#define OCEDIHEDOEL_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD55CE0)
#define OCEDIHEDOEL_CNOIEHBMGNO_OFFSET UNITYSDK_OFFSET(0xBD55670)
#define OCEDIHEDOEL_DBBKKEFIHNF_OFFSET UNITYSDK_OFFSET(0xBD55410)
#define OCEDIHEDOEL_DBDJPKOCMIO_OFFSET UNITYSDK_OFFSET(0xBD552F0)
#define OCEDIHEDOEL_DKAADOCOGEB_OFFSET UNITYSDK_OFFSET(0xBD53870)
#define OCEDIHEDOEL_DNIAHGEGHDJ_OFFSET UNITYSDK_OFFSET(0xBD551C0)
#define OCEDIHEDOEL_EBOOIGGKJDN_OFFSET UNITYSDK_OFFSET(0xBD54C30)
#define OCEDIHEDOEL_EEHHNCGPBAP_OFFSET UNITYSDK_OFFSET(0xBD55AC0)
#define OCEDIHEDOEL_FGPINFHBKCG_OFFSET UNITYSDK_OFFSET(0xBD53AB0)
#define OCEDIHEDOEL_FMPAOKGPMNG_OFFSET UNITYSDK_OFFSET(0xBD55B70)
#define OCEDIHEDOEL_FNNLCCIEFJB_OFFSET UNITYSDK_OFFSET(0xBD54F50)
#define OCEDIHEDOEL_GJMJMLONGBF_OFFSET UNITYSDK_OFFSET(0xBD550A0)
#define OCEDIHEDOEL_GOGOJDDFAAP_OFFSET UNITYSDK_OFFSET(0xBD54270)
#define OCEDIHEDOEL_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xBD55C30)
#define OCEDIHEDOEL_IBKMOPCFMPK_OFFSET UNITYSDK_OFFSET(0xBD54540)
#define OCEDIHEDOEL_IFBEMICPDBM_OFFSET UNITYSDK_OFFSET(0xBD53C90)
#define OCEDIHEDOEL_IFLMFJNKJNN_OFFSET UNITYSDK_OFFSET(0xBD54430)
#define OCEDIHEDOEL_JAHIAAEJEOH_OFFSET UNITYSDK_OFFSET(0xBD54690)
#define OCEDIHEDOEL_JFIDNNJCLPI_OFFSET UNITYSDK_OFFSET(0xBD558C0)
#define OCEDIHEDOEL_KCAFJJKDNNF_OFFSET UNITYSDK_OFFSET(0xBD547E0)
#define OCEDIHEDOEL_LBBDIHKLEDP_OFFSET UNITYSDK_OFFSET(0xBD53DA0)
#define OCEDIHEDOEL_LNBKIHMCEOB_OFFSET UNITYSDK_OFFSET(0xBD55540)
#define OCEDIHEDOEL_LNFEFFIGNBO_OFFSET UNITYSDK_OFFSET(0xBD54930)
#define OCEDIHEDOEL_NALBBDLNIHF_OFFSET UNITYSDK_OFFSET(0xBD54AD0)
#define OCEDIHEDOEL_OBKJNOOKOGM_OFFSET UNITYSDK_OFFSET(0xBD55790)
#define OCEDIHEDOEL_PEMLKOLMIMK_OFFSET UNITYSDK_OFFSET(0xBD54E20)

inline static constexpr unsigned int OCEDIHEDOEL_TypeDefinitionIndex = 78939;

	class OCEDIHEDOEL : public ::System::Object
	{
	public:
		static ::PPHMIMEOMAM** StaticGet_GLIKKEKEGNJ()
		{
			return (::PPHMIMEOMAM**)UnitySDK::FromName("", "OCEDIHEDOEL")->GetStaticField(0x5B900);
		}

		static ::System::Collections::Generic::Dictionary_2<::JOHKNMBNPOD, ::ENLNFBCDEIO*>** StaticGet_LALMDIKCAKD()
		{
			return (::System::Collections::Generic::Dictionary_2<::JOHKNMBNPOD, ::ENLNFBCDEIO*>**)UnitySDK::FromName("", "OCEDIHEDOEL")->GetStaticField(0x5B908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEDIHEDOEL_CCTOR_OFFSET))();
		}

		static ::System::Void DKAADOCOGEB(::JOHKNMBNPOD a1, ::RPG::Client::Prop::BoxmanPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD, ::RPG::Client::Prop::BoxmanPuzzleBoard*))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_DKAADOCOGEB_OFFSET))(a1, a2);
		}

		static ::System::Void FGPINFHBKCG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEDIHEDOEL_FGPINFHBKCG_OFFSET))();
		}

		static ::System::Void IFBEMICPDBM(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_IFBEMICPDBM_OFFSET))(a1);
		}

		static ::System::Void LBBDIHKLEDP(::JOHKNMBNPOD a1, ::RPG::Client::Prop::BoxmanPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD, ::RPG::Client::Prop::BoxmanPuzzleBoard*))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_LBBDIHKLEDP_OFFSET))(a1, a2);
		}

		static ::System::Void GOGOJDDFAAP(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_GOGOJDDFAAP_OFFSET))(a1);
		}

		static ::System::Void IBKMOPCFMPK(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_IBKMOPCFMPK_OFFSET))(a1);
		}

		static ::System::Void JAHIAAEJEOH(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_JAHIAAEJEOH_OFFSET))(a1);
		}

		static ::System::Void KCAFJJKDNNF(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_KCAFJJKDNNF_OFFSET))(a1);
		}

		static ::System::Void LNFEFFIGNBO(::JOHKNMBNPOD a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Int32))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_LNFEFFIGNBO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NALBBDLNIHF(::JOHKNMBNPOD a1, ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD, ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard*))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_NALBBDLNIHF_OFFSET))(a1, a2);
		}

		static ::System::Void EBOOIGGKJDN(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_EBOOIGGKJDN_OFFSET))(a1);
		}

		static ::System::Void BDBNOPCMNOO(::JOHKNMBNPOD a1, ::System::UInt32 a2, ::RPG::GameCore::PropState a3)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD, ::System::UInt32, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_BDBNOPCMNOO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PEMLKOLMIMK(::JOHKNMBNPOD a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD, ::System::Int32))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_PEMLKOLMIMK_OFFSET))(a1, a2);
		}

		static ::System::Int32 FNNLCCIEFJB(::JOHKNMBNPOD a1)
		{
			return ((::System::Int32(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_FNNLCCIEFJB_OFFSET))(a1);
		}

		static ::System::Void GJMJMLONGBF(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_GJMJMLONGBF_OFFSET))(a1);
		}

		static ::System::Int32 DNIAHGEGHDJ(::JOHKNMBNPOD a1)
		{
			return ((::System::Int32(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_DNIAHGEGHDJ_OFFSET))(a1);
		}

		static ::System::Void DBDJPKOCMIO(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_DBDJPKOCMIO_OFFSET))(a1);
		}

		static ::System::Int32 DBBKKEFIHNF(::JOHKNMBNPOD a1)
		{
			return ((::System::Int32(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_DBBKKEFIHNF_OFFSET))(a1);
		}

		static ::System::Void LNBKIHMCEOB(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_LNBKIHMCEOB_OFFSET))(a1);
		}

		static ::System::Void CNOIEHBMGNO(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_CNOIEHBMGNO_OFFSET))(a1);
		}

		static ::System::Int32 OBKJNOOKOGM(::JOHKNMBNPOD a1)
		{
			return ((::System::Int32(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_OBKJNOOKOGM_OFFSET))(a1);
		}

		static ::JOHKNMBNPOD JFIDNNJCLPI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::JOHKNMBNPOD(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_JFIDNNJCLPI_OFFSET))(a1);
		}

		static ::ENLNFBCDEIO* IFLMFJNKJNN(::JOHKNMBNPOD a1)
		{
			return ((::ENLNFBCDEIO*(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_IFLMFJNKJNN_OFFSET))(a1);
		}

		static ::System::Void EEHHNCGPBAP(::JOHKNMBNPOD a1)
		{
			return ((::System::Void(*)(::JOHKNMBNPOD))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_EEHHNCGPBAP_OFFSET))(a1);
		}

		static ::System::Void FMPAOKGPMNG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEDIHEDOEL_FMPAOKGPMNG_OFFSET))();
		}

		static ::System::Void HKEPJLDBGIG(::System::Int32 a1, ::PPHMIMEOMAM* a2)
		{
			return ((::System::Void(*)(::System::Int32, ::PPHMIMEOMAM*))((::PBYTE)hIl2Cpp + OCEDIHEDOEL_HKEPJLDBGIG_OFFSET))(a1, a2);
		}

		static ::System::Void ALJIOCDBMKO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCEDIHEDOEL_ALJIOCDBMKO_OFFSET))();
		}

	};

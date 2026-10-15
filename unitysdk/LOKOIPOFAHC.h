#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"
#include "unitysdk/System/Object.h"
class ENAAOFHBDIB;
class FJNBODHINDM;
class FNINJACLJOH;
class LOKOIPOFAHC;
class NMCLDAMPDNE;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOKOIPOFAHC_BNMFMCEFHLH_OFFSET UNITYSDK_OFFSET(0xB80B480)
#define LOKOIPOFAHC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB80B560)
#define LOKOIPOFAHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB80B550)
#define LOKOIPOFAHC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB80AA10)
#define LOKOIPOFAHC_EPMDJMBPFGG_OFFSET UNITYSDK_OFFSET(0xB80B450)
#define LOKOIPOFAHC_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB80B440)
#define LOKOIPOFAHC_GLGDKAPHDNK_OFFSET UNITYSDK_OFFSET(0xB80B470)
#define LOKOIPOFAHC_JFOAHPFEFAH_OFFSET UNITYSDK_OFFSET(0xB80B3B0)
#define LOKOIPOFAHC_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0xB80AB50)
#define LOKOIPOFAHC_JJEJMNNBLBF_OFFSET UNITYSDK_OFFSET(0xB80B290)
#define LOKOIPOFAHC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB80A970)
#define LOKOIPOFAHC_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0xB80B460)
#define LOKOIPOFAHC_OFJDPHLHCGA_OFFSET UNITYSDK_OFFSET(0xB80B1F0)

inline static constexpr unsigned int LOKOIPOFAHC_TypeDefinitionIndex = 53974;

	class LOKOIPOFAHC : public ::System::Object
	{
	public:
		::System::Action_2<::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState>* HGOJNFKDIMA; // 0x10
		::FNINJACLJOH* HMPGKKAPEJN; // 0x18
		::Il2CppArray<::ENAAOFHBDIB*>* EMDGNIIHDEN; // 0x20
		::ENAAOFHBDIB* JJBOPOPCOCH; // 0x28
		::System::Collections::Generic::List_1<::NMCLDAMPDNE*>* BLJNGEODBIB; // 0x30
		::FJNBODHINDM* GPACEDIFLNG; // 0x38
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x40
		::RPG::GameCore::RtCharacterState GBNFHLHLHJF; // 0x48
		static ::FNINJACLJOH** StaticGet_CJHCPKDDHCN()
		{
			return (::FNINJACLJOH**)UnitySDK::FromName("", "LOKOIPOFAHC")->GetStaticField(0x6D6C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOKOIPOFAHC_CCTOR_OFFSET))();
		}

		::LOKOIPOFAHC* KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::FJNBODHINDM* a2, ::FNINJACLJOH* a3)
		{
			return ((::LOKOIPOFAHC*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::FJNBODHINDM*, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_DISPOSE_OFFSET))(this);
		}

		::System::Void JIFPPKNBGMH(::RPG::GameCore::RtCharacterState a1, ::FNINJACLJOH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::FNINJACLJOH*))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_JIFPPKNBGMH_OFFSET))(this, a1, a2);
		}

		::System::Void JJEJMNNBLBF(::NMCLDAMPDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMCLDAMPDNE*))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_JJEJMNNBLBF_OFFSET))(this, a1);
		}

		::System::Void JFOAHPFEFAH(::NMCLDAMPDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMCLDAMPDNE*))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_JFOAHPFEFAH_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_FIIIDGBIHNB_OFFSET))(this);
		}

		::FJNBODHINDM* EPMDJMBPFGG()
		{
			return ((::FJNBODHINDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_EPMDJMBPFGG_OFFSET))(this);
		}

		::FNINJACLJOH* OFJDPHLHCGA()
		{
			return ((::FNINJACLJOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_OFJDPHLHCGA_OFFSET))(this);
		}

		::ENAAOFHBDIB* NJDMJODMLFF()
		{
			return ((::ENAAOFHBDIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_NJDMJODMLFF_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState GLGDKAPHDNK()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_GLGDKAPHDNK_OFFSET))(this);
		}

		::RPG::GameCore::RtCharacterState BNMFMCEFHLH()
		{
			return ((::RPG::GameCore::RtCharacterState(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKOIPOFAHC_BNMFMCEFHLH_OFFSET))(this);
		}

	};

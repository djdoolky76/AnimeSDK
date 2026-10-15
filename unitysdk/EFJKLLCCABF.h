#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AILLIHEBFID;
class DCHFGBPMKDI;
class DOIPOJANKGI;
class GFHCKBHCNDF;
class MBDOBECHOJA;
class PLHAEBMKIFA;
namespace RPG::Client::PetMarble { class PetMarblePlayer; }
namespace RPG::Client::PetMarble { class PetMarbleTeamEditController; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFJKLLCCABF_ADD_CHOOSEPETSTARTED_OFFSET UNITYSDK_OFFSET(0x13A51510)
#define EFJKLLCCABF_AHGMMMAKLOK_OFFSET UNITYSDK_OFFSET(0x13A4FA60)
#define EFJKLLCCABF_ANPDFDKEHIB_OFFSET UNITYSDK_OFFSET(0x13A4F7D0)
#define EFJKLLCCABF_CDFBBLLAHLL_OFFSET UNITYSDK_OFFSET(0x13A505B0)
#define EFJKLLCCABF_CLHJCFKKKHF_OFFSET UNITYSDK_OFFSET(0x13A4FAD0)
#define EFJKLLCCABF_CMCGBOBHMFG_OFFSET UNITYSDK_OFFSET(0x13A510C0)
#define EFJKLLCCABF_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4F480)
#define EFJKLLCCABF_DHBJIMBGNDP_OFFSET UNITYSDK_OFFSET(0x13A4FD90)
#define EFJKLLCCABF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A511E0)
#define EFJKLLCCABF_EAPJLCKCLAE_OFFSET UNITYSDK_OFFSET(0x13A50550)
#define EFJKLLCCABF_GDJEGLAAOPH_OFFSET UNITYSDK_OFFSET(0x13A50420)
#define EFJKLLCCABF_GKHLAOLOOGH_OFFSET UNITYSDK_OFFSET(0x13A4FB20)
#define EFJKLLCCABF_GLIMJNJOFFG_OFFSET UNITYSDK_OFFSET(0x13A50340)
#define EFJKLLCCABF_HCMICKNIPCP_OFFSET UNITYSDK_OFFSET(0x13A4F9D0)
#define EFJKLLCCABF_HDFNOOFBCLB_OFFSET UNITYSDK_OFFSET(0x13A50B00)
#define EFJKLLCCABF_HGDCBGAKOGL_OFFSET UNITYSDK_OFFSET(0x13A50A00)
#define EFJKLLCCABF_JHLBIJIFAAB_OFFSET UNITYSDK_OFFSET(0x13A502A0)
#define EFJKLLCCABF_JNFIAAOKBCK_OFFSET UNITYSDK_OFFSET(0x13A508D0)
#define EFJKLLCCABF_KMONOBHCNMN_OFFSET UNITYSDK_OFFSET(0x13A4F770)
#define EFJKLLCCABF_OGOMJGAODLK_OFFSET UNITYSDK_OFFSET(0x13A50C20)
#define EFJKLLCCABF_PIABBHBKPBA_OFFSET UNITYSDK_OFFSET(0x13A50BD0)
#define EFJKLLCCABF_REMOVE_CHOOSEPETSTARTED_OFFSET UNITYSDK_OFFSET(0x13A51590)

inline static constexpr unsigned int EFJKLLCCABF_TypeDefinitionIndex = 60407;

	class EFJKLLCCABF : public ::System::Object
	{
	public:
		::System::Action* ChoosePetStarted; // 0x10
		::RPG::Client::PetMarble::PetMarbleTeamEditController* MOBILOKIAJP; // 0x18
		::PLHAEBMKIFA* LDEIAPECBPM; // 0x20
		::DCHFGBPMKDI* OFMKMFOJKFC; // 0x28
		::System::Func_2<::GFHCKBHCNDF*, ::System::Boolean>* AFIBMAJKJDP; // 0x30
		::GFHCKBHCNDF* MFDKEDAAJAC; // 0x38
		::DOIPOJANKGI* MMOAEKJIPLD; // 0x40
		::GFHCKBHCNDF* DDKKCDNNFLA; // 0x48
		::AILLIHEBFID* PLFGOALIDGC; // 0x50
		::System::Boolean MONNDCLNMOA; // 0x58
		::System::Boolean GFAMGLFOMGI; // 0x59
		::System::Boolean OFBPMHLNKGC; // 0x5A
		::System::Void _ctor(::DCHFGBPMKDI* a1, ::PLHAEBMKIFA* a2, ::System::Func_2<::GFHCKBHCNDF*, ::System::Boolean>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DCHFGBPMKDI*, ::PLHAEBMKIFA*, ::System::Func_2<::GFHCKBHCNDF*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KMONOBHCNMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_KMONOBHCNMN_OFFSET))(this);
		}

		::System::Boolean ANPDFDKEHIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_ANPDFDKEHIB_OFFSET))(this);
		}

		::System::Void HCMICKNIPCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_HCMICKNIPCP_OFFSET))(this);
		}

		::System::Void CLHJCFKKKHF(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_CLHJCFKKKHF_OFFSET))(this, a1);
		}

		::System::Void GKHLAOLOOGH(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_GKHLAOLOOGH_OFFSET))(this, a1);
		}

		::System::Void EAPJLCKCLAE(::DOIPOJANKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIPOJANKGI*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_EAPJLCKCLAE_OFFSET))(this, a1);
		}

		::System::Boolean CDFBBLLAHLL(::MBDOBECHOJA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_CDFBBLLAHLL_OFFSET))(this, a1);
		}

		::System::Void JNFIAAOKBCK(::GFHCKBHCNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_JNFIAAOKBCK_OFFSET))(this, a1);
		}

		::System::Void HGDCBGAKOGL(::MBDOBECHOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_HGDCBGAKOGL_OFFSET))(this, a1);
		}

		::System::Void HDFNOOFBCLB(::MBDOBECHOJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBDOBECHOJA*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_HDFNOOFBCLB_OFFSET))(this, a1);
		}

		::System::Void GDJEGLAAOPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_GDJEGLAAOPH_OFFSET))(this);
		}

		::System::Boolean DHBJIMBGNDP(::GFHCKBHCNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_DHBJIMBGNDP_OFFSET))(this, a1);
		}

		::System::Void JHLBIJIFAAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_JHLBIJIFAAB_OFFSET))(this);
		}

		::System::Void GLIMJNJOFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_GLIMJNJOFFG_OFFSET))(this);
		}

		::AILLIHEBFID* PIABBHBKPBA()
		{
			return ((::AILLIHEBFID*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_PIABBHBKPBA_OFFSET))(this);
		}

		static ::System::UInt32 OGOMJGAODLK(::GFHCKBHCNDF* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::GFHCKBHCNDF*, ::System::UInt32))((::PBYTE)hIl2Cpp + EFJKLLCCABF_OGOMJGAODLK_OFFSET))(a1, a2);
		}

		static ::RPG::Client::PetMarble::PetMarblePlayer* CMCGBOBHMFG(::GFHCKBHCNDF* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::PetMarble::PetMarblePlayer*(*)(::GFHCKBHCNDF*, ::System::UInt32))((::PBYTE)hIl2Cpp + EFJKLLCCABF_CMCGBOBHMFG_OFFSET))(a1, a2);
		}

		::System::Void AHGMMMAKLOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_AHGMMMAKLOK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFJKLLCCABF_DISPOSE_OFFSET))(this);
		}

		::System::Void add_ChoosePetStarted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_ADD_CHOOSEPETSTARTED_OFFSET))(this, a1);
		}

		::System::Void remove_ChoosePetStarted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EFJKLLCCABF_REMOVE_CHOOSEPETSTARTED_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAGCBFJCKLE.h"
class IBCDHMDKNOP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MunicipalChatActionLookAt; }

#define JFHLMFEGADK_ADLELKFFBNK_OFFSET UNITYSDK_OFFSET(0x1664D420)
#define JFHLMFEGADK_CGPPHCNHADF_OFFSET UNITYSDK_OFFSET(0x1664D180)
#define JFHLMFEGADK_CTOR_OFFSET UNITYSDK_OFFSET(0x1664D0D0)
#define JFHLMFEGADK_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0x1664D0E0)
#define JFHLMFEGADK_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1664D130)
#define JFHLMFEGADK_HBFABHGCEFD_OFFSET UNITYSDK_OFFSET(0x1664D4C0)
#define JFHLMFEGADK_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1664D270)
#define JFHLMFEGADK_LNNLMNBOPCB_OFFSET UNITYSDK_OFFSET(0x1664D480)
#define JFHLMFEGADK_MGFLFCHMGPA_OFFSET UNITYSDK_OFFSET(0x1664D330)

	class JFHLMFEGADK : public ::MAGCBFJCKLE
	{
	public:
		::RPG::GameCore::GameEntity* NIEGPDHODNL; // 0x30
		::System::Boolean EAPGBDODNHD; // 0x38
		// static const ::System::String* OPHHLMDEGFH; // 0x0
		::System::Void _ctor(::IBCDHMDKNOP* a1, ::RPG::GameCore::MunicipalChatActionLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IBCDHMDKNOP*, ::RPG::GameCore::MunicipalChatActionLookAt*))((::PBYTE)hIl2Cpp + JFHLMFEGADK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::MunicipalChatActionLookAt* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::MunicipalChatActionLookAt*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_FMHKLHAKMKO_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFHLMFEGADK_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void MGFLFCHMGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_MGFLFCHMGPA_OFFSET))(this);
		}

		::System::Void LNNLMNBOPCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_LNNLMNBOPCB_OFFSET))(this);
		}

		::System::Void ADLELKFFBNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_ADLELKFFBNK_OFFSET))(this);
		}

		::System::Void HBFABHGCEFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_HBFABHGCEFD_OFFSET))(this);
		}

		::System::Void CGPPHCNHADF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHLMFEGADK_CGPPHCNHADF_OFFSET))(this);
		}

	};

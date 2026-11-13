#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class DFPILEHIJHA;
namespace System { class Object; }
namespace System { class String; }

#define NMLKGGGNGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A44B090)
#define NMLKGGGNGBP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x1A44B610)
#define NMLKGGGNGBP_EBCGGOHGCIK_OFFSET UNITYSDK_OFFSET(0x1A44B9E0)
#define NMLKGGGNGBP_IALPPDNMBBC_OFFSET UNITYSDK_OFFSET(0x1A44B740)
#define NMLKGGGNGBP_IDPIKEAFHCH_OFFSET UNITYSDK_OFFSET(0x1A44B940)
#define NMLKGGGNGBP_JHFNJDOKFHD_OFFSET UNITYSDK_OFFSET(0x1A44B6F0)
#define NMLKGGGNGBP_KGHLEMPCJIE_OFFSET UNITYSDK_OFFSET(0x1A44B790)
#define NMLKGGGNGBP_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x1A44B510)
#define NMLKGGGNGBP_OIKKDJFPJGD_OFFSET UNITYSDK_OFFSET(0x1A44B7D0)
#define NMLKGGGNGBP_PEKDFICOGIK_OFFSET UNITYSDK_OFFSET(0x1A44BD70)
#define NMLKGGGNGBP__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1A44B100)
#define NMLKGGGNGBP__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A44B5A0)

inline static constexpr unsigned int NMLKGGGNGBP_TypeDefinitionIndex = 74827;

	class NMLKGGGNGBP : public ::RPG::Client::UIController
	{
	public:
		::System::UInt32 JIHAAJHILFD; // 0x190
		::System::UInt32 MLLADNIGPHC; // 0x194
		// static const ::System::String* PAJKCDHDEEH; // 0x0
		// static const ::System::String* FLIIKCMBHMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JHFNJDOKFHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_JHFNJDOKFHD_OFFSET))(this, a1);
		}

		::System::Void IALPPDNMBBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_IALPPDNMBBC_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void OIKKDJFPJGD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_OIKKDJFPJGD_OFFSET))(this, a1);
		}

		::System::Void PEKDFICOGIK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_PEKDFICOGIK_OFFSET))(this, a1);
		}

		::System::Void KGHLEMPCJIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_KGHLEMPCJIE_OFFSET))(this);
		}

		::System::Void EBCGGOHGCIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_EBCGGOHGCIK_OFFSET))(this);
		}

		::System::UInt32 IDPIKEAFHCH(::System::String* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_IDPIKEAFHCH_OFFSET))(this, a1);
		}

		::DFPILEHIJHA* OICGPNAMNAI()
		{
			return ((::DFPILEHIJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLKGGGNGBP_OICGPNAMNAI_OFFSET))(this);
		}

	};

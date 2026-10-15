#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupPropertySide.h"
#include "unitysdk/System/Object.h"
class BOJKDLCIJCN;
class PNLMPCHFEGP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JOKACBOADHJ_AKBIPPMHFMC_OFFSET UNITYSDK_OFFSET(0xB2A44E0)
#define JOKACBOADHJ_BPDIGKDIJKN_OFFSET UNITYSDK_OFFSET(0xB2A4060)
#define JOKACBOADHJ_CLFFOEBFLBE_OFFSET UNITYSDK_OFFSET(0xB2A4DD0)
#define JOKACBOADHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB2A3F40)
#define JOKACBOADHJ_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xB2A4670)
#define JOKACBOADHJ_FCKKIOCMHDA_OFFSET UNITYSDK_OFFSET(0xB2A4C20)
#define JOKACBOADHJ_FHAPPCADGCE_OFFSET UNITYSDK_OFFSET(0xB2A4980)
#define JOKACBOADHJ_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB2A4340)
#define JOKACBOADHJ_NBCKMAFIBPI_OFFSET UNITYSDK_OFFSET(0xB2A4210)
#define JOKACBOADHJ_NPAOAEGHIED_OFFSET UNITYSDK_OFFSET(0xB2A40C0)
#define JOKACBOADHJ_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB2A3FD0)

inline static constexpr unsigned int JOKACBOADHJ_TypeDefinitionIndex = 62128;

	class JOKACBOADHJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::PNLMPCHFEGP*>* DNOBPAFNGFM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKACBOADHJ_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKACBOADHJ_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean BPDIGKDIJKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKACBOADHJ_BPDIGKDIJKN_OFFSET))(this);
		}

		::System::Boolean NPAOAEGHIED(::System::String* a1, ::PNLMPCHFEGP* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::PNLMPCHFEGP*))((::PBYTE)hIl2Cpp + JOKACBOADHJ_NPAOAEGHIED_OFFSET))(this, a1, a2);
		}

		::System::Boolean NBCKMAFIBPI(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JOKACBOADHJ_NBCKMAFIBPI_OFFSET))(this, a1);
		}

		::System::Int16 MNGGAOFNGIP(::System::String* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JOKACBOADHJ_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Boolean AKBIPPMHFMC(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + JOKACBOADHJ_AKBIPPMHFMC_OFFSET))(this, a1, a2);
		}

		::System::Void EIMIIHEDKFM(::System::UInt32 a1, ::System::String* a2, ::System::Int16 a3, ::System::Int16 a4, ::System::Int16 a5, ::RPG::GameCore::GroupPropertySide a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16, ::System::Int16, ::System::Int16, ::RPG::GameCore::GroupPropertySide))((::PBYTE)hIl2Cpp + JOKACBOADHJ_EIMIIHEDKFM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean FHAPPCADGCE(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + JOKACBOADHJ_FHAPPCADGCE_OFFSET))(this, a1, a2);
		}

		::System::Boolean FCKKIOCMHDA(::System::String* a1, ::BOJKDLCIJCN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::BOJKDLCIJCN*))((::PBYTE)hIl2Cpp + JOKACBOADHJ_FCKKIOCMHDA_OFFSET))(this, a1, a2);
		}

		::System::Boolean CLFFOEBFLBE(::System::String* a1, ::BOJKDLCIJCN* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::BOJKDLCIJCN*))((::PBYTE)hIl2Cpp + JOKACBOADHJ_CLFFOEBFLBE_OFFSET))(this, a1, a2);
		}

	};

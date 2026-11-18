#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCOHKKFCLKH.h"

class PICPKGKNFMC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IAIJHNBNPBP_AICFBHHIFPA_OFFSET UNITYSDK_OFFSET(0x1E0A7330)
#define IAIJHNBNPBP_BOGCAJKBFEI_OFFSET UNITYSDK_OFFSET(0x1E0A67E0)
#define IAIJHNBNPBP_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x1E0A6FB0)
#define IAIJHNBNPBP_MKIADFEPBFC_OFFSET UNITYSDK_OFFSET(0x1E0A7640)
#define IAIJHNBNPBP_NCPIAJGDBGE_OFFSET UNITYSDK_OFFSET(0x1E0A6B60)
#define IAIJHNBNPBP_PHLGNLJDOBF_OFFSET UNITYSDK_OFFSET(0x1E0A73B0)
#define IAIJHNBNPBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6740)
#define IAIJHNBNPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A66B0)

inline static constexpr unsigned int IAIJHNBNPBP_TypeDefinitionIndex = 8409;

class IAIJHNBNPBP : public ::MCOHKKFCLKH
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>** StaticGet_GKNDIHCNNFG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>**)Il2CppClass::FromTypeDefinitionIndex(IAIJHNBNPBP_TypeDefinitionIndex)->GetStaticField(0x72D0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>* BEBPMJCPFHC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJHNBNPBP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAIJHNBNPBP__CCTOR_OFFSET))();
	}

	::System::Void BOGCAJKBFEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAIJHNBNPBP_BOGCAJKBFEI_OFFSET))(this);
	}

	static ::System::Void NCPIAJGDBGE(::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>*& KANPFHOPKPK)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>*&))((::PBYTE)hIl2Cpp + IAIJHNBNPBP_NCPIAJGDBGE_OFFSET))(KANPFHOPKPK);
	}

	static ::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAIJHNBNPBP_JNBGBKMJGAG_OFFSET))();
	}

	static ::IAIJHNBNPBP* PHLGNLJDOBF()
	{
		return ((::IAIJHNBNPBP*(*)())((::PBYTE)hIl2Cpp + IAIJHNBNPBP_PHLGNLJDOBF_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>* AICFBHHIFPA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>*(*)())((::PBYTE)hIl2Cpp + IAIJHNBNPBP_AICFBHHIFPA_OFFSET))();
	}

	static ::System::Void MKIADFEPBFC(::System::Boolean GMBHNOINAPK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>*& KANPFHOPKPK)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Collections::Generic::Dictionary_2<::System::String*, ::PICPKGKNFMC*>*&))((::PBYTE)hIl2Cpp + IAIJHNBNPBP_MKIADFEPBFC_OFFSET))(GMBHNOINAPK, KANPFHOPKPK);
	}
};

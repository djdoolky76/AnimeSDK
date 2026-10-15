#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"
class ABGNMNDCEND;
class KDIIINMLMNC;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }

#define IDGOINOHFEE_AGMDDOCEADF_OFFSET UNITYSDK_OFFSET(0x15EC61A0)
#define IDGOINOHFEE_CIPHIFNPMLH_OFFSET UNITYSDK_OFFSET(0x15EC6420)
#define IDGOINOHFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x15EC6900)
#define IDGOINOHFEE_DBFEIOFAAIK_OFFSET UNITYSDK_OFFSET(0x15EC68F0)
#define IDGOINOHFEE_DKACOPNBHEP_OFFSET UNITYSDK_OFFSET(0x15EC63B0)
#define IDGOINOHFEE_FIJPKBBAGBK_OFFSET UNITYSDK_OFFSET(0x15EC65F0)
#define IDGOINOHFEE_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0x15EC5FE0)
#define IDGOINOHFEE_LKIIKAKNPEM_OFFSET UNITYSDK_OFFSET(0x15EC6280)
#define IDGOINOHFEE_MBNPFPCOHHD_OFFSET UNITYSDK_OFFSET(0x15EC6880)
#define IDGOINOHFEE_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x15EC6270)
#define IDGOINOHFEE_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0x15EC68D0)
#define IDGOINOHFEE_OIKEFDFIAKN_OFFSET UNITYSDK_OFFSET(0x15EC6410)
#define IDGOINOHFEE_OJDJPDDDAHA_OFFSET UNITYSDK_OFFSET(0x15EC68E0)
#define IDGOINOHFEE_PADGFLLNOIC_OFFSET UNITYSDK_OFFSET(0x15EC60B0)
#define IDGOINOHFEE_PBBHNHLJIMN_OFFSET UNITYSDK_OFFSET(0x15EC6620)

inline static constexpr unsigned int IDGOINOHFEE_TypeDefinitionIndex = 73708;

	class IDGOINOHFEE : public ::System::Object
	{
	public:
		::RPG::Client::LiteInstancedItem::ItemPrototype* LLCCIDIEEBM; // 0x10
		::ABGNMNDCEND* EKKLHBBBDKO; // 0x18
		::KDIIINMLMNC* FJIICLPJOLP; // 0x20
		::UnityEngine::Vector4 HIJOAMLICNE; // 0x28
		::System::Boolean CNFKLPEKBCO; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 JGGDKOCIEGH; // 0x3C
		::UnityEngine::Matrix4x4 LKEHCIFAJNK; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_CTOR_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector4 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + IDGOINOHFEE_KPKCFMCJBCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PADGFLLNOIC(::System::Int32 a1, ::KDIIINMLMNC* a2, ::ABGNMNDCEND* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KDIIINMLMNC*, ::ABGNMNDCEND*))((::PBYTE)hIl2Cpp + IDGOINOHFEE_PADGFLLNOIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AGMDDOCEADF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_AGMDDOCEADF_OFFSET))(this);
		}

		::UnityEngine::Vector4 MILDAIHIGAI()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_MILDAIHIGAI_OFFSET))(this);
		}

		::System::Void LKIIKAKNPEM(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + IDGOINOHFEE_LKIIKAKNPEM_OFFSET))(this, a1);
		}

		::System::Boolean OIKEFDFIAKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_OIKEFDFIAKN_OFFSET))(this);
		}

		::System::Void CIPHIFNPMLH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IDGOINOHFEE_CIPHIFNPMLH_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 FIJPKBBAGBK()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_FIJPKBBAGBK_OFFSET))(this);
		}

		::System::Void PBBHNHLJIMN(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + IDGOINOHFEE_PBBHNHLJIMN_OFFSET))(this, a1);
		}

		::System::Void MBNPFPCOHHD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDGOINOHFEE_MBNPFPCOHHD_OFFSET))(this, a1);
		}

		::System::Boolean DKACOPNBHEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_DKACOPNBHEP_OFFSET))(this);
		}

		::System::Int32 OEIIDHFBKHG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_OEIIDHFBKHG_OFFSET))(this);
		}

		::ABGNMNDCEND* OJDJPDDDAHA()
		{
			return ((::ABGNMNDCEND*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_OJDJPDDDAHA_OFFSET))(this);
		}

		::RPG::Client::LiteInstancedItem::ItemPrototype* DBFEIOFAAIK()
		{
			return ((::RPG::Client::LiteInstancedItem::ItemPrototype*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGOINOHFEE_DBFEIOFAAIK_OFFSET))(this);
		}

	};

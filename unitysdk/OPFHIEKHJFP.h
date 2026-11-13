#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FiveDimRenderingItem;
class FiveDimRenderingPanel;
class HNLKNLJBHDD;
class JEHEMLENCIE;
class NNIKOAIKFMO;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OPFHIEKHJFP_ALGIMKIAJMM_OFFSET UNITYSDK_OFFSET(0x18AB72B0)
#define OPFHIEKHJFP_CGGKOGFLIIN_OFFSET UNITYSDK_OFFSET(0x18AB7CF0)
#define OPFHIEKHJFP_CMMEEEEOHIP_OFFSET UNITYSDK_OFFSET(0x18AB7410)
#define OPFHIEKHJFP_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB6EE0)
#define OPFHIEKHJFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AB8040)
#define OPFHIEKHJFP_DOAKFAJDIHJ_OFFSET UNITYSDK_OFFSET(0x18AB7B30)
#define OPFHIEKHJFP_FMJPEDGFGAJ_OFFSET UNITYSDK_OFFSET(0x18AB7BC0)
#define OPFHIEKHJFP_KIAHODCMHAK_OFFSET UNITYSDK_OFFSET(0x18AB7F10)
#define OPFHIEKHJFP_MALMBDLGEJJ_OFFSET UNITYSDK_OFFSET(0x18AB7150)
#define OPFHIEKHJFP_MEBMMDCKNHE_OFFSET UNITYSDK_OFFSET(0x18AB71E0)
#define OPFHIEKHJFP_OLDKLBKIDKL_OFFSET UNITYSDK_OFFSET(0x18AB7000)

inline static constexpr unsigned int OPFHIEKHJFP_TypeDefinitionIndex = 81897;

	class OPFHIEKHJFP : public ::System::Object
	{
	public:
		::NNIKOAIKFMO* HKCEFPHJGNC; // 0x10
		::UnityEngine::Transform* LBHPOLIMMLF; // 0x18
		::UnityEngine::Transform* FOMOFEFEJMF; // 0x20
		::HNLKNLJBHDD* GFFCKAFNBNN; // 0x28
		::FiveDimRenderingPanel* JHBKPBHIJPM; // 0x30
		::UnityEngine::GameObject* OPKJNAJAGHD; // 0x38
		::UnityEngine::Animation* BLCEIAOGFPD; // 0x40
		::UnityEngine::Transform* FNBEPLHHCFA; // 0x48
		::Il2CppArray<::FiveDimRenderingItem*>* HCMPGFIMIFH; // 0x50
		::System::Boolean AKHANGNGBKG; // 0x58
		// static const ::System::String* OGPPEBFDJJK; // 0x0
		// static const ::System::String* POEENICPJHP; // 0x0
		::System::Void _ctor(::NNIKOAIKFMO* a1, ::JEHEMLENCIE* a2, ::FiveDimRenderingPanel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NNIKOAIKFMO*, ::JEHEMLENCIE*, ::FiveDimRenderingPanel*))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OLDKLBKIDKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_OLDKLBKIDKL_OFFSET))(this);
		}

		::System::Void MEBMMDCKNHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_MEBMMDCKNHE_OFFSET))(this);
		}

		::System::Void CMMEEEEOHIP(::HNLKNLJBHDD* a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*, ::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_CMMEEEEOHIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CGGKOGFLIIN(::HNLKNLJBHDD* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::HNLKNLJBHDD*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_CGGKOGFLIIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KIAHODCMHAK(::System::Boolean a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::MVector2))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_KIAHODCMHAK_OFFSET))(this, a1, a2);
		}

		::System::Void MALMBDLGEJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_MALMBDLGEJJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_DISPOSE_OFFSET))(this);
		}

		::System::Void FMJPEDGFGAJ(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_FMJPEDGFGAJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOAKFAJDIHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_DOAKFAJDIHJ_OFFSET))(this);
		}

		::System::Void ALGIMKIAJMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPFHIEKHJFP_ALGIMKIAJMM_OFFSET))(this);
		}

	};

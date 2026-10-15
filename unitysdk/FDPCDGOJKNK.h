#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKLKGGKAJO;
namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define FDPCDGOJKNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x156D78E0)
#define FDPCDGOJKNK_CDJHBMGINFC_OFFSET UNITYSDK_OFFSET(0x156D65E0)
#define FDPCDGOJKNK_CTOR_OFFSET UNITYSDK_OFFSET(0x156D5570)
#define FDPCDGOJKNK_DOPMGINNBIA_OFFSET UNITYSDK_OFFSET(0x156D6140)
#define FDPCDGOJKNK_EBPIJDKDJJH_OFFSET UNITYSDK_OFFSET(0x156D6FF0)
#define FDPCDGOJKNK_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x156D7390)
#define FDPCDGOJKNK_HCCPAFCKNFO_OFFSET UNITYSDK_OFFSET(0x156D7080)
#define FDPCDGOJKNK_IBDPJHDDAFF_OFFSET UNITYSDK_OFFSET(0x156D6580)
#define FDPCDGOJKNK_KACEKCCNLEN_OFFSET UNITYSDK_OFFSET(0x156D7850)
#define FDPCDGOJKNK_KKKDPBIFEFM_OFFSET UNITYSDK_OFFSET(0x156D6C30)
#define FDPCDGOJKNK_KKKNPNBEAGL_OFFSET UNITYSDK_OFFSET(0x156D77F0)
#define FDPCDGOJKNK_LOPIPDBEPBA_OFFSET UNITYSDK_OFFSET(0x156D61B0)
#define FDPCDGOJKNK_MKCLNEIPPDB_OFFSET UNITYSDK_OFFSET(0x156D63F0)
#define FDPCDGOJKNK_MPGCMMDHIEK_OFFSET UNITYSDK_OFFSET(0x156D75C0)
#define FDPCDGOJKNK_NECHHGIJOGN_OFFSET UNITYSDK_OFFSET(0x156D6AD0)
#define FDPCDGOJKNK_NEOOGJPNGLK_OFFSET UNITYSDK_OFFSET(0x156D62E0)
#define FDPCDGOJKNK_NGAFFJCJABL_OFFSET UNITYSDK_OFFSET(0x156D6910)
#define FDPCDGOJKNK_OOCLHEECAAM_OFFSET UNITYSDK_OFFSET(0x156D7540)
#define FDPCDGOJKNK_PLOCPDHDFKF_OFFSET UNITYSDK_OFFSET(0x156D6B30)

inline static constexpr unsigned int FDPCDGOJKNK_TypeDefinitionIndex = 60332;

	class FDPCDGOJKNK : public ::System::Object
	{
	public:
		::UnityEngine::Material* EMCGLBLLBLJ; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* FOIIFJMHCNO; // 0x18
		::UnityEngine::Transform* HLFHPNEAKCB; // 0x20
		::UnityEngine::Texture* CMLNPNBEKEI; // 0x28
		::UnityEngine::Material* JNAPJPJOKCP; // 0x30
		::UnityEngine::Transform* IHJFJBHBOHP; // 0x38
		::UnityEngine::Texture* BMODFJHNCNA; // 0x40
		::UnityEngine::MeshRenderer* BCEMGBIBFMC; // 0x48
		::UnityEngine::Transform* CBHKDGMBCJL; // 0x50
		::UnityEngine::Material* DNEHPJNKDAH; // 0x58
		::IGKLKGGKAJO* GONHBBDHIAB; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* PHKJFHEIODK; // 0x68
		::UnityEngine::MaterialPropertyBlock* LCAGOLEJJJK; // 0x70
		::RPG::GameCore::ActivityDiceCombatDiceContentRow* BJJGEMDOOOI; // 0x78
		::UnityEngine::MeshRenderer* MEPFMMKIOIG; // 0x80
		::UnityEngine::Texture* LPEKELPEKOJ; // 0x88
		::UnityEngine::Transform* KCOCFDGJDDD; // 0x90
		::System::UInt32 NOIFPKDOLCO; // 0x98
		::System::UInt32 GHJPOHJPNAA; // 0x9C
		::System::UInt32 JBMOIEJNEFD; // 0xA0
		::System::UInt32 JHPKPJJDFNH; // 0xA4
		static ::System::Int32* StaticGet_MFMJGAKGOFP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FDPCDGOJKNK")->GetStaticField(0x133E0);
		}

		::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::UnityEngine::Transform* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDPCDGOJKNK_CCTOR_OFFSET))();
		}

		::System::Void NGAFFJCJABL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_NGAFFJCJABL_OFFSET))(this, a1);
		}

		::System::Void PLOCPDHDFKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_PLOCPDHDFKF_OFFSET))(this);
		}

		::System::Void KKKDPBIFEFM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_KKKDPBIFEFM_OFFSET))(this, a1);
		}

		::System::Void CDJHBMGINFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_CDJHBMGINFC_OFFSET))(this);
		}

		::System::Void HCCPAFCKNFO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_HCCPAFCKNFO_OFFSET))(this, a1);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MKCLNEIPPDB(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_MKCLNEIPPDB_OFFSET))(this, a1);
		}

		::System::Void NEOOGJPNGLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_NEOOGJPNGLK_OFFSET))(this);
		}

		::System::Void LOPIPDBEPBA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_LOPIPDBEPBA_OFFSET))(this, a1);
		}

		::System::Void NECHHGIJOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_NECHHGIJOGN_OFFSET))(this);
		}

		::System::Void OOCLHEECAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_OOCLHEECAAM_OFFSET))(this);
		}

		::System::Void MPGCMMDHIEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_MPGCMMDHIEK_OFFSET))(this);
		}

		::UnityEngine::Material* EBPIJDKDJJH()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_EBPIJDKDJJH_OFFSET))(this);
		}

		::System::Boolean IBDPJHDDAFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_IBDPJHDDAFF_OFFSET))(this);
		}

		::System::UInt32 KKKNPNBEAGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_KKKNPNBEAGL_OFFSET))(this);
		}

		::System::UInt32 KACEKCCNLEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_KACEKCCNLEN_OFFSET))(this);
		}

		::System::Boolean DOPMGINNBIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPCDGOJKNK_DOPMGINNBIA_OFFSET))(this);
		}

	};

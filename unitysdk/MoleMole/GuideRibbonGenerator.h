#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class RibbonControlPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_GUIDERIBBONGENERATOR_ADJJNCCPCOG_OFFSET UNITYSDK_OFFSET(0x13EE6090)
#define MOLEMOLE_GUIDERIBBONGENERATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x13EE58D0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_BLNLFHOOJKO_OFFSET UNITYSDK_OFFSET(0x13EE8BE0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_BPFKKHBILGD_OFFSET UNITYSDK_OFFSET(0x13EE5A30)
#define MOLEMOLE_GUIDERIBBONGENERATOR_CLOFKPOMOJN_OFFSET UNITYSDK_OFFSET(0x13EE81A0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_FALMJOBEADN_OFFSET UNITYSDK_OFFSET(0x13EE76C0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_JBDOFMIIHKN_OFFSET UNITYSDK_OFFSET(0x13EE62B0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_JDEELEJIDLE_OFFSET UNITYSDK_OFFSET(0x13EE5C40)
#define MOLEMOLE_GUIDERIBBONGENERATOR_LEFFFFJHNPF_OFFSET UNITYSDK_OFFSET(0x13EE7130)
#define MOLEMOLE_GUIDERIBBONGENERATOR_MBAEHICJKFI_OFFSET UNITYSDK_OFFSET(0x13EE7E50)
#define MOLEMOLE_GUIDERIBBONGENERATOR_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x13EE6220)
#define MOLEMOLE_GUIDERIBBONGENERATOR_REBUILD_OFFSET UNITYSDK_OFFSET(0x13EE6F90)
#define MOLEMOLE_GUIDERIBBONGENERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x13EE6040)
#define MOLEMOLE_GUIDERIBBONGENERATOR_SETCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x13EE6FE0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_SETMATERIALS_OFFSET UNITYSDK_OFFSET(0x13EE70E0)
#define MOLEMOLE_GUIDERIBBONGENERATOR_SETUVPARAMS_OFFSET UNITYSDK_OFFSET(0x13EE7030)
#define MOLEMOLE_GUIDERIBBONGENERATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x13EE6260)
#define MOLEMOLE_GUIDERIBBONGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE73C0)

namespace MoleMole
{
	inline static constexpr unsigned int GuideRibbonGenerator_TypeDefinitionIndex = 38383;

	class GuideRibbonGenerator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single ODOIEEONHPI; // 0x0
		// static const ::System::Int32 OOBDBINNJOA = 0x4; // 0x0
		// static const ::System::Int32 KCPDHAGIGDP = 0x200; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::RibbonControlPoint*>* controlPoints; // 0x18
		::System::Int32 editorSelectedIndex; // 0x20
		::System::Single segmentLength; // 0x24
		::System::Int32 maxSubdivisions; // 0x28
		::System::Int32 widthSegments; // 0x2C
		::System::Single uTiling; // 0x30
		::System::Single vTiling; // 0x34
		::System::Boolean swapUV; // 0x38
		::System::Boolean flipU; // 0x39
		::System::Boolean flipV; // 0x3A
		::System::Byte _padding0[0x5];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* materials; // 0x40
		::System::Boolean isEditing; // 0x48
		::System::Byte _padding1[0x7];
		::System::String* bakeOutputPath; // 0x50
		::System::String* bakeAssetName; // 0x58
		::UnityEngine::MeshFilter* LBALKNPLFDO; // 0x60
		::UnityEngine::MeshRenderer* CKHLMKDJPDI; // 0x68
		::UnityEngine::Mesh* BMCABGEMEOP; // 0x70
		::System::Boolean IANHKOLCODN; // 0x78
		::System::Byte _padding2[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* NABNCFHOACM; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* BIGFMODMDBN; // 0x88
		::System::Collections::Generic::List_1<::System::Single>* NKGPGCOCMND; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* GKEBCFDJMBN; // 0x98
		::Il2CppArray<::System::Single>* KNDFECKKAEC; // 0xA0
		::Il2CppArray<::System::Single>* JOKGDEEOAAI; // 0xA8
		::Il2CppArray<::System::Single>* MEMAGMOJCCK; // 0xB0
		::Il2CppArray<::System::Single>* CFKMLKDIKGD; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_AWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_RESET_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_UPDATE_OFFSET))(this);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_REBUILD_OFFSET))(this);
		}

		::System::Void SetControlPoints(::System::Collections::Generic::List_1<::MoleMole::RibbonControlPoint*>* CELGKCKLPJC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::RibbonControlPoint*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_SETCONTROLPOINTS_OFFSET))(this, CELGKCKLPJC);
		}

		::System::Void SetUVParams(::System::Single CGHANJAFEIL, ::System::Single NCIAAAMFHCN, ::System::Boolean LKAFCDIOJED, ::System::Boolean CFMDONIJDKD, ::System::Boolean FPHEJOPFAAE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_SETUVPARAMS_OFFSET))(this, CGHANJAFEIL, NCIAAAMFHCN, LKAFCDIOJED, CFMDONIJDKD, FPHEJOPFAAE);
		}

		::System::Void SetMaterials(::System::Collections::Generic::List_1<::UnityEngine::Material*>* OKFHHLJFHII)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_SETMATERIALS_OFFSET))(this, OKFHHLJFHII);
		}

		::System::Void BPFKKHBILGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_BPFKKHBILGD_OFFSET))(this);
		}

		::System::Void ADJJNCCPCOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_ADJJNCCPCOG_OFFSET))(this);
		}

		::System::Void JDEELEJIDLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_JDEELEJIDLE_OFFSET))(this);
		}

		::System::Void FALMJOBEADN(::System::Single IMLLDOHDCNC, ::UnityEngine::Vector3& OHOGDOMNHNK, ::System::Single& JBGLCAFPGHK, ::System::Single& FLKMOKLIPKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_FALMJOBEADN_OFFSET))(this, IMLLDOHDCNC, OHOGDOMNHNK, JBGLCAFPGHK, FLKMOKLIPKN);
		}

		::System::Void JBDOFMIIHKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_JBDOFMIIHKN_OFFSET))(this);
		}

		::System::Void LEFFFFJHNPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_LEFFFFJHNPF_OFFSET))(this);
		}

		::System::Void CLOFKPOMOJN(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OJKLNDIBAKG, ::System::Collections::Generic::List_1<::System::Single>* HJCFAAPNEFI, ::System::Collections::Generic::List_1<::System::Single>* INGPIAEIAIF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_CLOFKPOMOJN_OFFSET))(this, OJKLNDIBAKG, HJCFAAPNEFI, INGPIAEIAIF);
		}

		static ::System::Void MBAEHICJKFI(::UnityEngine::Vector3& FFDFGGJEKJI, ::UnityEngine::Vector3& FGLJPLFOOKH, ::UnityEngine::Vector3& JKJBHEJKNDO, ::UnityEngine::Vector3& BPOHOCFMGOA, ::System::Single& IICCGFIOBNH, ::System::Single& MBELCKOBADI, ::System::Single& PDLGKAJMBPO, ::System::Single& LACOGLFMDFO, ::System::Single& BHMADFLJFBL, ::System::Single& ODNCPJNEPMM, ::System::Single& CHMMMOGICFH, ::System::Single& LIHEKCAHBBJ, ::System::Int32 HBJOLKHGGDD, ::System::Boolean CHCNMJNAJKI, ::System::Single OJEAHHBCAAN, ::System::Single EEBGKAHLFNO)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_MBAEHICJKFI_OFFSET))(FFDFGGJEKJI, FGLJPLFOOKH, JKJBHEJKNDO, BPOHOCFMGOA, IICCGFIOBNH, MBELCKOBADI, PDLGKAJMBPO, LACOGLFMDFO, BHMADFLJFBL, ODNCPJNEPMM, CHMMMOGICFH, LIHEKCAHBBJ, HBJOLKHGGDD, CHCNMJNAJKI, OJEAHHBCAAN, EEBGKAHLFNO);
		}

		static ::UnityEngine::Vector3 BLNLFHOOJKO(::UnityEngine::Vector3 PCOEGKNOBHA)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_GUIDERIBBONGENERATOR_BLNLFHOOJKO_OFFSET))(PCOEGKNOBHA);
		}
	};
}
